#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};




// Corresponds to navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TriggerInteractionGate_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub gate_id: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub prompt_message: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub available_actions: Vec<std::string::String>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub timeout_seconds: i32,

}



impl Default for TriggerInteractionGate_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::TriggerInteractionGate_Request::default())
  }
}

impl rosidl_runtime_rs::Message for TriggerInteractionGate_Request {
  type RmwMsg = super::srv::rmw::TriggerInteractionGate_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        gate_id: msg.gate_id.as_str().into(),
        prompt_message: msg.prompt_message.as_str().into(),
        available_actions: msg.available_actions
          .into_iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        timeout_seconds: msg.timeout_seconds,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        gate_id: msg.gate_id.as_str().into(),
        prompt_message: msg.prompt_message.as_str().into(),
        available_actions: msg.available_actions
          .iter()
          .map(|elem| elem.as_str().into())
          .collect(),
      timeout_seconds: msg.timeout_seconds,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      gate_id: msg.gate_id.to_string(),
      prompt_message: msg.prompt_message.to_string(),
      available_actions: msg.available_actions
          .into_iter()
          .map(|elem| elem.to_string())
          .collect(),
      timeout_seconds: msg.timeout_seconds,
    }
  }
}


// Corresponds to navpro_enterprise_interfaces__srv__TriggerInteractionGate_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TriggerInteractionGate_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub selected_action: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub operator_notes: std::string::String,

}



impl Default for TriggerInteractionGate_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::TriggerInteractionGate_Response::default())
  }
}

impl rosidl_runtime_rs::Message for TriggerInteractionGate_Response {
  type RmwMsg = super::srv::rmw::TriggerInteractionGate_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        selected_action: msg.selected_action.as_str().into(),
        operator_notes: msg.operator_notes.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        selected_action: msg.selected_action.as_str().into(),
        operator_notes: msg.operator_notes.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      selected_action: msg.selected_action.to_string(),
      operator_notes: msg.operator_notes.to_string(),
    }
  }
}






#[link(name = "navpro_enterprise_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__navpro_enterprise_interfaces__srv__TriggerInteractionGate() -> *const std::ffi::c_void;
}

// Corresponds to navpro_enterprise_interfaces__srv__TriggerInteractionGate
#[allow(missing_docs, non_camel_case_types)]
pub struct TriggerInteractionGate;

impl rosidl_runtime_rs::Service for TriggerInteractionGate {
    type Request = TriggerInteractionGate_Request;
    type Response = TriggerInteractionGate_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__navpro_enterprise_interfaces__srv__TriggerInteractionGate() }
    }
}


