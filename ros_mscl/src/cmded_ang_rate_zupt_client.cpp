#include "ros/ros.h"
#include "std_srvs/Trigger.h"
#include <cstdlib>


int main(int argc, char **argv){

  ros::init(argc, argv, "cmded_ang_rate_zupt_client");

  ros::NodeHandle n;
  ros::ServiceClient client = n.serviceClient<std_srvs::Trigger>("cmded_ang_rate_zupt");
  std_srvs::Trigger srv;

  if (client.call(srv))
  {
      if (srv.response.success)
      {
        ROS_INFO("success");
      }
  }
  else
  {
    ROS_INFO("Failed to call service");
  }
  return 0;
}
