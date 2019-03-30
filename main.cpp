#include <stdio.h>
#include <math.h>
#include <GL/glut.h>
#define ESCAPE 27
int x=50,y=150;
int window;
void Timer(int i)
{
  glutPostRedisplay();
    glutTimerFunc(20, Timer, 0);///i=1 initially;
}

	void road()
{
glBegin(GL_QUADS);
glColor3f(.5,.5,.5);
glVertex2f(0,100);
glVertex2f(0,250);
glVertex2f(1000,250);
glVertex2f(1000,100);
glEnd();
int xs=0;
for(int i=0;i<35;i++)
{

glBegin(GL_QUADS);
glColor3f(1,1,1);
glVertex2f(10+xs,170);
glVertex2f(10+xs,180);
glVertex2f(35+xs,180);
glVertex2f(35+xs,170);
glEnd();
xs=xs+40;
}
}
	void road1()
{
glBegin(GL_QUADS);
glColor3f(.5,.5,.5);
glVertex2f(0,300);
glVertex2f(0,450);
glVertex2f(1000,450);
glVertex2f(1000,300);
glEnd();
int xs=0;
for(int i=0;i<35;i++)
{

glBegin(GL_QUADS);
glColor3f(1,1,1);
glVertex2f(10+xs,370);
glVertex2f(10+xs,380);
glVertex2f(35+xs,380);
glVertex2f(35+xs,370);
glEnd();
xs=xs+40;
}
}
void footpath()
{
	int x=0,y=250,i=0;
	glBegin(GL_QUADS);
	while(x!=1000){
		if(i%2==0)
	glColor3f(0.0,0.0,0.0);
		else
			glColor3f(1.0,1.0,0.0);               //first stripe

    glVertex2f(x,y);
    glVertex2f(x,y+25);
	glVertex2f(x+25,y+25);
	glVertex2f(x+25,y);
	x=x+10;
	i++;
	}
	x=0;
	y=275;
	while(x!=1000){
		if(i%2!=0)
	glColor3f(0.0,0.0,0.0);
		else
			glColor3f(1.0,1.0,0.0);

    glVertex2f(x,y);
    glVertex2f(x,y+25);
	glVertex2f(x+25,y+25);
	glVertex2f(x+25,y);
	x=x+10;
	i++;
	}
	glEnd();
}
void windo()
{
    int x=0,y=460;
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_QUADS);
    glVertex2f(x+5,y+60);
    glVertex2f(x+5,y+80);
    glVertex2f(x+15,y+80);
    glVertex2f(x+15,y+60);

    glVertex2f(x+5,y+100);
    glVertex2f(x+5,y+120);
    glVertex2f(x+15,y+120);
    glVertex2f(x+15,y+100);

    glVertex2f(x+20,y+60);
    glVertex2f(x+20,y+80);
    glVertex2f(x+30,y+80);
    glVertex2f(x+30,y+60);

    glVertex2f(x+20,y+100);
    glVertex2f(x+20,y+120);
    glVertex2f(x+30,y+120);
    glVertex2f(x+30,y+100);
    //w1
    glVertex2f(x+45,y+75);
    glVertex2f(x+45,y+95);
    glVertex2f(x+60,y+95);
    glVertex2f(x+60,y+75);

    glVertex2f(x+45,y+125);
    glVertex2f(x+45,y+145);
    glVertex2f(x+60,y+145);
    glVertex2f(x+60,y+125);

    glVertex2f(x+45,y+170);
    glVertex2f(x+45,y+190);
    glVertex2f(x+60,y+190);
    glVertex2f(x+60,y+170);//2w

    glVertex2f(x+75,y+40);
    glVertex2f(x+75,y+60);
    glVertex2f(x+90,y+60);
    glVertex2f(x+90,y+40);

    glVertex2f(x+75,y+80);
    glVertex2f(x+75,y+100);
    glVertex2f(x+90,y+100);
    glVertex2f(x+90,y+80);

    glVertex2f(x+75,y+130);
    glVertex2f(x+75,y+150);
    glVertex2f(x+90,y+150);
    glVertex2f(x+90,y+130);

    glVertex2f(x+75,y+180);
    glVertex2f(x+75,y+200);
    glVertex2f(x+90,y+200);
    glVertex2f(x+90,y+180);

    glVertex2f(x+75,y+230);
    glVertex2f(x+75,y+250);
    glVertex2f(x+90,y+250);
    glVertex2f(x+90,y+230);//2w

    glVertex2f(x+105,y+80);
    glVertex2f(x+105,y+100);
    glVertex2f(x+120,y+100);
    glVertex2f(x+120,y+80);

    glVertex2f(x+105,y+130);
    glVertex2f(x+105,y+150);
    glVertex2f(x+120,y+150);
    glVertex2f(x+120,y+130);

    glVertex2f(x+105,y+180);
    glVertex2f(x+105,y+200);
    glVertex2f(x+120,y+200);
    glVertex2f(x+120,y+180);//3w
    glEnd();
}
void drawbuildings()
{
	int x=300,y=460;
	int x1=310,y1=580,x2=315,y2=700;
		glBegin(GL_QUADS);
	glColor3f(0.0,0.0,0.0);
    glVertex2f(x,y);
    glVertex2f(x,y+150);
    glVertex2f(x+100,y+150);
    glVertex2f(x+100,y);

    glVertex2f(x1,y1);
    glVertex2f(x1,y1+120);
    glVertex2f(x1+80,y1+120);
    glVertex2f(x1+80,y1);


    glVertex2f(x2,y2);
    glVertex2f(x2,y2+100);
    glVertex2f(x2+70,y2+100);
    glVertex2f(x2+70,y2);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3f(0,0,0);
    int t1=310,t2=800;
    glVertex2f(t1,t2);
    glVertex2f(t1+35,t2+75);
    glVertex2f(t1+80,t2);
    glEnd();
}
void drawhouse1()
{
	int x=0,y=460;
	glColor3f(0.0, 0.0, 1.0);
    glBegin(GL_QUADS);

    glColor3f(0.0,0.0,0.0);
    glVertex2f(x,y);
    glVertex2f(x,y+200);
    glVertex2f(x+70,y+200);
    glVertex2f(x+70,y);

    glColor3f(0.0,0.0,0.0);
    glVertex2f(x+40,y);
    glVertex2f(x+40,y+300);
    glVertex2f(x+100,y+300);
    glVertex2f(x+100,y);

    glColor3f(00,.0,0.0);
    glVertex2f(x+100,y);
    glVertex2f(x+100,y+270);
    glVertex2f(x+150,y+270);
    glVertex2f(x+150,y);
    //end of 1 house
    glEnd();
}
void tower(int a)
{
    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex2f(750+a,460);
    glVertex2f(750+a,700);
    glVertex2f(760+a,700);
    glVertex2f(760+a,460);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3f(0.1,0.2,0.3);
    glVertex2f(730.0+a,700.0);
    glVertex2f(755.0+a,730.0);
    glVertex2f(780.0+a,700.0);
    glEnd();
}
int count=0;
GLfloat wx=17,wx1=43,cx=0;
GLfloat wy=115,wy1=115;
void car()
{
    glBegin(GL_POLYGON);
    glColor3f(0.0,0.0,1.0);
    glVertex2f(cx+5,116);//1
    glVertex2f(cx+5,135);//2
    glVertex2f(cx+15,135);//3
    glVertex2f(cx+20,160);//4
    glVertex2f(cx+40,160);//5
    glVertex2f(cx+47,135);//6
    glVertex2f(cx+60,136);//7
    glVertex2f(cx+60,116);//8
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0,0.0,0.0);
    for(float i=1.0;i<360.0;i++)
    {
        float x=wx+sin(i)*7;
        float y=wy+cos(i)*7;
        glVertex2f(x,y);
    }
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.0,0.0,0.0);
    for(float i=1.0;i<360.0;i++)
    {
        float x=wx1+sin(i)*7;
        float y=wy1+cos(i)*7;
        glVertex2f(x,y);
    }
    glEnd();
    glutSwapBuffers();
    if(count==0)
    {

        if(wx==1000||cx==1000||wx1==1000)
        {
            wx=17;
            wx1=43;
            cx=0;
        }
        wx+=1.0;
        cx+=1.0;
        wx1+=1.0;
    }

    glFlush();

}
GLfloat wx2=17,wx3=43,cx1=0;
GLfloat wy2=195,wy3=195;
void car1()
{



    glBegin(GL_POLYGON);
    glColor3f(0.0,0.0,1.0);
    glVertex2f(cx1+5,196);//1
    glVertex2f(cx1+5,215);//2
    glVertex2f(cx1+15,215);//3
    glVertex2f(cx1+20,240);//4
    glVertex2f(cx1+40,240);//5
    glVertex2f(cx1+47,215);//6
    glVertex2f(cx1+60,216);//7
    glVertex2f(cx1+60,196);//8
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0,0.0,0.0);
    for(float i=1.0;i<360.0;i++)
    {
        float x=wx2+sin(i)*7;
        float y=wy2+cos(i)*7;
        glVertex2f(x,y);
    }
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.0,0.0,0.0);
    for(float i=1.0;i<360.0;i++)
    {
        float x=wx3+sin(i)*7;
        float y=wy3+cos(i)*7;
        glVertex2f(x,y);
    }
    glEnd();
    glutSwapBuffers();
    if(count==0)
    {

        if(wx2==1000||cx==1000||wx3==1000)
        {
            wx2=17;
            wx3=43;
            cx1=0;
        }
        wx2+=1.5;
        cx1+=1.5;
        wx3+=1.5;
    }

    glFlush();

}

