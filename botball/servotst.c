#include <kipr/botball.h>
        
int main()
{
  	printf("3K mil");
	enable_servos();
  	wait_for_milliseconds(1000);
  	set_servo_position(0,3000);
   	wait_for_milliseconds(1000);
  	disable_servos();
  	return 0;
}
