#include <kipr/botball.h>
#include<stdio.h>
#include<stdlib.h>	
#include<time.h>
	
int main()
{
  	printf("random test");
  	
  	int randnum;
	srand ( time(NULL) );
	randnum = rand() % 2000 + 700;
  	
	enable_servos();
	
	for(x>10){
  	wait_for_milliseconds(1000);
  	set_servo_position(0,randnum);
  	x++;
	}
	
  	disable_servos();
  	return 0;
}
