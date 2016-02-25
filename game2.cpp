/*game_2*/
/*search_goal*/
/*YusukeKato*/
/*2016.2.10*/
/*2016.2.13*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <GL/glut.h>
#define PI 3.14159265

/*position_hero*/
static GLdouble x=0,y=-2.5;
/*color*/
static GLdouble r1=1.0,g1=1.0,b1=0.0;
static GLdouble r2=1.0,g2=1.0,b2=0.0;
static GLdouble r3=1.0,g3=1.0,b3=0.0;
static GLdouble r4=1.0,g4=1.0,b4=0.0;
static GLdouble r5=1.0,g5=1.0,b5=0.0;
/*flag*/
static GLint fg=0,fg2=0;
static GLint flg1=0,flg2=0,flg3=0,flg4=0,flg5=0;
static GLint flg6=0,flg7=0,flg8=0,flg9=0,flg10=0;
static GLint flg11=0,flg12=0,flg13=0,flg14=0;
static GLint flag=0,flag1=0,flag2=0;
static GLint sym1=0,sym2=0,sym3=0,sym4=0,sym5=0;
static GLint i=0;
/*enemy1*/
static GLdouble x1=7.5,y1=0.0;
/*enemy2*/
static GLdouble x2=-27.5,y2=-27.5;
/*enemy3*/
static GLdouble x3=-32.5,y3=0.0;
/*enemy4*/
static GLdouble x4=12.5,y4=-12.5;
/*enemy5*/
static GLdouble x5=27.5,y5=-7.5;
/*enemy6*/
static GLdouble x6=32.5,y6=20;
/*enemy7*/
static GLdouble x7=20,y7=-32.5;
/*enemy8*/
static GLdouble x8=7.5,y8=2.5;
/*enemy9*/
static GLdouble x9=-2.5,y9=22.5;
/*enemy10*/
static GLdouble x10=-27.5,y10=7.5;
/*enemy11*/
static GLdouble x11=-25,y11=25;
/*enemy12*/
static GLdouble x12=7.5,y12=27.5;
/*enemy13*/
static GLdouble x13=-300,y13=20;
/*enemy14*/
static GLdouble x14=27.5,y14=27.5;

