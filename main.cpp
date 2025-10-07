#include <iostream>
#include<windows.h>
#include<stdio.h>
#include<GL/glut.h>
#include<math.h>
#define pi 3.142857
#include<iostream>
using namespace std;

float big_shipX = 580;
float big_shipY = 80;

float small_shipX = 40;
float small_shipY = 170;

float first_carX = 300;
float first_carY = 355;

float second_carX = 120;
float second_carY = 355;



//Circle for Sun
void circle_sun(float x1, float y1, float radius){
  float x=x1;
  float y=y1;

  //float radius=20;
  double pii=3.1416;
  glBegin(GL_TRIANGLE_FAN);
  glColor3ub(255, 251, 0);
  glVertex2f( x,y );
  for(int i=0;i<=360;i++){  ///i=0,1,2      360

    glColor3ub(255, 196, 0);

    float a=x+radius*cos(i*(pii/180));
    float b=y+radius*sin(i*(pii/180));
    glVertex2f( a,b);

  }
  glEnd();

}

//Circle for Car Tire
void circle_tire(float x1, float y1, float radius){
  float x=x1;
  float y=y1;

  //float radius=20;
  double pii=3.1416;
  glBegin(GL_TRIANGLE_FAN);
  glColor3ub(222, 217, 217);
  glVertex2f( x,y );
  for(int i=0;i<=360;i++){  ///i=0,1,2      360

    glColor3ub(15, 15, 15);

    float a=x+radius*cos(i*(pii/180));
    float b=y+radius*sin(i*(pii/180));
    glVertex2f( a,b);

  }
  glEnd();

}


//Circle for Cloud
void circle_cloud(float x1, float y1, float radius){
  float x=x1;
  float y=y1;

  //float radius=20;
  double pii=3.1416;
  glBegin(GL_TRIANGLE_FAN);
  glColor3ub(242, 231, 230);
  glVertex2f( x,y );
  for(int i=0;i<=360;i++){  ///i=0,1,2      360

    glColor3ub(242, 231, 230);

    float a=x+radius*cos(i*(pii/180));
    float b=y+radius*sin(i*(pii/180));
    glVertex2f( a,b);

  }
  glEnd();

}



//Tree Function
void tree_function(float x, float y)
{
    //Tree body
    //Quads
    glBegin(GL_QUADS);
    glColor3ub(97, 54, 9);
    glVertex2f( x, y );//pivot x=70, y=350
    glVertex2f( x+7, y );
    glVertex2f( x+7, y+20 );
    glVertex2f( x, y+20 );
    glEnd();
    //Tree Leaf
    //Triangle
    glBegin(GL_TRIANGLES);
    glColor3ub(28, 97, 64);
    glVertex2f( x-8, y+20 );
    glVertex2f( x+15, y+20 );
    glVertex2f( x+3.5, y+50 );
    glEnd();
    //Triangle
    glBegin(GL_TRIANGLES);
    glColor3ub(28, 97, 64);
    glVertex2f( x-6, y+33 );
    glVertex2f( x+13, y+33 );
    glVertex2f( x+3.5, y+70 );
    glEnd();
}

//Big Ship Function
void big_ship(float x, float y)
{
    //Big Ship Base
    //Quads
    glBegin(GL_QUADS);
    glColor3ub(61, 57, 52);
    glVertex2f( x, y );//pivot x=580, y=80
    glVertex2f( x+180, y );
    glVertex2f( x+200, y+30 );
    glVertex2f( x-20, y+30 );
    glEnd();
    //Big Ship Deck-1
    //Quads
    glBegin(GL_QUADS);
    glColor3ub(118, 120, 56);
    glVertex2f( x+5, y+30 );
    glVertex2f( x+175, y+30 );
    glVertex2f( x+170, y+55 );
    glVertex2f( x+10, y+55 );
    glEnd();
    //Big Ship Deck-1 Window-1
    //Quads
    glBegin(GL_QUADS);
    glColor3ub(74, 46, 11);
    glVertex2f( x+40, y+35 );
    glVertex2f( x+60, y+35 );
    glVertex2f( x+60, y+45 );
    glVertex2f( x+40, y+45 );
    glEnd();
    //Big Ship Deck-1 Window-2
    //Quads
    glBegin(GL_QUADS);
    glColor3ub(74, 46, 11);
    glVertex2f( x+120, y+35 );
    glVertex2f( x+140, y+35 );
    glVertex2f( x+140, y+45 );
    glVertex2f( x+120, y+45 );
    glEnd();
    //Big Ship Deck-2
    //Quads
    glBegin(GL_QUADS);
    glColor3ub(128, 68, 33);
    glVertex2f( x+25, y+55 );
    glVertex2f( x+155, y+55 );
    glVertex2f( x+150, y+70 );
    glVertex2f( x+30, y+70 );
    glEnd();
}

