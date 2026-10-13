#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "navpro_enterprise_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__navpro_enterprise_interfaces__msg__FleetTelemetry() -> *const std::ffi::c_void;
}

#[link(name = "navpro_enterprise_interfaces__rosidl_generator_c")]
extern "C" {
    fn navpro_enterprise_interfaces__msg__FleetTelemetry__init(msg: *mut FleetTelemetry) -> bool;
    fn navpro_enterprise_interfaces__msg__FleetTelemetry__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<FleetTelemetry>, size: usize) -> bool;
    fn navpro_enterprise_interfaces__msg__FleetTelemetry__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<FleetTelemetry>);
    fn navpro_enterprise_interfaces__msg__FleetTelemetry__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<FleetTelemetry>, out_seq: *mut rosidl_runtime_rs::Sequence<FleetTelemetry>) -> bool;
}

// Corresponds to navpro_enterprise_interfaces__msg__FleetTelemetry
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct FleetTelemetry {

    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::rmw::Time,


    // This member is not documented.
    #[allow(missing_docs)]
    pub robot_id: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pose: geometry_msgs::msg::rmw::Pose,


    // This member is not documented.
    #[allow(missing_docs)]
    pub velocity: geometry_msgs::msg::rmw::Twist,


    // This member is not documented.
    #[allow(missing_docs)]
    pub battery_percentage: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub battery_voltage: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub is_charging: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub estop_engaged: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub operational_status: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub current_mission_id: rosidl_runtime_rs::String,

}



impl Default for FleetTelemetry {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !navpro_enterprise_interfaces__msg__FleetTelemetry__init(&mut msg as *mut _) {
        panic!("Call to navpro_enterprise_interfaces__msg__FleetTelemetry__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for FleetTelemetry {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { navpro_enterprise_interfaces__msg__FleetTelemetry__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { navpro_enterprise_interfaces__msg__FleetTelemetry__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { navpro_enterprise_interfaces__msg__FleetTelemetry__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for FleetTelemetry {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for FleetTelemetry where Self: Sized {
  const TYPE_NAME: &'static str = "navpro_enterprise_interfaces/msg/FleetTelemetry";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__navpro_enterprise_interfaces__msg__FleetTelemetry() }
  }
}