void display(void)
{	
	glClear(GL_COLOR_BUFFER_BIT);
	
	/***** maze *****/
	glPushMatrix();
	glColor3f(1.0, 1.0, 1.0);
	glTranslatef(0,0,0);
	glBegin(GL_LINE_STRIP);
	glVertex2d(30,30);
	glVertex2d(30,-30);
	glVertex2d(-30,-30);
	glVertex2d(-30,30);
	glVertex2d(25,30);
	glEnd();
	glBegin(GL_LINES);
	//line_longitudinal	
	glVertex2d(-25,20);
	glVertex2d(-25,10);
	glVertex2d(-25,5);
	glVertex2d(-25,0);
	glVertex2d(-25,-10);
	glVertex2d(-25,-20);
	glVertex2d(-20,25);
	glVertex2d(-20,20);
	glVertex2d(-20,0);
	glVertex2d(-20,-5);
	glVertex2d(-20,-10);
	glVertex2d(-20,-15);
	glVertex2d(-20,-20);
	glVertex2d(-20,-25);
	glVertex2d(-15,30);
	glVertex2d(-15,20);
	glVertex2d(-15,10);
	glVertex2d(-15,5);
	glVertex2d(-15,-5);
	glVertex2d(-15,-10);
	glVertex2d(-15,-15);
	glVertex2d(-15,-25);
	glVertex2d(-10,10);
	glVertex2d(-10,-5);
	glVertex2d(-5,15);
	glVertex2d(-5,5);
	glVertex2d(-5,-5);
	glVertex2d(-5,-10);
	glVertex2d(-5,-20);
	glVertex2d(-5,-30);
	glVertex2d(0,-5);
	glVertex2d(0,-15);
	glVertex2d(0,-20);
	glVertex2d(0,-25);
	glVertex2d(5,25);
	glVertex2d(5,5);
	glVertex2d(5,-10);
	glVertex2d(5,-20);
	glVertex2d(5,-25);
	glVertex2d(5,-30);
	glVertex2d(10,25);
	glVertex2d(10,20);
	glVertex2d(10,15);
	glVertex2d(10,10);
	glVertex2d(10,-5);
	glVertex2d(10,-25);
	glVertex2d(15,20);
	glVertex2d(15,15);
	glVertex2d(15,0);
	glVertex2d(15,-5);
	glVertex2d(15,-15);
	glVertex2d(15,-20);
	glVertex2d(20,25);
	glVertex2d(20,20);
	glVertex2d(20,15);
	glVertex2d(20,10);
	glVertex2d(20,-20);
	glVertex2d(20,-25);
	glVertex2d(25,20);
	glVertex2d(25,15);
	glVertex2d(25,20);
	glVertex2d(25,15);
	glVertex2d(25,10);
	glVertex2d(25,5);
	//line_	beside
	glVertex2d(-25,25);
	glVertex2d(-20,25);
	glVertex2d(-10,25);
	glVertex2d(5,25);
	glVertex2d(15,25);
	glVertex2d(25,25);
	glVertex2d(-10,20);
	glVertex2d(0,20);
	glVertex2d(10,20);
	glVertex2d(15,20);
	glVertex2d(-20,15);
	glVertex2d(0,15);
	glVertex2d(15,15);
	glVertex2d(20,15);
	glVertex2d(-20,10);
	glVertex2d(-15,10);
	glVertex2d(0,10);
	glVertex2d(5,10);
	glVertex2d(10,10);
	glVertex2d(15,10);
	glVertex2d(20,10);
	glVertex2d(25,10);
	glVertex2d(-25,5);
	glVertex2d(-20,5);
	glVertex2d(-5,5);
	glVertex2d(0,5);
	glVertex2d(10,5);
	glVertex2d(20,5);
	glVertex2d(-20,0);
	glVertex2d(-15,0);
	glVertex2d(-10,0);
	glVertex2d(5,0);
	glVertex2d(10,0);
	glVertex2d(25,0);
	glVertex2d(-30,-5);
	glVertex2d(-20,-5);
	glVertex2d(0,-5);
	glVertex2d(5,-5);
	glVertex2d(20,-5);
	glVertex2d(25,-5);
	glVertex2d(-20,-10);
	glVertex2d(-5,-10);
	glVertex2d(15,-10);
	glVertex2d(20,-10);
	glVertex2d(25,-10);
	glVertex2d(30,-10);
	glVertex2d(-15,-15);
	glVertex2d(-10,-15);
	glVertex2d(-5,-15);
	glVertex2d(0,-15);
	glVertex2d(20,-15);
	glVertex2d(25,-15);
	glVertex2d(-10,-20);
	glVertex2d(-5,-20);
	glVertex2d(0,-20);
	glVertex2d(5,-20);
	glVertex2d(25,-20);
	glVertex2d(30,-20);
	glVertex2d(-25,-25);
	glVertex2d(-20,-25);
	glVertex2d(-15,-25);
	glVertex2d(-10,-25);
	glVertex2d(10,-25);
	glVertex2d(15,-25);
	glVertex2d(20,-25);
	glVertex2d(25,-25);
	glEnd();
	glFlush();
	glPopMatrix();
	/****************/
	
	/***** symbol1 *****/
	glPushMatrix();
	glColor3f(r1,g1,b1);
	glTranslatef(-27.5,27.5,0);
	glBegin(GL_POLYGON);
	glVertex2d(1.0,1.0);
	glVertex2d(1.0,-1.0);
	glVertex2d(-1.0,-1.0);
	glVertex2d(-1.0,1.0);
	glEnd();
	glFlush();
	glPopMatrix();
	/*******************/
	/***** symbol2 *****/
	glPushMatrix();
	glColor3f(r2, g2, b2);
	glTranslatef(-17.5,-22.5,0);
	glBegin(GL_POLYGON);
	glVertex2d(1.0,1.0);
	glVertex2d(1.0,-1.0);
	glVertex2d(-1.0,-1.0);
	glVertex2d(-1.0,1.0);
	glEnd();
	glFlush();
	glPopMatrix();
	/*******************/
	/***** symbol3 *****/
	glPushMatrix();
	glColor3f(r3, g3, b3);
	glTranslatef(17.5,17.5,0);
	glBegin(GL_POLYGON);
	glVertex2d(1.0,1.0);
	glVertex2d(1.0,-1.0);
	glVertex2d(-1.0,-1.0);
	glVertex2d(-1.0,1.0);
	glEnd();
	glFlush();
	glPopMatrix();
	/*******************/
	/***** symbol4 *****/
	glPushMatrix();
	glColor3f(r4, g4, b4);
	glTranslatef(22.5,-12.5,0);
	glBegin(GL_POLYGON);
	glVertex2d(1.0,1.0);
	glVertex2d(1.0,-1.0);
	glVertex2d(-1.0,-1.0);
	glVertex2d(-1.0,1.0);
	glEnd();
	glFlush();
	glPopMatrix();
	/*******************/
	/***** symbol5 *****/
	glPushMatrix();
	glColor3f(r5, g5, b5);
	glTranslatef(-2.5,2.5,0);
	glBegin(GL_POLYGON);
	glVertex2d(1.0,1.0);
	glVertex2d(1.0,-1.0);
	glVertex2d(-1.0,-1.0);
	glVertex2d(-1.0,1.0);
	glEnd();
	glFlush();
	glPopMatrix();
	/*******************/
	
	/*****	hero *****/
	glPushMatrix();
	glColor3f(0.0, 1.0, 1.0);
	glTranslatef(x,y,0);
	glBegin(GL_LINE_LOOP);
	for(i=0;i<180;i++){
  		glVertex2d(cos(i*(PI/180.0))*1.6,sin(i*(PI/180.0))*1.6);
	}
	glEnd();
	glBegin(GL_LINES);
	glVertex2d(-1.5,0.7);
	glVertex2d(-2.5,1.5);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex2d(0.4,0.6);
	glVertex2d(0.4,0.4);
	glVertex2d(0.6,0.4);
	glVertex2d(0.6,0.6);
	glEnd();
	glFlush();
	glPopMatrix();
	/********************/
	
	/***** enemy1 *****/
	glPushMatrix();
	glColor3f(1.0, 0.0, 0.0);
	glTranslatef(x1,y1,0);
	glBegin(GL_LINE_LOOP);
	glVertex2d(2.0,2.0);
	glVertex2d(2.0,-2.0);
	glVertex2d(-2.0,-2.0);
	glVertex2d(-2.0,2.0);
	glEnd();
	glFlush();
	glPopMatrix();
	/*******************/
	/***** enemy2 *****/
	glPushMatrix();
	glColor3f(1.0, 0.0, 0.0);
	glTranslatef(x2,y2,0);
	glBegin(GL_LINE_LOOP);
	glVertex2d(2.0,2.0);
	glVertex2d(2.0,-2.0);
	glVertex2d(-2.0,-2.0);
	glVertex2d(-2.0,2.0);
	glEnd();
	glFlush();
	glPopMatrix();
	/*******************/
	/***** enemy3 *****/
	glPushMatrix();
	glColor3f(1.0, 0.0, 0.0);
	glTranslatef(x3,y3,0);
	glBegin(GL_LINE_LOOP);
	glVertex2d(2.0,2.0);
	glVertex2d(2.0,-2.0);
	glVertex2d(-2.0,-2.0);
	glVertex2d(-2.0,2.0);
	glEnd();
	glFlush();
	glPopMatrix();
	/*******************/
	/***** enemy4 *****/
	glPushMatrix();
	glColor3f(1.0, 0.0, 0.0);
	glTranslatef(x4,y4,0);
	glBegin(GL_LINE_LOOP);
	glVertex2d(2.0,2.0);
	glVertex2d(2.0,-2.0);
	glVertex2d(-2.0,-2.0);
	glVertex2d(-2.0,2.0);
	glEnd();
	glFlush();
	glPopMatrix();
	/*******************/
	/***** enemy5 *****/
	glPushMatrix();
	glColor3f(1.0, 0.0, 0.0);
	glTranslatef(x5,y5,0);
	glBegin(GL_LINE_LOOP);
	glVertex2d(2.0,2.0);
	glVertex2d(2.0,-2.0);
	glVertex2d(-2.0,-2.0);
	glVertex2d(-2.0,2.0);
	glEnd();
	glFlush();
	glPopMatrix();
	/*******************/
	/***** enemy6 *****/
	glPushMatrix();
	glColor3f(1.0, 0.0, 0.0);
	glTranslatef(x6,y6,0);
	glBegin(GL_LINE_LOOP);
	glVertex2d(2.0,2.0);
	glVertex2d(2.0,-2.0);
	glVertex2d(-2.0,-2.0);
	glVertex2d(-2.0,2.0);
	glEnd();
	glFlush();
	glPopMatrix();
	/*******************/
	/***** enemy7 *****/
	glPushMatrix();
	glColor3f(1.0, 0.0, 0.0);
	glTranslatef(x7,y7,0);
	glBegin(GL_LINE_LOOP);
	glVertex2d(2.0,2.0);
	glVertex2d(2.0,-2.0);
	glVertex2d(-2.0,-2.0);
	glVertex2d(-2.0,2.0);
	glEnd();
	glFlush();
	glPopMatrix();
	/*******************/
	/***** enemy8 *****/
	glPushMatrix();
	glColor3f(1.0, 0.0, 0.0);
	glTranslatef(x8,y8,0);
	glBegin(GL_LINE_LOOP);
	glVertex2d(2.0,2.0);
	glVertex2d(2.0,-2.0);
	glVertex2d(-2.0,-2.0);
	glVertex2d(-2.0,2.0);
	glEnd();
	glFlush();
	glPopMatrix();
	/*******************/
	/***** enemy9 *****/
	glPushMatrix();
	glColor3f(1.0, 0.0, 0.0);
	glTranslatef(x9,y9,0);
	glBegin(GL_LINE_LOOP);
	glVertex2d(2.0,2.0);
	glVertex2d(2.0,-2.0);
	glVertex2d(-2.0,-2.0);
	glVertex2d(-2.0,2.0);
	glEnd();
	glFlush();
	glPopMatrix();
	/*******************/
	/***** enemy10 *****/
	glPushMatrix();
	glColor3f(1.0, 0.0, 0.0);
	glTranslatef(x10,y10,0);
	glBegin(GL_LINE_LOOP);
	glVertex2d(2.0,2.0);
	glVertex2d(2.0,-2.0);
	glVertex2d(-2.0,-2.0);
	glVertex2d(-2.0,2.0);
	glEnd();
	glFlush();
	glPopMatrix();
	/*******************/
	/***** enemy11 *****/
	glPushMatrix();
	glColor3f(1.0, 0.0, 0.0);
	glTranslatef(x11,y11,0);
	glBegin(GL_LINE_LOOP);
	glVertex2d(4.0,4.0);
	glVertex2d(4.0,-4.0);
	glVertex2d(-4.0,-4.0);
	glVertex2d(-4.0,4.0);
	glEnd();
	glFlush();
	glPopMatrix();
	/*******************/
	/***** enemy12 *****/
	glPushMatrix();
	glColor3f(1.0, 0.0, 0.0);
	glTranslatef(x12,y12,0);
	glBegin(GL_LINE_LOOP);
	glVertex2d(2.0,2.0);
	glVertex2d(2.0,-2.0);
	glVertex2d(-2.0,-2.0);
	glVertex2d(-2.0,2.0);
	glEnd();
	glFlush();
	glPopMatrix();
	/*******************/
	/***** enemy13 *****/
	glPushMatrix();
	glColor3f(1.0, 0.0, 0.0);
	glTranslatef(x13,y13,0);
	glBegin(GL_LINE_LOOP);
	glVertex2d(5.0,5.0);
	glVertex2d(5.0,-5.0);
	glVertex2d(-5.0,-5.0);
	glVertex2d(-5.0,5.0);
	glEnd();
	glFlush();
	glPopMatrix();
	/*******************/
	/***** enemy14 *****/
	glPushMatrix();
	glColor3f(1.0, 0.0, 0.0);
	glTranslatef(x14,y14,0);
	glBegin(GL_LINE_LOOP);
	glVertex2d(2.0,2.0);
	glVertex2d(2.0,-2.0);
	glVertex2d(-2.0,-2.0);
	glVertex2d(-2.0,2.0);
	glEnd();
	glFlush();
	glPopMatrix();
	/*******************/
	
	glutSwapBuffers();
}

