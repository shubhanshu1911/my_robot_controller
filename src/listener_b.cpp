#include <ros/ros.h>
#include <std_msgs/String.h>

void chatterCallback(const std_msgs::String::ConstPtr &msg)
{
    ROS_INFO_STREAM("I heard: " << msg->data.c_str());
}

int main(int argc, char **argv)
{
    ros::init(argc, argv, "listener_b");
    ros::NodeHandle nh;

    ros::Subscriber sub = nh.subscribe("chatter_2", 1000, chatterCallback);

    ros::spin();
    return 0; 
}
