#include <kipr/botball.h>
        
int main()
{
    printf("ROOMBA motor test\n");
  	create_connect();
  	create_drive_direct(200,200);
  	wait_for_milliseconds(5000);
  	create_stop();
    create_disconnect();
    return 0;
}