void simu(void)
{
		/*conditions_collision*/
		if(y<-29&&y>-31&&x>-31) fg = 1;
		if(y>29&&y<31&&x<25&&x>-31) fg = 2;
		if(x>29&&x<31) fg = 3;
		if(x<-29&&x>-31&&y<31) fg = 4;
		//from left, from up
		//line_beside
		if(x>=-30&&x<=-20&&y>-6&&y<=-5) fg=5;
		if(x>=-30&&x<=-20&&y>-5&&y<=-4) fg=6;
		if(x>=-25&&x<=-20&&y>25&&y<=26) fg=7;
		if(x>=-25&&x<=-20&&y>24&&y<=25) fg=8;
		if(x>=-25&&x<=-20&&y>5&&y<=6) fg=9;
		if(x>=-25&&x<=-20&&y>4&&y<=5) fg=10;
		if(x>=-25&&x<=-20&&y>-25&&y<=-24) fg=11;
		if(x>=-25&&x<=-20&&y>-26&&y<=-25) fg=12;
		if(x>=-20&&x<=0&&y>15&&y<=16) fg=13;
		if(x>=-20&&x<=0&&y>14&&y<=15) fg=14;
		if(x>=-20&&x<=-15&&y>10&&y<=11) fg=15;
		if(x>=-20&&x<=-15&&y>9&&y<=10) fg=16;
		if(x>=-20&&x<=-15&&y>0&&y<=1) fg=17;
		if(x>=-20&&x<=-15&&y>-1&&y<=0) fg=18;
		if(x>=-20&&x<=-5&&y>-10&&y<=-9) fg=19;
		if(x>=-20&&x<=-5&&y>-11&&y<=-10) fg=20;
		if(x>=-15&&x<=-10&&y>-15&&y<=-14) fg=21;
		if(x>=-15&&x<=-10&&y>-16&&y<=-15) fg=22;
		if(x>=-15&&x<=-10&&y>-25&&y<=-24) fg=23;
		if(x>=-15&&x<=-10&&y>-26&&y<=-25) fg=24;
		if(x>=-10&&x<=5&&y>25&&y<=26) fg=25;
		if(x>=-10&&x<=5&&y>24&&y<=25) fg=26;
		if(x>=-10&&x<=0&&y>20&&y<=21) fg=27;
		if(x>=-10&&x<=0&&y>19&&y<=20) fg=28;
		if(x>=-10&&x<=5&&y>0&&y<=1) fg=29;
		if(x>=-10&&x<=5&&y>-1&&y<=0) fg=30;
		if(x>=-10&&x<=-5&&y>-20&&y<=-19) fg=31;
		if(x>=-10&&x<=-5&&y>-21&&y<=-20) fg=32;
		if(x>=-5&&x<=0&&y>5&&y<=6) fg=33;
		if(x>=-5&&x<=0&&y>4&&y<=5) fg=34;
		if(x>=-5&&x<=0&&y>-15&&y<=-14) fg=35;
		if(x>=-5&&x<=0&&y>-16&&y<=-15) fg=36;
		if(x>=0&&x<=5&&y>10&&y<=11) fg=37;
		if(x>=0&&x<=5&&y>9&&y<=10) fg=38;
		if(x>=0&&x<=5&&y>-5&&y<=-4) fg=39;
		if(x>=0&&x<=5&&y>-6&&y<=-5) fg=40;
		if(x>=0&&x<=5&&y>-20&&y<=-19) fg=41;
		if(x>=0&&x<=5&&y>-21&&y<=-20) fg=42;
		if(x>=10&&x<=15&&y>20&&y<21) fg=43;
		if(x>=10&&x<=15&&y>19&&y<20) fg=44;
		if(x>=10&&x<=15&&y>10&&y<=11) fg=45;
		if(x>=10&&x<=15&&y>9&&y<=10) fg=46;
		if(x>=10&&x<=20&&y>5&&y<=6) fg=47;
		if(x>=10&&x<=20&&y>4&&y<=5) fg=48;
		if(x>=10&&x<=25&&y>0&&y<=1) fg=49;
		if(x>=10&&x<=25&&y>-1&&y<=0) fg=50;
		if(x>=10&&x<=15&&y>-25&&y<=-24) fg=51;
		if(x>=10&&x<=15&&y>-26&&y<=-25) fg=52;
		if(x>=15&&x<=25&&y>25&&y<=26) fg=53;
		if(x>=15&&x<=25&&y>24&&y<=25) fg=54;
		if(x>=15&&x<=20&&y>15&&y<=16) fg=55;
		if(x>=15&&x<=20&&y>14&&y<=15) fg=56;
		if(x>=15&&x<=20&&y>-10&&y<=-9) fg=57;
		if(x>=15&&x<=20&&y>-11&&y<=-10) fg=58;
		if(x>=20&&x<=25&&y>10&&y<=11) fg=59;
		if(x>=20&&x<=25&&y>9&&y<=10) fg=60;
		if(x>=20&&x<=25&&y>-5&&y<=-4) fg=61;
		if(x>=20&&x<=25&&y>-6&&y<=-5) fg=62;
		if(x>=20&&x<=25&&y>-15&&y<=-14) fg=63;
		if(x>=20&&x<=25&&y>-16&&y<=-15) fg=64;
		if(x>=20&&x<=25&&y>-25&&y<=-24) fg=65;
		if(x>=20&&x<=25&&y>-26&&y<=-25) fg=66;
		if(x>=25&&x<=30&&y>-10&&y<=-9) fg=67;
		if(x>=25&&x<=30&&y>-11&&y<=-10) fg=68;
		if(x>=25&&x<=30&&y>-20&&y<=-19) fg=69;
		if(x>=25&&x<=30&&y>-21&&y<=-20) fg=70;
		//line_longitudinal
		if(y>=20&&y<=30&&x>-16&&x<=-15) fg=71;
		if(y>=20&&y<=30&&x>-15&&x<=-14) fg=72;
		if(y>=20&&y<=25&&x>-21&&x<=-20) fg=73;
		if(y>=20&&y<=25&&x>-20&&x<=-19) fg=74;
		if(y>=5&&y<=25&&x>4&&x<=5) fg=75;
		if(y>=5&&y<=25&&x>5&&x<=6) fg=76;
		if(y>20&&y<=25&&x>9&&x<=10) fg=77;
		if(y>20&&y<=25&&x>10&&x<=11) fg=78;
		if(y>20&&y<=25&&x>19&&x<=20) fg=79;
		if(y>20&&y<=25&&x>20&&x<=21) fg=80;
		if(y>10&&y<=20&&x>-26&&x<=-25) fg=81;
		if(y>10&&y<=20&&x>-25&&x<=-24) fg=82;
		if(y>15&&y<=20&&x>14&&x<=15) fg=83;
		if(y>15&&y<=20&&x>15&&x<=16) fg=84;
		if(y>15&&y<=20&&x>24&&x<=25) fg=85;
		if(y>15&&y<=20&&x>25&&x<=26) fg=86;
		if(y>5&&y<=15&&x>-6&&x<=-5) fg=87;
		if(y>5&&y<=15&&x>-5&&x<=-4) fg=88;
		if(y>10&&y<=15&&x>9&&x<=10) fg=89;
		if(y>10&&y<=15&&x>10&&x<=11) fg=90;
		if(y>10&&y<=15&&x>19&&x<=20) fg=91;
		if(y>10&&y<=15&&x>20&&x<=21) fg=92;
		if(y>5&&y<=10&&x>-16&&x<=-15) fg=93;
		if(y>5&&y<=10&&x>-15&&x<=-14) fg=94;
		if(y>-5&&y<=10&&x>-11&&x<=-10) fg=95;
		if(y>-5&&y<=10&&x>-10&&x<=-9) fg=96;
		if(y>5&&y<=10&&x>24&&x<=25) fg=97;
		if(y>5&&y<=10&&x>25&&x<=26) fg=98;
		if(y>0&&y<=5&&x>-26&&x<=-25) fg=99;
		if(y>0&&y<=5&&x>-25&&x<=-24) fg=100;
		if(y>-5&&y<=0&&x>-21&&x<=-20) fg=101;
		if(y>-5&&y<=0&&x>-20&&x<=-19) fg=102;
		if(y>-5&&y<=0&&x>14&&x<=15) fg=103;
		if(y>-5&&y<=0&&x>15&&x<=16) fg=104;
		if(y>-10&&y<=-5&&x>-16&&x<=-15) fg=105;
		if(y>-10&&y<=-5&&x>-15&&x<=-14) fg=106;
		if(y>-10&&y<=-5&&x>-6&&x<=-5) fg=107;
		if(y>-10&&y<=-5&&x>-5&&x<=-4) fg=108;
		if(y>-15&&y<=-5&&x>-1&&x<=0) fg=109;
		if(y>-15&&y<=-5&&x>0&&x<=1) fg=110;
		if(y>-25&&y<=-5&&x>9&&x<=10) fg=111;
		if(y>-25&y<=-5&&x>10&&x<=11) fg=112;
		if(y>-20&&y<=-10&&x>-26&&x<=-25) fg=113;
		if(y>-20&&y<=-10&&x>-25&&x<=-24) fg=114;
		if(y>-15&&y<=-10&&x>-21&&x<=-20) fg=115;
		if(y>-15&&y<=-10&&x>-20&&x<=-19) fg=116;
		if(y>-20&&y<=-10&&x>4&&x<=5) fg=117;
		if(y>-20&&y<=-10&&x>5&&x<=6) fg=118;
		if(y>-25&&y<=-15&&x>-16&&x<=-15) fg=119;
		if(y>-25&&y<=-15&&x>-15&&x<=-14) fg=120;
		if(y>-20&&y<=-15&&x>14&&x<=15) fg=121;
		if(y>-20&&y<=-15&&x>15&&x<=16) fg=122;
		if(y>-25&&y<=-20&&x>-21&&x<=-20) fg=123;
		if(y>-25&&y<=-20&&x>-20&&x<=-19) fg=124;
		if(y>-30&&y<=-20&&x>-6&&x<=-5) fg=125;
		if(y>-30&&y<=-20&&x>-5&&x<=-4) fg=126;
		if(y>-25&&y<=-20&&x>-1&&x<=0) fg=127;
		if(y>-25&&y<=-20&&x>0&&x<=1) fg=128;
		if(y>-25&&y<=-20&&x>19&&x<=20) fg=129;
		if(y>-25&&y<=-20&&x>20&&x<=21) fg=130;
		if(y>-30&&y<=-25&&x>4&&x<=5) fg=131;
		if(y>-30&&y<=-25&&x>5&&x<=6) fg=132;
		//the corner
		if(y>=4&&y<=5&&x>=-25&&x<=-24) fg=133;
		if(y>=-1&&y<=0&&x>=-20&&x<=-19) fg=134;
		if(y>=-10&&y<=-9&&x>=-15&&x<=-14) fg=135;
		if(y>=-16&&y<=-15&&x>=-15&&x<=-14) fg=136;
		if(y>=0&&y<=1&&x>=-10&&x<=-9) fg=137;
		if(y>=5&&y<=6&&x>=-5&&x<=-4) fg=138;
		if(y>=-30&&y<=-29&&x>=-5&&x<=-4) fg=139;
		if(y>=-6&&y<=-5&&x>=0&&x<=1) fg=140;
		if(y>=-21&&y<=-201&&x>=0&&x<=1) fg=141;
		if(y>=-30&&y<=-29&&x>=5&&x<=6) fg=142;
		if(y>=20&&y<=21&&x>=10&&x<=11) fg=143;
		if(y>=10&&y<=11&&x>=10&&x<=11) fg=144;
		if(y>=-25&&y<=-24&&x>=10&&x<=11) fg=145;
		if(y>=15&&y<=16&&x>=15&&x<=16) fg=146;
		if(y>=-1&&y<=0&&x>=15&&x<=16) fg=147;
		if(y>=24&&y<=25&&x>=20&&x<=21) fg=148;
		if(y>=10&&y<=11&&x>=20&&x<=21) fg=149;
		if(y>=-25&&y<=-24&&x>=20&&x<=21) fg=150;
		/*result*/
		switch(fg)
		{
			//normal
			case 0:
			break;
			//outer wall
			case 1:
			y = -29;
			break;
			case 2:
			y = 29;
			break;
			case 3:
			x = 29;
			break;
			case 4:
			x = -29;
			break;
			//wall
			case 5:
			y = -6;
			break;
			case 6:
			y = -4;
			break;
			case 7:
			y = 26;
			break;
			case 8:
			y = 24;
			break;
			case 9:
			y = 6;
			break;
			case 10:
			y = 4;
			break;
			case 11:
			y = -24;
			break;
			case 12:
			y = -26;
			break;
			case 13:
			y = 16;
			break;
			case 14:
			y = 14;
			break;
			case 15:
			y = 11;
			break;
			case 16:
			y = 9;
			break;
			case 17:
			y = 1;
			break;
			case 18:
			y = -1;
			break;
			case 19:
			y = -9;
			break;
			case 20:
			y = -11;
			break;
			case 21:
			y = -14;
			break;
			case 22:
			y = -16;
			break;
			case 23:
			y = -24;
			break;
			case 24:
			y = -26;
			break;
			case 25:
			y = 26;
			break;
			case 26:
			y = 24;
			break;
			case 27:
			y = 21;
			break;
			case 28:
			y = 19;
			break;
			case 29:
			y = 1;
			break;
			case 30:
			y = -1;
			break;
			case 31:
			y = -19;
			break;
			case 32:
			y = -21;
			break;
			case 33:
			y = 6;
			break;
			case 34:
			y = 4;
			break;
			case 35:
			y = -14;
			break;
			case 36:
			y = -16;
			break;
			case 37:
			y = 11;
			break;
			case 38:
			y = 9;
			break;
			case 39:
			y = -4;
			break;
			case 40:
			y = -6;
			break;
			case 41:
			y = -19;
			break;
			case 42:
			y = -21;
			break;
			case 43:
			y = 21;
			break;
			case 44:
			y = 19;
			break;
			case 45:
			y = 11;
			break;
			case 46:
			y = 9;
			break;
			case 47:
			y = 6;
			break;
			case 48:
			y = 4;
			break;
			case 49:
			y = 1;
			break;
			case 50:
			y = -1;
			break;
			case 51:
			y = -24;
			break;
			case 52:
			y = -26;
			break;
			case 53:
			y = 26;
			break;
			case 54:
			y = 24;
			break;
			case 55:
			y = 16;
			break;
			case 56:
			y = 14;
			break;
			case 57:
			y = -9;
			break;
			case 58:
			y = -11;
			break;
			case 59:
			y = 11;
			break;
			case 60:
			y = 9;
			break;
			case 61:
			y = -4;
			break;
			case 62:
			y = -6;
			break;
			case 63:
			y = -14;
			break;
			case 64:
			y = -16;
			break;
			case 65:
			y = -24;
			break;
			case 66:
			y = -26;
			break;
			case 67:
			y = -9;
			break;
			case 68:
			y = -11;
			break;
			case 69:
			y = -19;
			break;
			case 70:
			y = -21;
			break;
			
			case 71:
			x = -16;
			break;
			case 72:
			x = -14;
			break;
			case 73:
			x = -21;
			break;
			case 74:
			x = -19;
			break;
			case 75:
			x = 4;
			break;
			case 76:
			x = 6;
			break;
			case 77:
			x = 9;
			break;
			case 78:
			x = 11;
			break;
			case 79:
			x = 19;
			break;
			case 80:
			x = 21;
			break;
			case 81:
			x = -26;
			break;
			case 82:
			x = -24;
			break;
			case 83:
			x = 14;
			break;
			case 84:
			x = 16;
			break;
			case 85:
			x = 24;
			break;
			case 86:
			x = 26;
			break;
			case 87:
			x = -6;
			break;
			case 88:
			x = -4;
			break;
			case 89:
			x = 9;
			break;
			case 90:
			x = 11;
			break;
			case 91:
			x = 19;
			break;
			case 92:
			x = 21;
			break;
			case 93:
			x = -16;
			break;
			case 94:
			x = -14;
			break;
			case 95:
			x = -11;
			break;
			case 96:
			x = -9;
			break;
			case 97:
			x = 24;
			break;
			case 98:
			x = 26;
			break;
			case 99:
			x = -26;
			break;
			case 100:
			x = -24;
			break;
			case 101:
			x = -21;
			break;
			case 102:
			x = -19;
			break;
			case 103:
			x = 14;
			break;
			case 104:
			x = 16;
			break;
			case 105:
			x = -16;
			break;
			case 106:
			x = -14;
			break;
			case 107:
			x = -6;
			break;
			case 108:
			x = -4;
			break;
			case 109:
			x = -1;
			break;
			case 110:
			x = 1;
			break;
			case 111:
			x = 9;
			break;
			case 112:
			x = 11;
			break;
			case 113:
			x = -26;
			break;
			case 114:
			x = -24;
			break;
			case 115:
			x = -21;
			break;
			case 116:
			x = -19;
			break;
			case 117:
			x = 4;
			break;
			case 118:
			x = 6;
			break;
			case 119:
			x = -16;
			break;
			case 120:
			x = -14;
			break;
			case 121:
			x = 14;
			break;
			case 122:
			x = 16;
			break;
			case 123:
			x = -21;
			break;
			case 124:
			x = -19;
			break;
			case 125:
			x = -6;
			break;
			case 126:
			x = -4;
			break;
			case 127:
			x = -1;
			break;
			case 128:
			x = 1;
			break;
			case 129:
			x = 19;
			break;
			case 130:
			x = 21;
			break;
			case 131:
			x = 4;
			break;
			case 132:
			x = 5;
			break;
			//corner
			case 133:
			x = -24;
			y = 4;
			break;
			case 134:
			x = -19;
			y = -1;
			break;
			case 135:
			x = -14;
			y = -9;
			break;
			case 136:
			x = -14;
			y = -16;
			break;
			case 137:
			x = -9;
			y = 1;
			break;
			case 138:
			x = -4;
			y = 6;
			break;
			case 139:
			x = -4;
			y = -29;
			break;
			case 140:
			x = 1;
			y = -6;
			break;
			case 141:
			x = 1;
			y = -21;
			break;
			case 142:
			x = 6;
			y = -29;
			break;
			case 143:
			x = 11;
			y = 21;
			break;
			case 144:
			x = 11;
			y = 11;
			break;
			case 145:
			x = 11;
			y = -24;
			break;
			case 146:
			x = 16;
			y = 16;
			break;
			case 147:
			x = 16;
			y = -1;
			break;
			case 148:
			x = 21;
			y = 24;
			break;
			case 149:
			x = 21;
			y = 11;
			break;
			case 150:
			x = 21;
			y = -24;
			break;
			
			default:
			break;
		}
	/*'w''s''d''a'*/
	if(fg2==1) y = y + 0.02;
	if(fg2==2) y = y - 0.02;
	if(fg2==3) x = x + 0.02;
	if(fg2==4) x = x - 0.02;
	/**************/
	
	/*enemy1_motion*/
	if(flg1==0) 
	{
		y1=y1+0.04;
		if(y1>27.5) flg1=1;
	} 
	if(flg1==1)
	{
		y1=y1-0.04;
		if(y1<-27.5) flg1=0;
	}
	/**************/
	/*enemy2_motion*/
	if(flg2==0) 
	{
		x2=x2+0.04;
		if(x2>-7.5) flg2=1;
	} 
	if(flg2==1)
	{
		y2=y2+0.04;
		if(y2>-22.5) flg2=2;
	}
	if(flg2==2)
	{
		x2=x2-0.04;
		if(x2<-12.5) flg2=3;
	}
	if(flg2==3)
	{
		y2=y2+0.04;
		if(y2>-17.5) flg2=4;
	}
	if(flg2==4)
	{
		x2=x2+0.04;
		if(x2>-7.5) flg2=5;
	}
	if(flg2==5)
	{
		y2=y2+0.04;
		if(y2>-12.5) flg2=6;
	}
	if(flg2==6)
	{
		x2=x2-0.04;
		if(x2<-17.5) flg2=7;
	}
	if(flg2==7)
	{
		y2=y2-0.04;
		if(y2<-17.5) flg2=8;
	}
	if(flg2==8)
	{
		x2=x2-0.04;
		if(x2<-22.5) flg2=9;
	}
	if(flg2==9)
	{
		y2=y2+0.04;
		if(y2>-7.5) flg2=10;
	}
	if(flg2==10)
	{
		x2=x2-0.04;
		if(x2<-27.5) flg2=11;
	}
	if(flg2==11)
	{
		y2=y2-0.2;
		if(y2<-27.5) flg2=0;
	}
	/**************/
	/*enemy3_motion*/
	if(flg3==0) 
	{
		y3=y3-0.2;
		if(y3<-32.5) flg3=1;
	} 
	if(flg3==1)
	{
		x3=x3+0.2;
		if(x3>32.5) flg3=2;
	}
	if(flg3==2)
	{
		y3=y3+0.2;
		if(y3>32.5) flg3=3;
	}
	if(flg3==3)
	{
		x3=x3-0.2;
		if(x3<-32.5) flg3=0;
	}
	/**************/
	/*enemy4_motion*/
	if(flg4==0) 
	{
		x4=x4+0.01;
		if(x4>27.5) flg4=1;
	} 
	if(flg4==1)
	{
		x4=x4-0.01;
		if(x4<12.5) flg4=0;
	}
	/**************/
	/*enemy5_motion*/
	if(flg5==0) 
	{
		x5=x5-0.01;
		if(x5<12.5) flg5=1;
	} 
	if(flg5==1)
	{
		x5=x5+0.01;
		if(x5>27.5) flg5=0;
	}
	/**************/
	/*enemy6_motion*/
	if(flg6==0) 
	{
		y6=y6+0.2;
		if(y6>32.5) flg6=1;
	} 
	if(flg6==1)
	{
		x6=x6-0.2;
		if(x6<-32.5) flg6=2;
	}
	if(flg6==2)
	{
		y6=y6-0.2;
		if(y6<-32.5) flg6=3;
	}
	if(flg6==3)
	{
		x6=x6+0.2;
		if(x6>32.5) flg6=0;
	}
	/**************/
	/*enemy7_motion*/
	if(flg7==0) 
	{
		y7=y7-0.2;
		if(y7<-32.5) flg7=1;
	} 
	if(flg7==1)
	{
		x7=x7+0.2;
		if(x7>32.5) flg7=2;
	}
	if(flg7==2)
	{
		y7=y7+0.2;
		if(y7>32.5) flg7=3;
	}
	if(flg7==3)
	{
		x7=x7-0.2;
		if(x7<-32.5) flg7=0;
	}
	/**************/
	/*enemy8_motion*/
	if(flg8==0) 
	{
		x8=x8+0.03;
		if(x8>27.5) flg8=1;
	} 
	if(flg8==1)
	{
		x8=x8-0.03;
		if(x8<-7.5) flg8=0;
	}
	/**************/
	/*enemy9_motion*/
	if(flg9==0) 
	{
		y9=y9-0.02;
		if(y9<17.5) flg9=1;
	} 
	if(flg9==1)
	{
		x9=x9-0.02;
		if(x9<-12.5) flg9=2;
	}
	if(flg9==2)
	{
		y9=y9+0.02;
		if(y9>22.5) flg9=3;
	}
	if(flg9==3)
	{
		x9=x9+0.02;
		if(x9>2.5) flg9=0;
	}
	/**************/
	/*enemy10_motion*/
	if(flg10==0) 
	{
		y10=y10-0.04;
		if(y10<7.5) flg10=1;
	} 
	if(flg10==1)
	{
		x10=x10+0.01;
		if(x10>-22.5) flg10=2;
	}
	if(flg10==2)
	{
		y10=y10+0.04;
		if(y10>22.5) flg10=3;
	}
	if(flg10==3)
	{
		x10=x10-0.01;
		if(x10<-27.5) flg10=0;
	}
	/**************/
	/*enemy11_motion*/
	if(flg11==0) 
	{
		x11=x11+0.02;
		y11=y11-0.02;
		if(x11>25) flg11=1;
	} 
	if(flg11==1)
	{
		y11=y11+0.02;
		if(y11>25) flg11=2;
	}
	if(flg11==2)
	{
		x11=x11-0.02;
		y11=y11-0.02;
		if(x11<-25) flg11=3;
	}
	if(flg11==3)
	{
		y11=y11+0.02;
		if(y11>25) flg11=0;
	}
	/**************/
	/*enemy12_motion*/
	if(flg12==0) 
	{
		x12=x12+0.05;
		if(x12>12.5) flg12=1;
	} 
	if(flg12==1)
	{
		y12=y12-0.05;
		if(y12<22.5) flg12=2;
	}
	if(flg12==2)
	{
		x12=x12+0.05;
		if(x12>17.5) flg12=3;
	}
	if(flg12==3)
	{
		y12=y12-0.05;
		if(y12<17.5) flg12=4;
	}
	if(flg12==4)
	{
		x12=x12+0.05;
		if(x12>22.5) flg12=5;
	}
	if(flg12==5)
	{
		y12=y12-0.05;
		if(y12<12.5) flg12=6;
	}
	if(flg12==6)
	{
		x12=x12+0.05;
		if(x12>27.5) flg12=7;
	}
	if(flg12==7)
	{
		y12=y12-0.05;
		if(y12<2.5) flg12=8;
	}
	if(flg12==8)
	{
		x12=x12-0.02;
		if(x12<22.5) flg12=9;
	}
	if(flg12==9)
	{
		y12=y12+0.02;
		if(y12>7.5) flg12=10;
	}
	if(flg12==10)
	{
		x12=x12-0.02;
		if(x12<17.5) flg12=11;
	}
	if(flg12==11)
	{
		y12=y12+0.02;
		if(y12>12.5) flg12=12;
	}
	if(flg12==12)
	{
		x12=x12-0.02;
		if(x12<12.5) flg12=13;
	}
	if(flg12==13)
	{
		y12=y12+0.02;
		if(y12>17.5) flg12=14;
	}
	if(flg12==14)
	{
		x12=x12-0.02;
		if(x12<7.5) flg12=15;
	}
	if(flg12==15)
	{
		y12=y12+0.02;
		if(y12>27.5) flg12=0;
	}
	/**************/
	/*enemy13_motion*/
	if(flg13==0) 
	{
		x13=x13+0.1;
		if(x13>300) flg13=1;
	} 
	if(flg13==1)
	{
		y13=y13-0.1;
		if(y13<0) flg13=2;
	}
	if(flg13==2)
	{
		x13=x13-0.1;
		if(x13<-300) flg13=3;
	}
	if(flg13==3)
	{
		y13=y13-0.1;
		if(y13<-20) flg13=4;
	}
	if(flg13==4)
	{
		x13=x13+0.1;
		if(x13>300) flg13=5;
	}
	if(flg13==5)
	{
		y13=y13+0.1;
		if(y13>0) flg13=6;
	}
	if(flg13==6)
	{
		x13=x13-0.1;
		if(x13<-300) flg13=7;
	}
	if(flg13==7)
	{
		y13=y13+0.1;
		if(y13>20) flg13=0;
	}
	/**************/
	/*enemy14_motion*/
	if(flg14==0) 
	{
		y14=y14-0.02;
		if(y14<-7.5) flg14=1;
	} 
	if(flg14==1)
	{
		y14=y14+0.02;
		if(y14>27.5) flg14=2;
	}
	if(flg14==2)
	{
		x14=x14-0.02;
		if(x14<-12.5) flg14=3;
	}
	if(flg14==3)
	{
		x14=x14+0.02;
		if(x14>27.5) flg14=0;
	}
	/**************/
	
	/*enemy_conditions_collision*/
	if(fabs(x-x1)*fabs(x-x1)+fabs(y-y1)*fabs(y-y1)<9) flag1=1;
	if(fabs(x-x2)*fabs(x-x2)+fabs(y-y2)*fabs(y-y2)<9) flag1=1;
	if(fabs(x-x3)*fabs(x-x3)+fabs(y-y3)*fabs(y-y3)<9) flag1=1;
	if(fabs(x-x4)*fabs(x-x4)+fabs(y-y4)*fabs(y-y4)<9) flag1=1;
	if(fabs(x-x5)*fabs(x-x5)+fabs(y-y5)*fabs(y-y5)<9) flag1=1;
	if(fabs(x-x6)*fabs(x-x6)+fabs(y-y6)*fabs(y-y6)<9) flag1=1;
	if(fabs(x-x7)*fabs(x-x7)+fabs(y-y7)*fabs(y-y7)<9) flag1=1;
	if(fabs(x-x8)*fabs(x-x8)+fabs(y-y8)*fabs(y-y8)<9) flag1=1;
	if(fabs(x-x9)*fabs(x-x9)+fabs(y-y9)*fabs(y-y9)<9) flag1=1;
	if(fabs(x-x10)*fabs(x-x10)+fabs(y-y10)*fabs(y-y10)<9) flag1=1;
	if(fabs(x-x11)*fabs(x-x11)+fabs(y-y11)*fabs(y-y11)<36) flag1=1;
	if(fabs(x-x12)*fabs(x-x12)+fabs(y-y12)*fabs(y-y12)<9) flag1=1;
	if(fabs(x-x13)*fabs(x-x13)+fabs(y-y13)*fabs(y-y13)<49) flag1=1;
	if(fabs(x-x14)*fabs(x-x14)+fabs(y-y14)*fabs(y-y14)<9) flag1=1;
	/*****************************/
	if(flag1==1) 
	{
		printf("\n\n\t!!!!!GAME OVER!!!!!\n\n");
		exit(0);
	}
	/*****************************/
	
	/*** symbol_get ***/
	if(x>-28.5&&x<-26.5&&y>26.5&&y<28.5) sym1=1;
	if(x>-18.5&&x<-16.5&&y>-23.5&&y<-21.5) sym2=1;
	if(x>16.5&&x<18.5&&y>16.5&&y<18.5) sym3=1;
	if(x>21.5&&x<23.5&&y>-13.5&&y<-11.5) sym4=1;
	if(x>-3.5&&x<-1.5&&y>1.5&&y<3.5) sym5=1;
	/******************/
	if(sym1==1)
	{
		r1=0.0;
		g1=0.0;
		b1=1.0;
		sym1=2;
	}
	if(sym2==1)
	{
		r2=0.0;
		g2=0.0;
		b2=1.0;
		sym2=2;
	}
	if(sym3==1)
	{
		r3=0.0;
		g3=0.0;
		b3=1.0;
		sym3=2;
	}
	if(sym4==1)
	{
		r4=0.0;
		g4=0.0;
		b4=1.0;
		sym4=2;
	}
	if(sym5==1)
	{
		r5=0.0;
		g5=0.0;
		b5=1.0;
		sym5=2;
	}
	/******************/
	
	/*** GAME CREAR ***/
	if(sym1==2&&sym2==2&&sym3==2&&sym4==2&&sym5==2)
	{
		if(x>25&&x<30&&y>30&&y<35)
		{
			printf("\n\n\t!!!!!GAME CREAR!!!!!\n\n");
			exit(0);
		}
	}
	if(x>-40&&x<-30&&y>-40&&y<-30)
	{
		printf("\n\n\t!!!!!yattane!!!!!\n\n");
		exit(0);
	}
	/******************/
	
	glutPostRedisplay();
	
	fg=0;
	flag1=0;
}

