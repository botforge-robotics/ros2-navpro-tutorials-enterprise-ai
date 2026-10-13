import { useState, useEffect, useCallback, useRef } from 'react';

const STORAGE_KEY_STUDENT = 'navpro_l2_student_info';

export function useInstructorSync(completedLessons, quizScores, currentLessonId) {
  const [studentInfo, setStudentInfo] = useState(() => {
    try {
      const saved = localStorage.getItem(STORAGE_KEY_STUDENT);
      if (saved) return JSON.parse(saved);
    } catch {}
    return {
      name: '',
      email_roll: '',
      org_college: '',
      host_ip: window.location.hostname || 'localhost',
      registered: false,
      student_id: null
    };
  });

  const [isModalOpen, setIsModalOpen] = useState(false);
  const [connectionStatus, setConnectionStatus] = useState('offline'); // 'connected' | 'connecting' | 'offline'
  const [workshopName, setWorkshopName] = useState('Local Study Mode');
  const [gates, setGates] = useState({
    gate_quizzes_open: true,
    gate_assignments_open: true,
    gate_feedback_open: false
  });

  const heartbeatRef = useRef(null);

  // Determine base API URL
  const getApiBase = useCallback((ip) => {
    const host = ip || studentInfo.host_ip || 'localhost';
    const port = 9000;
    return `http://${host}:${port}`;
  }, [studentInfo.host_ip]);

  // Register student with host
  const registerStudent = useCallback(async (info) => {
    try {
      setConnectionStatus('connecting');
      const apiBase = getApiBase(info.host_ip);
      const res = await fetch(`${apiBase}/api/sync/register`, {
        method: 'POST',
        headers: { 'Content-Type': 'application/json' },
        body: JSON.stringify({
          name: info.name,
          email: info.email_roll,
          organization: info.org_college,
          level: 'level2'
        })
      });

      if (!res.ok) throw new Error(`Server responded with ${res.status}`);
      const data = await res.json();
      
      const updated = {
        ...info,
        registered: true,
        student_id: data.student_id || info.email_roll
      };
      setStudentInfo(updated);
      localStorage.setItem(STORAGE_KEY_STUDENT, JSON.stringify(updated));
      setConnectionStatus('connected');
      if (data.workshop_name) setWorkshopName(data.workshop_name);
      if (data.gates) {
        setGates({
          gate_quizzes_open: data.gates.allow_quizzes === 1,
          gate_assignments_open: data.gates.allow_assignments === 1,
          gate_feedback_open: data.gates.allow_feedback === 1
        });
      }
      return { success: true };
    } catch (err) {
      console.warn('Workshop registration failed (continuing in offline mode):', err.message);
      // Still save locally so student isn't blocked
      const updated = {
        ...info,
        registered: true,
        student_id: info.email_roll || `local_${Date.now()}`
      };
      setStudentInfo(updated);
      localStorage.setItem(STORAGE_KEY_STUDENT, JSON.stringify(updated));
      setConnectionStatus('offline');
      return { success: false, error: err.message };
    }
  }, [getApiBase]);

  // Periodic heartbeat sync
  const sendHeartbeat = useCallback(async () => {
    if (!studentInfo.registered || !studentInfo.student_id) return;

    try {
      const apiBase = getApiBase(studentInfo.host_ip);
      const totalScore = Object.values(quizScores).reduce((acc, q) => acc + (q.score || 0), 0);

      const res = await fetch(`${apiBase}/api/sync/progress`, {
        method: 'POST',
        headers: { 'Content-Type': 'application/json' },
        body: JSON.stringify({
          student_id: studentInfo.student_id,
          level: 'level2',
          active_lesson: currentLessonId || 'overview',
          completed_count: completedLessons.length,
          completed_lessons: completedLessons,
          quiz_score: totalScore,
          quiz_scores: quizScores
        })
      });

      if (res.ok) {
        const data = await res.json();
        setConnectionStatus('connected');
        if (data.gates) {
          setGates({
            gate_quizzes_open: data.gates.allow_quizzes === 1,
            gate_assignments_open: data.gates.allow_assignments === 1,
            gate_feedback_open: data.gates.allow_feedback === 1
          });
        }
      } else {
        setConnectionStatus('offline');
      }
    } catch {
      setConnectionStatus('offline');
    }
  }, [studentInfo, completedLessons, quizScores, currentLessonId, getApiBase]);

  // Submit feedback
  const submitFeedback = useCallback(async (rating, comments, favoriteModule = '') => {
    if (!studentInfo.registered) return false;
    try {
      const apiBase = getApiBase(studentInfo.host_ip);
      const res = await fetch(`${apiBase}/api/sync/feedback`, {
        method: 'POST',
        headers: { 'Content-Type': 'application/json' },
        body: JSON.stringify({
          student_id: studentInfo.student_id,
          student_name: studentInfo.name,
          rating,
          feedback_text: comments,
          favorite_module: favoriteModule
        })
      });
      return res.ok;
    } catch {
      return false;
    }
  }, [studentInfo, getApiBase]);

  // Start heartbeat interval
  useEffect(() => {
    if (studentInfo.registered) {
      sendHeartbeat();
      heartbeatRef.current = setInterval(sendHeartbeat, 5000); // every 5 seconds
    }
    return () => {
      if (heartbeatRef.current) clearInterval(heartbeatRef.current);
    };
  }, [studentInfo.registered, sendHeartbeat]);

  return {
    studentInfo,
    isModalOpen,
    setIsModalOpen,
    connectionStatus,
    workshopName,
    gates,
    registerStudent,
    submitFeedback
  };
}