//Small Ship Function
void small_ship(float x, float y)
{
    //Small Ship Base
    //Quads
    glBegin(GL_QUADS);
    glColor3ub(61, 57, 52);
    glVertex2f( x, y );//pivot x=40, pivot y=170
    glVertex2f( x+130, y );
    glVertex2f( x+150, y+20 );
    glVertex2f( x-20, y+20 );
    glEnd();
    //Small Ship Deck-1
    //Quads
    glBegin(GL_QUADS);
    glColor3ub(125, 66, 64);
    glVertex2f( x+10, y+20 );
    glVertex2f( x+120, y+20 );
    glVertex2f( x+110, y+35 );
    glVertex2f( x+20, y+35 );
    glEnd();

}

//First Car Ahead Function
void first_car(float x, float y)
{
    //Quads
    //First Car Lower Body
    glBegin(GL_QUADS);
    glColor3ub(209, 58, 17);
    glVertex2f( x, y );//pivot x=300, y=355
    glVertex2f( x+40, y );
    glVertex2f( x+40, y+15 );
    glVertex2f( x, y+15 );
    glEnd();
    //First Car Upper Body
    //Quads
    glBegin(GL_QUADS);
    glColor3ub(84, 67, 99);
    glVertex2f( x+5, y+15 );
    glVertex2f( x+35, y+15 );
    glVertex2f( x+30, y+25 );
    glVertex2f( x+10, y+25 );
    glEnd();
    //Tire
    circle_tire(x+8, y, 5);
    circle_tire(x+32, y, 5);
}

void second_car(float x, float y)
{
    //Second Car Lower Body
    //Quads
    glBegin(GL_QUADS);
    glColor3ub(186, 173, 91);
    glVertex2f( x, y );//pivot x=120, y=355
    glVertex2f( x+50, y );
    glVertex2f( x+50, y+15 );
    glVertex2f( x, y+15 );
    glEnd();
    //Second Car Upper Body
    //Quads
    glBegin(GL_QUADS);
    glColor3ub(84, 67, 99);
    glVertex2f( x+5, y+15 );
    glVertex2f( x+45, y+15 );
    glVertex2f( x+42, y+25 );
    glVertex2f( x+8, y+25 );
    glEnd();
    //Tire
    circle_tire(x+8, y, 5);
    circle_tire(x+42, y, 5);
}


void myInit ()
{

	//glClearColor(0.0, 1.0, 0.0, 0.0);
	//glClearColor(184.0f/255.0f, 213.0f/255.0f, 238.0f/255.0f, 1.0f);
	//glColor3f(0.0, 0.2, 0.0);
	glClearColor(128.0f/255.0f,0, 0, 1.0f);

	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();


	// setting window dimension in X- and Y- direction
	glOrtho(0, 800, 0, 600, -10.0, 10.0);


}

