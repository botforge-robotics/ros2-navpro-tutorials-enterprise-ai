#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



#[link(name = "navpro_enterprise_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request() -> *const std::ffi::c_void;
}

#[link(name = "navpro_enterprise_interfaces__rosidl_generator_c")]
extern "C" {
    fn navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request__init(msg: *mut TriggerInteractionGate_Request) -> bool;
    fn navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<TriggerInteractionGate_Request>, size: usize) -> bool;
    fn navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<TriggerInteractionGate_Request>);
    fn navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<TriggerInteractionGate_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<TriggerInteractionGate_Request>) -> bool;
}

// Corresponds to navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TriggerInteractionGate_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub gate_id: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub prompt_message: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub available_actions: rosidl_runtime_rs::Sequence<rosidl_runtime_rs::String>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub timeout_seconds: i32,

}



impl Default for TriggerInteractionGate_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request__init(&mut msg as *mut _) {
        panic!("Call to navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for TriggerInteractionGate_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for TriggerInteractionGate_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for TriggerInteractionGate_Request where Self: Sized {
  const TYPE_NAME: &'static str = "navpro_enterprise_interfaces/srv/TriggerInteractionGate_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request() }
  }
}


#[link(name = "navpro_enterprise_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__navpro_enterprise_interfaces__srv__TriggerInteractionGate_Response() -> *const std::ffi::c_void;
}

#[link(name = "navpro_enterprise_interfaces__rosidl_generator_c")]
extern "C" {
    fn navpro_enterprise_interfaces__srv__TriggerInteractionGate_Response__init(msg: *mut TriggerInteractionGate_Response) -> bool;
    fn navpro_enterprise_interfaces__srv__TriggerInteractionGate_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<TriggerInteractionGate_Response>, size: usize) -> bool;
    fn navpro_enterprise_interfaces__srv__TriggerInteractionGate_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<TriggerInteractionGate_Response>);
    fn navpro_enterprise_interfaces__srv__TriggerInteractionGate_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<TriggerInteractionGate_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<TriggerInteractionGate_Response>) -> bool;
}

// Corresponds to navpro_enterprise_interfaces__srv__TriggerInteractionGate_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TriggerInteractionGate_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub selected_action: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub operator_notes: rosidl_runtime_rs::String,

}



impl Default for TriggerInteractionGate_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !navpro_enterprise_interfaces__srv__TriggerInteractionGate_Response__init(&mut msg as *mut _) {
        panic!("Call to navpro_enterprise_interfaces__srv__TriggerInteractionGate_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for TriggerInteractionGate_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { navpro_enterprise_interfaces__srv__TriggerInteractionGate_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { navpro_enterprise_interfaces__srv__TriggerInteractionGate_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { navpro_enterprise_interfaces__srv__TriggerInteractionGate_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for TriggerInteractionGate_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for TriggerInteractionGate_Response where Self: Sized {
  const TYPE_NAME: &'static str = "navpro_enterprise_interfaces/srv/TriggerInteractionGate_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__navpro_enterprise_interfaces__srv__TriggerInteractionGate_Response() }
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