GLfloat wx4=957,wx5=983,cx2=0;
GLfloat wy4=315,wy5=315;
void car2()
{
    glBegin(GL_POLYGON);
    glColor3f(0.0,0.0,1.0);
    glVertex2f(cx2+940,316);//1
    glVertex2f(cx2+940,336);//2
    glVertex2f(cx2+953,335);//3
    glVertex2f(cx2+960,360);//4
    glVertex2f(cx2+980,360);//5
    glVertex2f(cx2+985,335);//6
    glVertex2f(cx2+995,335);//7
    glVertex2f(cx2+995,316);//8
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0,0.0,0.0);
    for(float i=1.0;i<360.0;i++)
    {
        float x=wx4+sin(i)*7;
        float y=wy4+cos(i)*7;
        glVertex2f(x,y);
    }
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.0,0.0,0.0);
    for(float i=1.0;i<360.0;i++)
    {
        float x=wx5+sin(i)*7;
        float y=wy5+cos(i)*7;
        glVertex2f(x,y);
    }
    glEnd();
    glutSwapBuffers();
    if(count==0)
    {

        if(wx4==0||cx2==0||wx5==0)
        {
            wx4=957;
            wx5=983;
            cx2=0;
        }
        wx4-=1.0;
        cx2-=1.0;
        wx5-=1.0;
    }

    glFlush();

}
GLfloat wx6=957,wx7=983,cx3=0;
GLfloat wy6=395,wy7=395,count3=1;
void car3()
{
    glBegin(GL_POLYGON);
    glColor3f(0.0,0.0,1.0);
    glVertex2f(cx3+940,396);//1
    glVertex2f(cx3+940,416);//2
    glVertex2f(cx3+953,415);//3
    glVertex2f(cx3+960,440);//4
    glVertex2f(cx3+980,440);//5
    glVertex2f(cx3+985,415);//6
    glVertex2f(cx3+995,415);//7
    glVertex2f(cx3+995,396);//8
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0,0.0,0.0);
    for(float i=1.0;i<360.0;i++)
    {
        float x=wx6+sin(i)*7;
        float y=wy6+cos(i)*7;
        glVertex2f(x,y);
    }
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.0,0.0,0.0);
    for(float i=1.0;i<360.0;i++)
    {
        float x=wx7+sin(i)*7;
        float y=wy7+cos(i)*7;
        glVertex2f(x,y);
    }
    glEnd();
    glutSwapBuffers();
    if(count3==1)
    {
        if(wx6==200)
        {
            wx6=957;
            wx7=983;
            cx3=0;
        }
        wx6-=1.2;
        cx3-=1.2;
        wx7-=1.2;
        if(wx6==200)
        {
            wx6=957;
            wx7=983;
            cx3=0;
        }
    }

    glFlush();

}
void sun(GLfloat x,GLfloat Y)
{
	float radius=50,angle,x2,y2;
		glBegin(GL_POLYGON);
		glColor3f(0.7,0.1,0.04);
for (angle=1.0f;angle<360.0f;angle++)
{
    x2 = x+sin(angle)*radius;
     y2 = Y+cos(angle)*radius;
    glVertex2f(x2,y2);
}
glEnd();
}
void City()
{
	glBegin(GL_QUADS);
glColor3f(1,.5,0);
glVertex2f(0,0);
glColor3f(0,0,1);
glVertex2f(0,1000);
glColor3f(0,0,1);
glVertex2f(1000,1000);
glColor3f(1,0.5,0);
glVertex2f(1000,0);
glEnd();
int x,y;
glColor3f(1,.6,0);

road();
road1();
footpath();
drawhouse1();
windo();
drawbuildings();
tower(0);
tower(50);
tower(100);
tower(150);
tower(200);
sun(450,900);
car();
car1();
car2();
car3();

glColor3f(1,1,1);
	 char *a="CITY CAR SIMULATION";
    glRasterPos2f( 70 , 60 );
    for(int i = 0; a[i] !='\0'; i++)
      glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, a[i]);

