#include<iostream>
#include<graphics.h>

void house();
void nationalflag();
void emoji();
void village();
void clouds();

int main()
{

    int choice,i;
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");

            house();
            nationalflag();
            emoji();
            village();

   getch();
    closegraph();
    return 0;
}
void village()
{


    clouds();



    initwindow (1400, 1150, "House ");


    ellipse(40,30,60,240,10,15);

    ellipse(65,20,345,165,20,15);

    ellipse(103,29,340,160,20,15);

    ellipse(109,42,230,50,20,10);

    ellipse(66,46,163,340,31,17);


    ellipse(200,30,60,240,10,15);

    ellipse(225,20,345,165,20,15);

    ellipse(262,27,340,160,20,15);

    ellipse(268,42,230,50,20,10);

    ellipse(226,46,163,340,31,15);

    ellipse(300,21,20,182,21,19);

    ellipse(325,31,290,100,21,15);

    ellipse(299,45,228,20,33,11);




    ellipse(550,30,60,240,10,15);

    ellipse(575,20,345,165,20,15);

    ellipse(612,27,340,160,20,15);

    ellipse(618,42,230,50,20,10);

    ellipse(576,46,163,340,31,15);





    ellipse(750,30,60,440,10,15);

    ellipse(560,20,345,165,20,15);

    ellipse(462,27,340,160,20,15);

    ellipse(456,42,230,50,20,10);

    ellipse(226,46,163,340,31,15);

    ellipse(300,21,20,182,21,19);

    ellipse(325,31,290,100,21,15);

    ellipse(299,45,228,20,33,11);




    setcolor(2);
    circle(200,200,30);
    setfillstyle(SOLID_FILL,RED);
    floodfill(201,200,2);


    setcolor(1);
    rectangle(0,500,1400,1000);
    setfillstyle(SOLID_FILL, 11);
    floodfill(1,501,1);



    setcolor(10);
    line(0,1400,350,1000);
    line(350,1000,530,820);
    line(530,820,430,820);
    line(430,820, 600,750);
    line(600,750,470,710);
    line(470,710,520,680);
    line(520,680,300,650);
    line(300,650,550,550);
    line(550,550,420,500);
    line(420,500,0,500);
    line(0,500,0,1400);
    setfillstyle(SOLID_FILL, 10);
    floodfill(200,700,10);


    setcolor(6);
    rectangle(110,650,130,1000);
    setfillstyle(SOLID_FILL, 6);
    floodfill(112,670,6);


    setcolor(2);
    circle(120,600,60);
    setfillstyle(SOLID_FILL, 2);
    floodfill(121,610,2);

    circle(80,650,60);
    setfillstyle(SOLID_FILL,2);
    floodfill(85,650,2);

    circle(180,680,60);
    setfillstyle(SOLID_FILL, 2);
    floodfill(181,681,2);

    circle(250,700,30);
    setfillstyle(SOLID_FILL, 2);
    floodfill(251,703,2);


setcolor(10);
    line(1400,1000,750,1000);
    line(750,1000,1030,900);
    line(1030,900,850,820);
    line(850,820,1080,770);
    line(1080,770,820,630);
    line(820,630,950,500);
    line(950,500,1400,500);
    line(1400,500,1400,1000);
setfillstyle(SOLID_FILL, 10);
    floodfill(1220,700,10);


    setcolor(2);
    line(0,500,100,300);
    line(100,300,150,430);
    line(150,430,220,220);
    line(220,220,290,490);
    line(290,490,300,400);
    line(300,400,430,230);
    line(430,230,570,500);
    line(570,500,0,500);
    setfillstyle(SOLID_FILL, 2);
    floodfill(330,430,2);


    setcolor(2);
    line(800,500,900,300);
    line(900,300,950,430);
    line(950,430,1040,170);
    line(1040,170,1100,400);
    line(1100,400,1180,300);
    line(1180,300,1130,410);
    line(1130,410,1320,70);
    line(1320,70,1400,500);
    line(1400,500,800,500);
    setfillstyle(SOLID_FILL, 2);
    floodfill(1200,400,2);



}

void clouds()

{

    //clouds 1

    ellipse(40,30,60,240,10,15);

    ellipse(65,20,345,165,20,15);

    ellipse(103,29,340,160,20,15);

    ellipse(109,42,230,50,20,10);

    ellipse(66,46,163,340,31,17);

    //clouds 2



    //clouds 3

    ellipse(450,30,60,240,10,15);

    ellipse(475,20,345,165,20,15);

    ellipse(512,27,340,160,20,15);

    ellipse(518,42,230,50,20,10);

    ellipse(476,46,163,340,31,15);

}






void house()
{
    initwindow (800, 600, "House ");
    setfillstyle(SOLID_FILL, GREEN);
    setcolor(GREEN);
    line(100,100,250,100);
    line(100,100,140,150);
    line(140,150,300,150);
    line(300,150,250,100);
    floodfill(150, 120, GREEN);


    line(100,100,50,150);
    setfillstyle(SOLID_FILL, GREEN);
    setcolor(GREEN);
    rectangle(50,150,300,300);
    line(140,150,140,300);


   rectangle(55,200,100,250);
   floodfill(52,200,GREEN);

    rectangle(200,200,250,280);
    floodfill(225,225,GREEN);

    rectangle(30,300,330,320);
    floodfill(31,310,GREEN);

}


void nationalflag()
{

	initwindow (800, 600, "Nationnal Flag ");

    setfillstyle(1,RED);
	setcolor(GREEN);
	circle(300,200,60);
	floodfill(350,200,GREEN);

    setfillstyle(1,GREEN);
	rectangle(100,100,450,300);
	floodfill(200,200,GREEN);

	setcolor(WHITE);
	rectangle(90,80,100,500);
	setfillstyle(1,WHITE);
	floodfill(91,200,WHITE);

}


void emoji()
{
    initwindow (800, 600, "emoji ");
    setfillstyle(SOLID_FILL,14 );
    setcolor(WHITE);
    circle(250, 250, 100);
    floodfill(251, 250, WHITE);

    // Draw eyes (circles)
    setcolor(2);
    circle(220, 220, 15);
    setfillstyle(SOLID_FILL,1 );
    floodfill(221, 222,2);

    setcolor(2);
    circle(280, 220, 15);
    setfillstyle(SOLID_FILL,1);
    floodfill(281,222,2);


    // Draw mouth (arc)
    arc(250, 250, 220, 320, 40);
    arc(251, 251, 221, 321, 41);
    arc(252, 252, 222, 322, 42);
    arc(252, 253, 222, 322, 42);
}

