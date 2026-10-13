#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to navpro_enterprise_interfaces__msg__FleetTelemetry

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct FleetTelemetry {

    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::Time,


    // This member is not documented.
    #[allow(missing_docs)]
    pub robot_id: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pose: geometry_msgs::msg::Pose,


    // This member is not documented.
    #[allow(missing_docs)]
    pub velocity: geometry_msgs::msg::Twist,


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
    pub operational_status: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub current_mission_id: std::string::String,

}



impl Default for FleetTelemetry {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::FleetTelemetry::default())
  }
}

impl rosidl_runtime_rs::Message for FleetTelemetry {
  type RmwMsg = super::msg::rmw::FleetTelemetry;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Owned(msg.stamp)).into_owned(),
        robot_id: msg.robot_id.as_str().into(),
        pose: geometry_msgs::msg::Pose::into_rmw_message(std::borrow::Cow::Owned(msg.pose)).into_owned(),
        velocity: geometry_msgs::msg::Twist::into_rmw_message(std::borrow::Cow::Owned(msg.velocity)).into_owned(),
        battery_percentage: msg.battery_percentage,
        battery_voltage: msg.battery_voltage,
        is_charging: msg.is_charging,
        estop_engaged: msg.estop_engaged,
        operational_status: msg.operational_status.as_str().into(),
        current_mission_id: msg.current_mission_id.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Borrowed(&msg.stamp)).into_owned(),
        robot_id: msg.robot_id.as_str().into(),
        pose: geometry_msgs::msg::Pose::into_rmw_message(std::borrow::Cow::Borrowed(&msg.pose)).into_owned(),
        velocity: geometry_msgs::msg::Twist::into_rmw_message(std::borrow::Cow::Borrowed(&msg.velocity)).into_owned(),
      battery_percentage: msg.battery_percentage,
      battery_voltage: msg.battery_voltage,
      is_charging: msg.is_charging,
      estop_engaged: msg.estop_engaged,
        operational_status: msg.operational_status.as_str().into(),
        current_mission_id: msg.current_mission_id.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      stamp: builtin_interfaces::msg::Time::from_rmw_message(msg.stamp),
      robot_id: msg.robot_id.to_string(),
      pose: geometry_msgs::msg::Pose::from_rmw_message(msg.pose),
      velocity: geometry_msgs::msg::Twist::from_rmw_message(msg.velocity),
      battery_percentage: msg.battery_percentage,
      battery_voltage: msg.battery_voltage,
      is_charging: msg.is_charging,
      estop_engaged: msg.estop_engaged,
      operational_status: msg.operational_status.to_string(),
      current_mission_id: msg.current_mission_id.to_string(),
    }
  }
}


