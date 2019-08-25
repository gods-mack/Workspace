#include <graphics.h>
#include <math.h>
//#include <X11/Xlib.h>
#define PI 3.142


void wait_for_char()
{

    //Wait for a key press
    int in = 0;

    while (in == 0) {
        in = getchar();
    }
}

int main()
{
   //XInitThreads();
   int gd = DETECT,gm;
   initgraph(&gd,&gm,NULL);
    
    int i;
    float x = 0, y = 0 ,r  = 10;
    circle(100,200,30);
    
    for(i = 0; i <=45; i++){
		float val = PI/180;
		x += r * sin(val * i);
		y += r * cos(val * i);
		//fprintf("x y %lf %lf \n", x,y);
		putpixel(x,y,WHITE);
	}
    
    
    
 // delay(3000000);
  wait_for_char();
   closegraph();
   
  return 0;
}
