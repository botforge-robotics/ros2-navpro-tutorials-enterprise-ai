import React, { useState } from 'react';
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
  Workflow
} from 'lucide-react';

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
    host_ip: studentInfo.host_ip || window.location.hostname || 'localhost'
  });

  const [isSubmitting, setIsSubmitting] = useState(false);
  const [feedbackRating, setFeedbackRating] = useState(5);
  const [feedbackComments, setFeedbackComments] = useState('');
  const [favoriteModule, setFavoriteModule] = useState('MCP Robotics Server');
  const [feedbackSubmitted, setFeedbackSubmitted] = useState(false);
  const [activeTab, setActiveTab] = useState('registration'); // 'registration' | 'feedback'

  if (!isOpen) return null;

  const handleSubmit = async (e) => {
    e.preventDefault();
    if (!formData.name || !formData.email_roll) return;
    setIsSubmitting(true);
    await onRegister(formData);
    setIsSubmitting(false);
    onClose();
  };

  const handleFeedbackSubmit = async (e) => {
    e.preventDefault();
    const success = await onSubmitFeedback(feedbackRating, feedbackComments, favoriteModule);
    if (success) {
      setFeedbackSubmitted(true);
    }
  };

  return (
    <div className="modal-overlay fade-in" onClick={onClose}>
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
                  placeholder="e.g. 192.168.1.100 or localhost"
                  value={formData.host_ip}
                  onChange={e => setFormData({ ...formData, host_ip: e.target.value })}
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
                    <strong>NO, enter the IP address only</strong> (e.g. <code>192.168.1.100</code> or <code>localhost</code>). 
                    Port 9000 is automatically connected in the background. 
                    <em>(If you accidentally type <code>:9000</code> or <code>http://</code>, it will be automatically formatted for you).</em>
                  </div>
                </div>
              </div>

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