void init(void)
{
  glClearColor(0.0, 0.0, 0.0, 1.0);
  glShadeModel(GL_FLAT);
}

void reshape(int w, int h)
{
  glViewport( 0, 0, w, h );
  glMatrixMode(GL_PROJECTION);
  glLoadIdentity();
  glOrtho(-50.0, 50.0, -50.0, 50.0, -1.0, 1.0);
  glMatrixMode(GL_MODELVIEW);
  glLoadIdentity();
}

void mouse(int button, int state, int x, int y){
  switch (button) 
  {
     case GLUT_LEFT_BUTTON:
     	if ( state == GLUT_DOWN)
     		glutIdleFunc(simu);
     	break;
     case GLUT_RIGHT_BUTTON:
		if ( state == GLUT_DOWN)
     		glutIdleFunc(NULL);
     	break; 
     default:
     	break; 
  }
}

void keyboard(unsigned char key ,int x, int y)
{
	if ( key == '\x1b') exit(0);
	if ( key == 'w') fg2 = 1;
	if ( key == 's') fg2 = 2;
	if ( key == 'd') fg2 = 3;
	if ( key == 'a') fg2 = 4;
}

int main(int argc, char *argv[])
{
  glutInit(&argc, argv);
  glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
  glutInitWindowSize (800, 800);
  glutInitWindowPosition(100,0);
  glutCreateWindow(argv[0]);
  init();
  glutReshapeFunc(reshape);
  glutKeyboardFunc(keyboard);
  glutMouseFunc(mouse);
  glutDisplayFunc(display);
  glutMainLoop();
  return 0;
}	
