#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>

void main(){
    int x,y,r,xc,yc;
    float p;
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
    printf("Enter the center of the circle\n");
    scanf("%d%d",&xc,&yc);
    printf("Enter the radius of the circle\n");
    scanf("%d",&r);
    cleardevice();
    x=0;
    y=r;
    p=3-(2*r);
    while(x<=y){
	if(p<0){
	    p=p+4*x+6;
	    x++;
	}
	else{
	    p=p+4*(x-y)+10;
	    x++;
	    y--;
	}
	outtextxy(100,50,"Rangoli using Bresenhem's Circle Algorithm");
	putpixel(x+xc,y+yc,1);
	putpixel(y+xc,x+yc,2);
	putpixel(y+xc,-x+yc,3);
	putpixel(x+xc,-y+yc,4);
	putpixel(-x+xc,-y+yc,5);
	putpixel(-y+xc,-x+yc,6);
	putpixel(-y+xc,x+yc,7);
	putpixel(-x+xc,y+yc,8);
	putpixel(x+xc+50,y+yc,8);
	putpixel(y+xc+50,x+yc,7);
	putpixel(y+xc+50,-x+yc,6);
	putpixel(x+xc+50,-y+yc,5);
	putpixel(-x+xc+50,-y+yc,4);
	putpixel(-y+xc+50,-x+yc,3);
	putpixel(-y+xc+50,x+yc,2);
	putpixel(-x+xc+50,y+yc,1);
	putpixel(x+xc,y+yc+50,8);
	putpixel(y+xc,x+yc+50,7);
	putpixel(y+xc,-x+yc+50,6);
	putpixel(x+xc,-y+yc+50,5);
	putpixel(-x+xc,-y+yc+50,4);
	putpixel(-y+xc,-x+yc+50,3);
	putpixel(-y+xc,x+yc+50,2);
	putpixel(-x+xc,y+yc+50,1);
	putpixel(x+xc+50,y+yc+50,1);
	putpixel(y+xc+50,x+yc+50,2);
	putpixel(y+xc+50,-x+yc+50,3);
	putpixel(x+xc+50,-y+yc+50,4);
	putpixel(-x+xc+50,-y+yc+50,5);
	putpixel(-y+xc+50,-x+yc+50,6);
	putpixel(-y+xc+50,x+yc+50,7);
	putpixel(-x+xc+50,y+yc+50,8);
	putpixel(x+xc+100,y+yc,1);
	putpixel(y+xc+100,x+yc,2);
	putpixel(y+xc+100,-x+yc,3);
	putpixel(x+xc+100,-y+yc,4);
	putpixel(-x+xc+100,-y+yc,5);
	putpixel(-y+xc+100,-x+yc,6);
	putpixel(-y+xc+100,x+yc,7);
	putpixel(-x+xc+100,y+yc,8);
	putpixel(x+xc,y+yc+100,8);
	putpixel(y+xc,x+yc+100,7);
	putpixel(y+xc,-x+yc+100,6);
	putpixel(x+xc,-y+yc+100,5);
	putpixel(-x+xc,-y+yc+100,4);
	putpixel(-y+xc,-x+yc+100,3);
	putpixel(-y+xc,x+yc+100,2);
	putpixel(-x+xc,y+yc+100,1);
	putpixel(x+xc+100,y+yc+100,1);
	putpixel(y+xc+100,x+yc+100,2);
	putpixel(y+xc+100,-x+yc+100,3);
	putpixel(x+xc+100,-y+yc+100,4);
	putpixel(-x+xc+100,-y+yc+100,5);
	putpixel(-y+xc+100,-x+yc+100,6);
	putpixel(-y+xc+100,x+yc+100,7);
	putpixel(-x+xc+100,y+yc+100,8);
	putpixel(x+xc+50,y+yc+100,8);
	putpixel(y+xc+50,x+yc+100,7);
	putpixel(y+xc+50,-x+yc+100,6);
	putpixel(x+xc+50,-y+yc+100,5);
	putpixel(-x+xc+50,-y+yc+100,4);
	putpixel(-y+xc+50,-x+yc+100,3);
	putpixel(-y+xc+50,x+yc+100,2);
	putpixel(-x+xc+50,y+yc+100,1);
	putpixel(x+xc+100,y+yc+50,1);
	putpixel(y+xc+100,x+yc+50,2);
	putpixel(y+xc+100,-x+yc+50,3);
	putpixel(x+xc+100,-y+yc+50,4);
	putpixel(-x+xc+100,-y+yc+50,5);
	putpixel(-y+xc+100,-x+yc+50,6);
	putpixel(-y+xc+100,x+yc+50,7);
	putpixel(-x+xc+100,y+yc+50,8);
	delay(100);
    }
    getch();
    closegraph();
}