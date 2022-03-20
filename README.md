# my_robot_controller
ABOUT:<br />
my_robot_controller is my first repository which establish communication between different nodes in ROS{i.e talker_a,talker_b,listener_a,listener_b}<br />
<br />COMMANDS:
1. To start the standard publisher node <br />
	#talker_a <br />
	source ./devel/setup.bash <br />
	rosrun my_robot_controller talker_a <br />
	#talker_b <br />
	source ./devel/setup.bash <br />
	rosrun my_robot_controller talker_b <br />
2. To start the standard subscriber node <br />
	#listener_a <br />
	source ./devel/setup.bash <br />
	rosrun my_robot_controller listener_a <br />
	#listener_b <br />
	source ./devel/setup.bash <br />
	rosrun my_robot_controller listener_b <br />
	<br />
	<br />
	PS:  I don't know why, But each time in new terminal you have to run "source ./devel/setup.bash" before running the nodes. 