void display ()
{

glClear(GL_COLOR_BUFFER_BIT);


//Water---------------------------------------------------------
//Quads
glBegin(GL_QUADS);
glColor3ub(0, 76, 255);
glVertex2f( 0, 0 );
glVertex2f( 800, 0 );
glVertex2f( 800, 220 );
glVertex2f( 0, 220 );
glEnd();
//Water End------------------------------------------------------



//Sky---------------------------------------------------------------
//Quads
glBegin(GL_QUADS);
glColor3ub(102, 174, 232);
glVertex2f( 0, 225 );
glVertex2f( 800, 225 );
glVertex2f( 800, 600 );
glVertex2f( 0, 600 );
glEnd();
//Sky End---------------------------------------------------------


//Cloud Starts----------------------------------------------------------
//Cloud-1
circle_cloud(138, 550, 15);
circle_cloud(150, 557, 15);
circle_cloud(150, 543, 15);
circle_cloud(165, 557, 15);
circle_cloud(165, 543, 15);
circle_cloud(177, 550, 15);
//Cloud-2
circle_cloud(503, 520, 15);
circle_cloud(515, 527, 15);
circle_cloud(530, 527, 15);
circle_cloud(545, 527, 15);
circle_cloud(515, 513, 15);
circle_cloud(530, 513, 15);
circle_cloud(545, 513, 15);
circle_cloud(557, 520, 15);
//Cloud Ends-------------------------------------------------------------



//Sun-----------------------------------------------------------
circle_sun(700, 525, 25);


//Slim Border above Water---------------------------------------
//Quads
glBegin(GL_QUADS);
glColor3ub(36, 83, 191);
glVertex2f( 0, 220 );
glVertex2f( 800, 220 );
glVertex2f( 800, 225 );
glVertex2f( 0, 225 );
glEnd();
//Slim Border above Water End----------------------------------



//All Mountain Parts Start Here-------------------------------
//Small Mountain
//1 Tree behind Small Mountain
tree_function(400, 234);
////Quads
glBegin(GL_QUADS);
glColor3ub(117, 74, 28);
glVertex2f( 280, 225 );
glVertex2f( 430, 225 );
glVertex2f( 370, 255 );
glVertex2f( 350, 290 );
glEnd();


//Big Mountain
////Quads
glBegin(GL_QUADS);
glColor3ub(117, 74, 28);
glVertex2f( 470, 225 );
glVertex2f( 650, 225 );
glVertex2f( 600, 250 );
glVertex2f( 550, 380 );
glEnd();
//All Mountain Parts End Here----------------------------------



//All House Parts Start Here--------------------------------------
//Left House Top
//Quads
glBegin(GL_TRIANGLES);
glColor3ub(97, 57, 15);
glVertex2f( 20, 400 );
glVertex2f( 100, 400 );
glVertex2f( 60, 415);
glEnd();
//Left House Body
//Quads
glBegin(GL_QUADS);
glColor3ub(255, 255, 255);
glVertex2f( 30, 350 );
glVertex2f( 90, 350 );
glVertex2f( 90, 400 );
glVertex2f( 30, 400 );
glEnd();
//Left House Window
//Quads
glBegin(GL_QUADS);
glColor3ub(70, 128, 156);
glVertex2f( 40, 365 );
glVertex2f( 55, 365 );
glVertex2f( 55, 375 );
glVertex2f( 40, 375 );
glEnd();


//Right House
////Quads
glBegin(GL_QUADS);
glColor3ub(255, 255, 255);
glVertex2f( 720, 350 );
glVertex2f( 770, 350 );
glVertex2f( 770, 390 );
glVertex2f( 720, 390 );
glEnd();


//Middle House
////Quads
glBegin(GL_QUADS);
glColor3ub(255, 255, 255);
glVertex2f( 180, 225 );
glVertex2f( 250, 225 );
glVertex2f( 250, 265 );
glVertex2f( 180, 265 );
glEnd();
//Middle House Door
//Quads
glBegin(GL_QUADS);
glColor3ub(94, 53, 9);
glVertex2f( 200, 225 );
glVertex2f( 225, 225 );
glVertex2f( 225, 240 );
glVertex2f( 200, 240 );
glEnd();
//All House Parts End Here-------------------------------------



//Tree Functions Called Here------------------------------------
//Left Side Trees
tree_function(70,350);
tree_function(90,350);
tree_function(110,350);
tree_function(130,350);
//Right Side Trees
tree_function(660,350);
tree_function(700,350);
tree_function(740,350);
//Lower Left Side Tree Near House
tree_function(240, 225);
//Tree Functions Calling End--------------------------------------



//Car Functions Called Here------------------------------------------
//First Car ahead
first_car(first_carX, first_carY);
//Second Car back
second_car(second_carX, second_carY);
//Car Functions Calling End Here--------------------------------------



//All Bridge Parts Start Here-----------------------------------------
//First Pillar of Bridge
//Quads
glBegin(GL_QUADS);
glColor3ub(96, 102, 115);
glVertex2f( 70, 225 );
glVertex2f( 120, 225 );
glVertex2f( 120, 315 );
glVertex2f( 70, 315 );
glEnd();


//Second Pillar of Bridge
//Quads
glBegin(GL_QUADS);
glColor3ub(96, 102, 115);
glVertex2f( 680, 225 );
glVertex2f( 730, 225 );
glVertex2f( 730, 315 );
glVertex2f( 680, 315 );
glEnd();


//Bridge Road
//Quads
glBegin(GL_QUADS);
glColor3ub(96, 102, 115);
glVertex2f( 0, 315 );
glVertex2f( 800, 315 );
glVertex2f( 800, 350 );
glVertex2f( 0, 350 );
glEnd();


//Middle Pillar
//Quads
glBegin(GL_QUADS);
glColor3ub(96, 102, 115);
glVertex2f( 375, 350 );
glVertex2f( 425, 350 );
glVertex2f( 425, 500 );
glVertex2f( 375, 500 );
glEnd();


//Left Top Slope of Bridge
//Quads
glBegin(GL_QUADS);
glColor3ub(96, 102, 115);
glVertex2f( 170, 350 );
glVertex2f( 200, 350 );
glVertex2f( 375, 465 );
glVertex2f( 375, 485 );
glEnd();


//Right Top Slope of Bridge
//Quads
glBegin(GL_QUADS);
glColor3ub(96, 102, 115);
glVertex2f( 425, 465 );
glVertex2f( 600, 350 );
glVertex2f( 630, 350 );
glVertex2f( 425, 485 );
glEnd();
//All Bridge Parts End Here---------------------------------------



//Bottom Field Start---------------------------------------------------
//Quads
glBegin(GL_QUADS);
glColor3ub(28, 97, 64);
glVertex2f( 0, 0 );
glVertex2f( 800, 0 );
glVertex2f( 630, 30 );
glVertex2f( 0, 60 );
glEnd();
//Bottom Field End------------------------------------------------



//All Ship Parts Start Here---------------------------------------
//Big Ship Function Called Here
big_ship(big_shipX, big_shipY);
//Small Ship Function Called Here
small_ship(small_shipX, small_shipY);
//All Ship Parts End Here---------------------------------------

/*
//Triangle
glBegin(GL_TRIANGLES);
glColor3f(0,0,0);
glVertex2f( 1024, 768 );
glVertex2f( 300, 200 );
glVertex2f( 200, 200);
glEnd();
*/
/*
//lines
glBegin(GL_LINES);
glColor3f(0,1,0);
glVertex2f( 250,500 );
glVertex2f( 250, 0 );
glEnd();

//point

glPointSize(100);
glBegin(GL_POINTS);
glColor3f(0,1,0);
glVertex2f( 100,100 );
glEnd();

//Quads
glBegin(GL_QUADS);
glColor3ub(128,0,0);
glVertex2f( 0,0 );
glVertex2f( 200, 0 );
glVertex2f( 200, 200);
glVertex2f( 0, 200);
glEnd();

//polygon
glBegin(GL_POLYGON);
glColor3f(0,1,0);
glVertex2f( 100,100 );
glVertex2f( 100, 0 );
glVertex2f( 50, 0 );
glVertex2f( 10, 50 );
glVertex2f( 50, 200 );

glEnd();

*/





glFlush();
}

void my_keyboard(unsigned char key, int x, int y)
{


}


void update(int value) {

    big_shipX -= 1;

    small_shipX += 2;

    first_carX += 2;

    second_carX += 1;

    if (big_shipX < -220)
    {
        big_shipX = 800;
    }

    if (small_shipX > 970)
    {
        small_shipX = 0;
    }

    if (first_carX > 840)
    {
        first_carX = 0;
    }

    if (second_carX > 850)
    {
        second_carX = 0;
    }


	glutPostRedisplay();
	glutTimerFunc(25, update, 0);
}


int main (int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);

	// giving window size in X- and Y- direction
	glutInitWindowSize(800, 600);
	glutInitWindowPosition(100, 0);

	// Giving name to window
	glutCreateWindow("Final Project");
	myInit();

	glutDisplayFunc(display);
	glutKeyboardFunc(my_keyboard);
	glutTimerFunc(25, update, 0);

	glutMainLoop();
}