glFlush();

}

void mouse(int btn,int state,int ,int )
{
	if(btn==GLUT_LEFT_BUTTON && state==GLUT_DOWN)
        glutDisplayFunc(City);

}
void keypressed(unsigned char key,int x,int y)
{
        if(key==ESCAPE)
    {
            glutDestroyMenu(window);
            exit(0);
    }
}
void myinit(void)
{
	glClearColor(1.0,1.0,1.0,1.0);
	glColor3f(1.0,0.0,0.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0,1000.0,0.0,1000.0);

    glBegin(GL_QUADS);
    glColor3f(0.5,0.3,0);
    glVertex2f(0,0);
    glColor3f(0.5,0.3,0);
    glVertex2f(0,1000);
    glColor3f(0.5,0.3,0);
    glVertex2f(1000,1000);
    glColor3f(0.5,0.3,0);
    glVertex2f(1000,0);
    glEnd();


    glColor3f(0,0,0);
    char *c="LEFT CLICK TO CONTINUE";
    glRasterPos2f( 400 , 900 );
    for(int i = 0; c[i] !='\0'; i++)
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, c[i]);
    glColor3f(0,0,0);
    char *a="DIVYANG HIRPARA : 1OX15CS038";
    glRasterPos2f( 50 , 200 );
    for(int i = 0; a[i] !='\0'; i++)
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, a[i]);
    glColor3f(0,0,0);
    char *d="NAVENDU MISHRA : 1OX15CS062";
    glRasterPos2f( 50 , 150 );
    for(int i = 0; d[i] !='\0'; i++)
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, d[i]);
    glColor3f(0,0,0);
    char *j="AJAY MOURYA : 1OX15CS006";
    glRasterPos2f( 600 , 200 );
    for(int i = 0; j[i] !='\0'; i++)
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, j[i]);
    glColor3f(0,0,0);
    char *n="JAYKUMAR SAVANI : 1OX15CS042";
    glRasterPos2f( 600 , 150 );
    for(int i = 0; n[i] !='\0'; i++)
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, n[i]);
///o
glBegin(GL_QUADS);
glColor3f(0,0.5,0.4);
glVertex2f(50,600);
glVertex2f(50,750);
glVertex2f(200,750);
glVertex2f(200,600);
glEnd();

