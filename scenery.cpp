#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>

void main(){
	int gm,gd=DETECT,poly[10],i;
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	for(i=400;i>=-300;i--){
		cleardevice();
		//BUILDING_1
		setfillstyle(SOLID_FILL,1);
		bar(0,0,180,10);
		setfillstyle(SOLID_FILL,9);
		bar(10,10,170,250);
		setfillstyle(SOLID_FILL,1);
		bar(20,25,45,50);
		bar(55,25,80,50);
		bar(95,25,120,50);
		bar(130,25,155,50);
		bar(20,65,45,90);
		bar(55,65,80,90);
		bar(95,65,120,90);
		bar(130,65,155,90);
		bar(20,105,45,130);
		bar(55,105,80,130);
		bar(95,105,120,130);
		bar(130,105,155,130);
		bar(20,145,45,170);
		bar(55,145,80,170);
		bar(95,145,120,170);
		bar(130,145,155,170);
		bar(20,185,45,210);
		bar(55,185,80,210);
		bar(95,185,120,210);
		bar(130,185,155,210);
		bar(20,220,155,250);
		//BUILDING_2
		setfillstyle(SOLID_FILL,2);
		bar(200,70,380,80);
		setfillstyle(SOLID_FILL,10);
		bar(210,80,370,250);
		setfillstyle(SOLID_FILL,2);
		bar(220,110,255,150);
		bar(265,110,360,150);
		bar(220,160,255,190);
		bar(265,160,360,190);
		bar(220,210,360,250);
		setfillstyle(SOLID_FILL,4);
		bar(400,30,620,40);
		setfillstyle(SOLID_FILL,12);
		bar(410,40,610,250);
		setfillstyle(SOLID_FILL,4);
		bar(420,50,445,75);
		bar(460,50,555,75);
		bar(570,50,600,75);
		bar(420,85,445,110);
		bar(460,85,555,110);
		bar(570,85,600,110);
		bar(420,120,600,145);
		bar(420,155,445,180);
		bar(460,155,555,180);
		bar(570,155,600,180);
		bar(460,200,555,250);
		setfillstyle(SOLID_FILL,GREEN);
		bar(-1,250,800,255);
		setfillstyle(9,9);
		bar(-1,256,800,800);
		poly[0] = 400-i;
		poly[1] = 400;
		poly[2] = 600-i;
		poly[3] = 400;
		poly[4] = 550-i;
		poly[5] = 450;
		poly[6] = 450-i;
		poly[7] = 450;
		poly[8] = poly[0];
		poly[9] = poly[1];
		setfillstyle(1,RED);
		fillpoly(5,poly);
		delay(100);
	}
	getch();
	closegraph();
}
