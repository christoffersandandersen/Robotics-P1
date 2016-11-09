#include <ros/ros.h>
#include <iostream>

using namespace std;
int main(int argc, char *argv[]){

	system("roscore&");
	system("roslaunch turtlebot_bringup minimal.launch&");
	system("roslaunch turtlebot_teleop keyboard_teleop.launch");
	//ros::init(argc, argv, "test");


	//ros::NodeHandle n;
	ROS_INFO("test of roscore");

	//ros::spin();
	//cout << "THis is a test" << endl;

	return 0;
}