///x
glLineWidth(40);
glColor3f(0,0.5,0.4);
glBegin(GL_LINE_STRIP);
glVertex2f(225,600);
glVertex2f(325,750);
glEnd();
glLineWidth(40);
glColor3f(0,0.5,0.4);
glBegin(GL_LINE_STRIP);
glVertex2f(225,750);
glVertex2f(325,600);
glEnd();

///f
glLineWidth(40);
glColor3f(0.1,0.1,0.1);
glBegin(GL_LINE_STRIP);
glVertex2f(350,600);
glVertex2f(350,675);
glVertex2f(400,675);
glVertex2f(350,675);
glVertex2f(350,750);
glVertex2f(925,750);
glEnd();
///o
glBegin(GL_QUADS);
glColor3f(.9,0.1,0.1);
glVertex2f(425,600);
glVertex2f(425,700);
glVertex2f(575,700);
glVertex2f(575,600);
glEnd();
///r
glLineWidth(40);
glColor3f(.9,0.1,0.1);
glBegin(GL_LINE_STRIP);
glVertex2f(600,600);
glVertex2f(600,700);
glVertex2f(750,700);
glVertex2f(750,650);
glVertex2f(600,650);
glVertex2f(750,600);
glEnd();

///d
glLineWidth(40);
glColor3f(.9,0.1,0.1);
glBegin(GL_LINE_STRIP);
glVertex2f(775,600);
glVertex2f(925,600);
glVertex2f(925,700);
glVertex2f(775,700);
glEnd();

glFlush();
}
int main(int argc,char** argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
    glutInitWindowPosition(0,0);
    glutInitWindowSize(1500,1500);
    window=glutCreateWindow("car Animation");
    glutDisplayFunc(myinit);
	glutMouseFunc(mouse);
	glutKeyboardFunc(keypressed);
    Timer(1);
    glutMainLoop();
    return 0;
}
