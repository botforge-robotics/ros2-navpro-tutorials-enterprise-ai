import React, { useState, useEffect } from 'react';
import { 
  X, 
  Radio, 
  CheckCircle2, 
  AlertCircle, 
  Send, 
  Star, 
  Server,
  User,
  Mail,
  Building2,
  Workflow,
  Laptop
} from 'lucide-react';
import { detectLocalIp } from '../hooks/useInstructorSync';

export function RegistrationModal({ 
  isOpen, 
  onClose, 
  studentInfo, 
  onRegister, 
  connectionStatus, 
  workshopName,
  gates,
  onSubmitFeedback
}) {
  const [formData, setFormData] = useState({
    name: studentInfo.name || '',
    email_roll: studentInfo.email_roll || '',
    org_college: studentInfo.org_college || '',
    host_ip: studentInfo.host_ip && studentInfo.host_ip !== 'localhost' ? studentInfo.host_ip : '',
    client_ip: studentInfo.client_ip || ''
  });

  useEffect(() => {
    if (!formData.client_ip) {
      detectLocalIp().then((ip) => {
        if (ip) {
          setFormData((prev) => ({ ...prev, client_ip: ip }));
        }
      });
    }
  }, []);

  const [errorMessage, setErrorMessage] = useState('');
  const [isSubmitting, setIsSubmitting] = useState(false);
  const [feedbackRating, setFeedbackRating] = useState(5);
  const [feedbackComments, setFeedbackComments] = useState('');
  const [favoriteModule, setFavoriteModule] = useState('MCP Robotics Server');
  const [feedbackSubmitted, setFeedbackSubmitted] = useState(false);
  const [activeTab, setActiveTab] = useState('registration'); // 'registration' | 'feedback'

  if (!isOpen) return null;

  const handleSubmit = async (e) => {
    e.preventDefault();
    setErrorMessage('');
    if (!formData.name.trim() || !formData.email_roll.trim()) {
      setErrorMessage('Please enter both your full name and student email / roll number.');
      return;
    }
    const cleanIp = formData.host_ip.trim().replace(/^https?:\/\//i, '').split('/')[0].split(':')[0];
    if (!cleanIp) {
      setErrorMessage('Please enter the Instructor Host Wi-Fi IP address shown on the projector.');
      return;
    }

    setIsSubmitting(true);
    const result = await onRegister({
      ...formData,
      host_ip: cleanIp,
      client_ip: formData.client_ip?.trim() || undefined
    });
    setIsSubmitting(false);

    if (result && result.success) {
      setErrorMessage('');
      onClose();
    } else {
      const errDetail = result?.error ? ` (${result.error})` : '';
      setErrorMessage(`❌ Could not connect to Instructor Host at http://${cleanIp}:9000${errDetail}. Please verify the Wi-Fi IP address shown on the instructor screen and ensure your laptop is on the same network.`);
    }
  };

  const handleFeedbackSubmit = async (e) => {
    e.preventDefault();
    const success = await onSubmitFeedback(feedbackRating, feedbackComments, favoriteModule);
    if (success) {
      setFeedbackSubmitted(true);
    }
  };

  return (
    <div className="modal-overlay fade-in" onClick={onClose} style={{ zIndex: 10000 }}>
      <div className="modal-card" onClick={e => e.stopPropagation()}>
        <div className="modal-header">
          <div className="modal-title-wrap">
            <Radio size={20} className="modal-title-icon" />
            <div>
              <h3>Student Login &bull; Workshop Attendance</h3>
              <span className="modal-subtitle">
                Level 2 Enterprise Fleet &amp; MCP AI Track
              </span>
            </div>
          </div>
          <button className="modal-close-btn" onClick={onClose} aria-label="Close modal">
            <X size={18} />
          </button>
        </div>

        {gates.gate_feedback_open && (
          <div className="modal-tabs">
            <button 
              className={`modal-tab-btn ${activeTab === 'registration' ? 'active' : ''}`}
              onClick={() => setActiveTab('registration')}
            >
              Student Profile
            </button>
            <button 
              className={`modal-tab-btn ${activeTab === 'feedback' ? 'active' : ''}`}
              onClick={() => setActiveTab('feedback')}
            >
              Rate Workshop ⭐
            </button>
          </div>
        )}

        <div className="modal-body">
          {activeTab === 'registration' ? (
            <form onSubmit={handleSubmit} className="modal-form">
              <div className="form-group">
                <label>
                  <User size={14} />
                  <span>Full Name</span>
                </label>
                <input
                  type="text"
                  required
                  placeholder="e.g. Jordan Hayes"
                  value={formData.name}
                  onChange={e => setFormData({ ...formData, name: e.target.value })}
                />
              </div>

              <div className="form-group">
                <label>
                  <Mail size={14} />
                  <span>Email or Student Roll No</span>
                </label>
                <input
                  type="text"
                  required
                  placeholder="e.g. jordan.hayes@robotics.org"
                  value={formData.email_roll}
                  onChange={e => setFormData({ ...formData, email_roll: e.target.value })}
                />
              </div>

              <div className="form-group">
                <label>
                  <Building2 size={14} />
                  <span>College, Organization or Company</span>
                </label>
                <input
                  type="text"
                  placeholder="e.g. Autonomous Systems AI Lab"
                  value={formData.org_college}
                  onChange={e => setFormData({ ...formData, org_college: e.target.value })}
                />
              </div>

              <div className="form-group">
                <label>
                  <Server size={14} />
                  <span>Instructor Host IP (Port 9000)</span>
                </label>
                <input
                  type="text"
                  placeholder="e.g. 192.168.1.100 or 192.168.0.101"
                  value={formData.host_ip}
                  onChange={e => {
                    setFormData({ ...formData, host_ip: e.target.value });
                    if (errorMessage) setErrorMessage('');
                  }}
                  onBlur={e => {
                    let v = e.target.value.trim().replace(/^https?:\/\//i, '').split('/')[0].split(':')[0];
                    if (v) setFormData({ ...formData, host_ip: v });
                  }}
                />
                <div className="ip-port-clarification-card" style={{
                  marginTop: '0.5rem',
                  padding: '0.6rem 0.85rem',
                  background: 'rgba(59, 130, 246, 0.08)',
                  border: '1px solid rgba(59, 130, 246, 0.25)',
                  borderRadius: '8px',
                  fontSize: '0.82rem',
                  lineHeight: '1.45',
                  color: 'var(--text-secondary)'
                }}>
                  <div style={{ fontWeight: 700, color: 'var(--accent-primary)', marginBottom: '3px', display: 'flex', alignItems: 'center', gap: '4px' }}>
                    💡 Do I need to enter the port (:9000)?
                  </div>
                  <div>
                    <strong>NO, enter the Wi-Fi IP address only</strong> (e.g. <code>192.168.1.100</code> or <code>192.168.0.101</code> as shown on the instructor screen). 
                    Port 9000 is automatically connected in the background. 
                    <em>(If you accidentally type <code>:9000</code> or <code>http://</code>, it will be automatically formatted for you).</em>
                  </div>
                </div>
              </div>

              <div className="form-group">
                <label>
                  <Laptop size={14} />
                  <span>Your Device / Station IP (Auto-Detected)</span>
                </label>
                <input
                  type="text"
                  placeholder="e.g. 192.168.1.45 (Auto-detected)"
                  value={formData.client_ip}
                  onChange={e => setFormData({ ...formData, client_ip: e.target.value })}
                />
              </div>

              {errorMessage && (
                <div style={{
                  background: '#fef2f2',
                  border: '1px solid #f87171',
                  color: '#b91c1c',
                  padding: '0.75rem 1rem',
                  borderRadius: '8px',
                  fontSize: '0.85rem',
                  lineHeight: '1.45',
                  fontWeight: 600,
                  marginTop: '0.5rem'
                }}>
                  {errorMessage}
                </div>
              )}

              <div className="sync-status-banner">
                <div className={`status-indicator ${connectionStatus}`}></div>
                <div className="status-text">
                  <strong>Status: {connectionStatus === 'connected' ? 'Connected' : 'Offline / Standalone'}</strong>
                  <span>
                    {connectionStatus === 'connected' 
                      ? 'Heartbeats are active. Quizzes and Level 2 verification passes sync directly to instructor host.'
                      : 'You can study completely offline! Progress is safely preserved in local browser storage.'}
                  </span>
                </div>
              </div>

              <div className="modal-footer">
                <button type="button" className="btn-cancel" onClick={onClose}>
                  Cancel
                </button>
                <button type="submit" className="btn-submit" disabled={isSubmitting}>
                  <Send size={14} />
                  <span>{isSubmitting ? 'Submitting Attendance...' : 'Save & Submit Attendance'}</span>
                </button>
              </div>
            </form>
          ) : (
            <div className="feedback-section">
              {feedbackSubmitted ? (
                <div className="feedback-success-card">
                  <CheckCircle2 size={36} className="success-icon" />
                  <h4>Thank You for Your Feedback!</h4>
                  <p>Your ratings and comments have been recorded on the instructor central server.</p>
                  <button type="button" className="btn-submit" onClick={onClose} style={{ marginTop: '1rem' }}>
                    Close
                  </button>
                </div>
              ) : (
                <form onSubmit={handleFeedbackSubmit} className="modal-form">
                  <div className="form-group">
                    <label>
                      <Star size={14} />
                      <span>Rate Workshop Experience</span>
                    </label>
                    <div className="star-rating-row">
                      {[1, 2, 3, 4, 5].map(star => (
                        <button
                          key={star}
                          type="button"
                          className={`star-btn ${star <= feedbackRating ? 'filled' : ''}`}
                          onClick={() => setFeedbackRating(star)}
                        >
                          <Star size={24} fill={star <= feedbackRating ? '#f59e0b' : 'none'} />
                        </button>
                      ))}
                      <span className="rating-num">{feedbackRating} / 5</span>
                    </div>
                  </div>

                  <div className="form-group">
                    <label>
                      <Workflow size={14} />
                      <span>Favorite Enterprise Module</span>
                    </label>
                    <select
                      className="form-control"
                      value={favoriteModule}
                      onChange={e => setFavoriteModule(e.target.value)}
                    >
                      <option value="FastAPI REST & Telemetry WebSockets">FastAPI REST &amp; Telemetry WebSockets</option>
                      <option value="Canvas Fleet Cockpit & Virtual Joystick">Canvas Fleet Cockpit &amp; Virtual Joystick</option>
                      <option value="MCP Robotics Server & Frontier LLMs">MCP Robotics Server &amp; Frontier LLMs</option>
                      <option value="Mission DAG Engine & Edge Smartwatch">Mission DAG Engine &amp; Edge Smartwatch</option>
                    </select>
                  </div>

                  <div className="form-group">
                    <label>
                      <span>Key Takeaways &amp; Feedback</span>
                    </label>
                    <textarea
                      rows={3}
                      placeholder="What was the most impactful concept you learned in Level 2?"
                      value={feedbackComments}
                      onChange={e => setFeedbackComments(e.target.value)}
                    />
                  </div>

                  <div className="modal-footer">
                    <button type="button" className="btn-cancel" onClick={onClose}>
                      Cancel
                    </button>
                    <button type="submit" className="btn-submit">
                      <Send size={14} />
                      <span>Submit Review</span>
                    </button>
                  </div>
                </form>
              )}
            </div>
          )}
        </div>
      </div>
    </div>
  );
}
