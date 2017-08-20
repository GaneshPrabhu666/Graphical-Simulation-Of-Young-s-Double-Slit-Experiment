#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<GL/glut.h>
#include<stdlib.h>
int f;
int i=0,j,k,l,m,n,o,p;
void*currentfont;
void keyboard(int,int,int);
void nextpage();
	void setFont(void *font)
	{
		 currentfont=font;
	}
	void drawstring(float x,float y,float z,char *string)
	{
		 char *c;
		 glRasterPos3f(x,y,z);
		 for(c=string;*c!='\0';c++)
	 	{
 			glColor3f(0.0,0.0,0.0);
  			glutBitmapCharacter(currentfont,*c);


		 }

	}
	void fmyInit(void)
	{

		//glClear(GL_COLOR_BUFFER_BIT);
		glClearColor(.6,.4,.6,1);//0.827,0.827,0.827,4.0
		glColor3f(0.0,0.0,0.0);
		glPointSize(4.0);
		glMatrixMode(GL_PROJECTION);
		glLoadIdentity();
		glOrtho(0.0,900.0,0.0,500.0,-10,10);
	}
	void ftext()
	{
		glutFullScreen();
		//glClear(GL_COLOR_BUFFER_BIT);
		setFont(GLUT_BITMAP_TIMES_ROMAN_24);
		glColor3f(1.000, 0.843, 0.000);
		drawstring(350.0,400.0,1.0,"YOUNG'S  DOUBLE SLIT EXPERIMENT");
		glColor3f(0.196, 0.804, 0.196);
		drawstring(250.0,50.0,1.0,"PRESS ENTER TO START SIMULATION");
		glColor3f(0.196, 0.804, 0.196);
		drawstring(170.0,180.0,1.0,"LIGHT SOURCE");
		glColor3f(0.196, 0.804, 0.196);
 		drawstring(300.0,250.0,1.0,"FIRST WALL ");

		glColor3f(0.196, 0.804, 0.196);
 		drawstring(395.0,354.0,1.0,"SECOND WALL");
		glColor3f(0.196, 0.804, 0.196);
 		drawstring(440.0,296.0,1.0,"SCREEN");
		glColor3f(1,1,0);
 		drawstring(530.0,296.0,1.0,"BRIGHT");
		//glColor3f(0.196, 0.804, 0.196);
	       //drawstring(600.0,290.0,1.0,"AND");
		glColor3f(0,0,0);
 		drawstring(650.0,285.0,1.0,"DARK");

		 glColor3f(0.196, 0.804, 0.196);
		 drawstring(450.0,150.0,1.0,"S1");

		glColor3f(0.196, 0.804, 0.196);
		drawstring(520.0,130.0,1.0,"S2");
		glFlush();

	}

	void fwall2()
	{
		glColor3f(0.0,0.0,0.0);
		  glLineWidth(1.0);


		//Screen
		glColor3f(1,1,0.2);
		glBegin(GL_POLYGON);
		glVertex2i(600,155);
		glVertex2i(765,120);
		glVertex2i(800,330);
		glVertex2i(500,350);
		glVertex2i(500,227);
		glVertex2i(600,200);
		glEnd();

		glColor3f(0.0,0.0,0.0);
		glBegin(GL_LINE_LOOP);
		glVertex2i(600,155);
		glVertex2i(765,120);
		glVertex2i(800,330);
		glVertex2i(500,350);
		glVertex2i(500,227);
		glVertex2i(600,200);
		glEnd();


		//Screen inside Wall2
		glColor3f(0.663, 0.663, 0.663);
		glBegin(GL_POLYGON);
		glVertex2i(603,100);
		glVertex2i(750,123);
		glVertex2i(780,300);
		glVertex2i(508,325);
		glVertex2i(508,208);
		glEnd();

		glColor3f(0.0,.0,.0);
		glBegin(GL_LINE_LOOP);
		glVertex2i(603,100);
		glVertex2i(750,123);
		glVertex2i(780,300);
		glVertex2i(508,325);
		glVertex2i(508,208);
		glEnd();

		glColor3f(0.0,.0,.0);
		glBegin(GL_LINES);
		glVertex2i(600,155);
		glVertex2i(765,120);
		glEnd();


		glFlush();
	}
	void fwall1()
	{
  		glLineWidth(1.0);
		glColor3f(1.000, 1, 0.25);

		//First Wall

		glBegin(GL_POLYGON);
		glVertex2i(400,150);
		glVertex2i(400,250);

		glVertex2i(600,200);
		glVertex2i(600,100);
		glEnd();

		glColor3f(0.0,0.0,0.0);

		glBegin(GL_LINE_LOOP);
		glVertex2i(400,150);
		glVertex2i(400,250);

		glVertex2i(600,200);
		glVertex2i(600,100);
		glEnd();
		//Wall border 1

		glBegin(GL_POLYGON);
		glVertex2i(600,200);
		glVertex2i(600,100);
		glVertex2i(603,100);

		glVertex2i(603,200);
		glEnd();



		glBegin(GL_LINE_LOOP);
		glVertex2i(600,200);
		glVertex2i(600,100);
		glVertex2i(603,100);

		glVertex2i(603,200);
		glEnd();
		//Top Border
		glBegin(GL_POLYGON);
		glVertex2i(400,250);
		glVertex2i(400,253);
		glVertex2i(603,200);

		glVertex2i(603,203);
		glEnd();
		glBegin(GL_LINE_LOOP);
		glVertex2i(400,250);
		glVertex2i(400,253);
		glVertex2i(603,200);

		glVertex2i(603,203);
		glEnd();
		//First Slit
		glColor3f(1.0,1.0,1.0);
		glBegin(GL_POLYGON);
		glVertex2i(450,173);
		glVertex2i(450,213);

		glVertex2i(455,205);
		glVertex2i(455,165);
		glEnd();

		glColor3f(0.0,0.0,0.0);
		glBegin(GL_LINE_LOOP);
		glVertex2i(450,173);
		glVertex2i(450,213);

		glVertex2i(455,205);
		glVertex2i(455,165);
		glEnd();


		//Second Slit

		glColor3f(1.0,1.0,1.0);
		glBegin(GL_POLYGON);
		glVertex2i(540,150);
		glVertex2i(540,190);

		glVertex2i(545,185);
		glVertex2i(545,145);
		glEnd();

		glColor3f(0.0,0.0,0.0);
		glBegin(GL_LINE_LOOP);
		glVertex2i(540,150);
		glVertex2i(540,190);
		glVertex2i(545,185);
		glVertex2i(545,145);
		glEnd();
	}
	void fray()
	{
		float j=0;
		glColor3f(1.0,1.0,0.0);
 		glLineWidth(2.0);

		glBegin(GL_LINES);
		for(int i=0;i<209;i+=10){

		//glVertex2i(243,165);
	        glVertex2i(243+i,165+j);
  		j+=0.5;
	}
		glEnd();

		glBegin(GL_LINES);
		for(int  i=0;i<312;i+=10){
		glVertex2i(243+i,150+j);
		j-=0.1;
	}

		glEnd();
	}
	void flamp()
	{
		glPushMatrix();
		glColor3f(1,1,0);
		glTranslated(230,160,0);
		glutSolidSphere(10,50,50);
		glPopMatrix();
	}
	void fringes()
	{
		//BRIGHT FRINGES
		glColor3f(1,1,0);
		glBegin(GL_POLYGON);
		glVertex2i(745,258);
		glVertex2i(720,261);
		glVertex2i(720,132);
		glVertex2i(745,127);
		glBegin(GL_POLYGON);
		glVertex2i(670,266);
		glVertex2i(670,142);
		glVertex2i(695,137);
		glVertex2i(695,264);
		glEnd();
		glBegin(GL_POLYGON);
		glVertex2i(620,273);
		glVertex2i(620,152);
		glVertex2i(645,147);
		glVertex2i(645,269);
		glEnd();
		glBegin(GL_POLYGON);
		glVertex2i(570,279);
		glVertex2i(570,160);
		glVertex2i(595,157);
		glVertex2i(595,276);
		glEnd();
		glBegin(GL_POLYGON);
		glVertex2i(520,285);
		glVertex2i(520,166);
		glVertex2i(545,163);
		glVertex2i(545,282);
		glEnd();
		//DARK FRINGES
		glColor3f(0.412, 0.412, 0.412);
		glBegin(GL_POLYGON);
		glVertex2i(720,261);
		glVertex2i(720,131);
		glVertex2i(695,137);
		glVertex2i(695,264);
		glEnd();
		glBegin(GL_POLYGON);
		glVertex2i(670,266);
		glVertex2i(670,142);
		glVertex2i(645,147);
		glVertex2i(645,269);
			glEnd();
		glBegin(GL_POLYGON);
		glVertex2i(620,273);
		glVertex2i(620,152);
		glVertex2i(595,157);
		glVertex2i(595,276);
		glEnd();

		glBegin(GL_POLYGON);
		glVertex2i(570,279);
		glVertex2i(570,160);
		glVertex2i(545,163);
		glVertex2i(545,282);
		glEnd();
	}
	void fdisplay()
	{
		fmyInit();
		glClear(GL_COLOR_BUFFER_BIT);

		fwall2();
		fringes();
		fwall1();
		flamp();
		fray();
		ftext();
		glFlush();

	}

	void text()
	{
		glutFullScreen();
		glClear(GL_COLOR_BUFFER_BIT);
		setFont(GLUT_BITMAP_TIMES_ROMAN_24);
		glColor3f(0.529, 0.808, 0.922);
		drawstring(100.0,455.0,1.0,"******* * * * * * * * * * INTRODUCTION * * * * * * * * * *********");
		setFont(GLUT_BITMAP_TIMES_ROMAN_24);
		glColor3f(0.0,0.0,1.0);
		drawstring(160.0,430.0,1.0,"PESIT BANGLORE SOUTH CAMPUS");
		 glColor3f(0.0,0.0,1.0);
		 drawstring(100.0,400.0,1.0,"DEPARTMENT OF COMPUTER SCIENCE AND ENGINEERING");
		 glColor3f(0.863, 0.078, 0.235);
		 drawstring(190.0,360.0,1.0,"A MINI PROJECT ON");
		 glColor3f(1.000, 0.843, 0.000);
		 drawstring(120.0,330.0,1.0,"YOUNG'S  DOUBLE-SLIT  EXPERIMENT SIMULATION");
		glColor3f(0.678, 1.000, 0.184);
		 drawstring(120.0,250.0,1.0,"BY");
		 glColor3f(0.502, 0.000, 0.502);
 		drawstring(120.0,230.0,1.0,"1.G SHARATH                                1PE14CS039");
 		 glColor3f(0.502, 0.000, 0.502);
 		drawstring(120.0,210.0,1.0,"2.GANESH ASHOK PRABHU      1PE14CS040");
 		glColor3f(0.95,0.15,0.0);
 		drawstring(120.0,150.0,1.0,"UNDER THE GUIDANCE OF");
 		glColor3f(0.502, 0.502, 0.000);
 		drawstring(120.0,130.0,1.0,"1.Ms.Shubha Raj");
 		glColor3f(0.502, 0.502, 0.000);
 		drawstring(120.0,110.0,1.0,"2.Dr.Sarasvathi");
		glColor3f(0.196, 0.804, 0.196);
		 drawstring(200.0,50.0,1.0,"PRESS ENTER TO START");


		glFlush();

		}
	void text4()
	{
		glColor3f(0.196, 0.804, 0.196);
 		drawstring(300.0,50.0,1.0,"PRESS ENTER TO START");

		glFlush();



	}

	void text2()
	{

		//glClear(GL_COLOR_BUFFER_BIT);
		glColor3f(0,0,0);
		 drawstring(300.0,50.0,1.0,"PRESS ENTER TO START");
		 glColor3f(0.196, 0.804, 0.196);
		drawstring(700.0,40.0,1.0,"ENTER ESC TO EXIT");

		glColor3f(0.196, 0.804, 0.196);
		 drawstring(60.0,280.0,1.0,"LIGHT SOURCE");

		glColor3f(0.196, 0.804, 0.196);
	       drawstring(295.0,280.0,1.0,"S1");
	 	glColor3f(0.196, 0.804, 0.196);
		drawstring(470.0,330.0,1.0,"S2");
		 glColor3f(0.196, 0.804, 0.196);
		 drawstring(470.0,190.0,1.0,"S3");
		 glColor3f(0.196, 0.804, 0.196);
		 drawstring(630.0,100.0,1.0,"SCREEN");


		glFlush();

		}
	void text3()
	{


		glColor3f(1,1,0);
		drawstring(725.0,325.0,1.0,"BRIGHT");
		  glColor3f(0.412, 0.412, 0.412);
		 drawstring(725.0,300.0,1.0,"DARK");
		glFlush();


	}
	void myInit(void)
	{
		glClear(GL_COLOR_BUFFER_BIT );
		glClearColor( 0,0,0,1);
		glColor3f(0.0,0.0,0.0);
		glPointSize(4.0);
		glMatrixMode(GL_PROJECTION);
		glLoadIdentity();
		gluOrtho2D(0.0,900.0,0.0,500.0);

	}
	void slit()
	{
		text4();


		glColor3f( 	1.000, 1.000, 0);
		glPointSize(20.0);
		glBegin(GL_POINTS);
		glVertex2i(90,255);
		glEnd();
		//first slit
		glColor3f(0.196, 0.804, 0.196);
		glBegin(GL_POLYGON);
		glVertex2i(280,150);
		glVertex2i(280,250);
		glVertex2i(288,250);
		glVertex2i(288,150);
		glEnd();

		glBegin(GL_POLYGON);
		glVertex2i(280,260);
		glVertex2i(280,360);
		glVertex2i(288,360);
		glVertex2i(288,260);
		glEnd();
		//second slit
		glBegin(GL_POLYGON);
		glVertex2i(450,120);
		glVertex2i(450,220);
		glVertex2i(458,220);
		glVertex2i(458,120);
		glEnd();



		glBegin(GL_POLYGON);
		glVertex2i(450,230);
		glVertex2i(450,300);
		glVertex2i(458,300);
		glVertex2i(458,230);
		glEnd();

		glBegin(GL_POLYGON);
		glVertex2i(450,310);
		glVertex2i(450,410);
		glVertex2i(458,410);
		glVertex2i(458,310);
		glEnd();


		}
	void screen()
	{

		glColor3f(0.663, 0.663, 0.663);
		glBegin(GL_POLYGON);
		glVertex2i(620,120);
		glVertex2i(620,410);
		glVertex2i(720,410);
		glVertex2i(720,120);

		glEnd();


		glColor3f(0.412, 0.412, 0.412);
		glBegin(GL_POLYGON);
		glVertex2i(710,120);
		glVertex2i(710,410);
		glVertex2i(720,410);
		glVertex2i(720,120);

		glEnd();


	}
	void light1()
	{


		glColor3f( 	1.000, 1.000, 0.7);
		glBegin(GL_TRIANGLES);
		glVertex2i(100,255);
		glVertex2i(178+i,280+j);
		glVertex2i(178+i,230-j);
		glEnd();
		glutSwapBuffers();

	}
	void delay1()
	{
		light1();

		if(i<=100){
		glutTimerFunc(40,delay1,1);
		i+=2;
		j++;}



	}



	void light2()
	{
		glColor3f(1.000, 1.000, 0.7);
		glBegin(GL_TRIANGLES);
		glVertex2i(284,255);
		glVertex2i(334+k,282+l);
		glVertex2i(334+k,228-l);
		glEnd();
		glutSwapBuffers();
	}
	void delay2()
	{

		light2();

		if(k<=114){

		glutTimerFunc(40,delay2,1);
		k+=2;
		l++;
	}

       }
	void light3()
	{
            text2();

		glColor3f( 	1.000, 1.000, 0.7);
		glBegin(GL_TRIANGLES);
		glVertex2i(454,305);
		glVertex2i(502+o,274+p);
		glVertex2i(502+o,258-p);
		glEnd();
		glutSwapBuffers();
		glBegin(GL_TRIANGLES);
		glVertex2i(454,225);
		glVertex2i(502+o,248-p);
		glVertex2i(502+o,252+p);
		glEnd();
		glutSwapBuffers();
	}


	void bands()
	{
		//LIGHT BANDS
		glColor3f(1.000, 1.000, 0);
		glBegin(GL_QUADS);
		glVertex2i(620,320);
		glVertex2i(620,350);
		glVertex2i(710,350);
		glVertex2i(710,320);
		glEnd();
		glColor3f(1.000, 1.000, 0);
		glBegin(GL_POLYGON);
		glVertex2i(620,260);
		glVertex2i(620,290);
		glVertex2i(710,290);
		glVertex2i(710,260);
		glEnd();

		glBegin(GL_QUADS);
		glVertex2i(620,230);
		glVertex2i(620,200);
		glVertex2i(710,200);
		glVertex2i(710,230);
		glEnd();
		glutSwapBuffers();

		glBegin(GL_QUADS);
		glVertex2i(620,230);
		glVertex2i(620,200);
		glVertex2i(710,200);
		glVertex2i(710,230);
		glEnd();
		glutSwapBuffers();

		//DARK BANDS

		glColor3f(0.184, 0.310, 0.310);
		glBegin(GL_QUADS);
		glVertex2i(620,350);
		glVertex2i(620,380);
		glVertex2i(710,380);
		glVertex2i(710,350);
		glEnd();
		glutSwapBuffers();

		glColor3f(0.184, 0.310, 0.310);
		glBegin(GL_QUADS);
		glVertex2i(620,290);
		glVertex2i(620,320);
		glVertex2i(710,320);
		glVertex2i(710,290);
		glEnd();
		glutSwapBuffers();

		glColor3f(0.184, 0.310, 0.310);
		glBegin(GL_QUADS);
		glVertex2i(620,260);
		glVertex2i(620,230);
		glVertex2i(710,230);
		glVertex2i(710,260);
		glEnd();
		glBegin(GL_QUADS);
		glVertex2i(620,170);
		glVertex2i(620,200);
		glVertex2i(710,200);
		glVertex2i(710,170);

		glEnd();
		glutSwapBuffers();




	}

	void light4()
	{
		glColor3f( 	1.000, 1.000, 0.15);
		glBegin(GL_TRIANGLES);//INTERFERENCE REGION
		glVertex2i(495,263);
		glVertex2i(620,350);
		glVertex2i(620,170);
		glEnd();
		glutSwapBuffers();
		bands();
		glFlush();
		glutSwapBuffers();
		text3();
		glFlush();
		glutSwapBuffers();
	}
	void delay3()
	{
		int k=0;

		light3();


		if(o<=117)
		{
			glutTimerFunc(40,delay3,1);
			o++;
			p++;
		}
		else if(k<12) {
				k++;
				//glutPostRedisplay();
				light4();
				//glFlush();
				}}

		void display(void)
		{
			glClear(GL_COLOR_BUFFER_BIT);
			slit();
			screen();
			glutFullScreen();
			glFlush();
		}
		void mydisplay()
		{
			if(f==0)
			text();
			//lClear(GL_COLOR_BUFFER_BIT);
			if(f==1)
			fdisplay();
			if(f==2)
			{
				myInit();
				display();
				text2();
				text4();
			}
			if(f==3)
			{
			   text2();

				glutTimerFunc(10,delay1,0);
                 text4();

			}

			else if(f==4)
			{

			glutTimerFunc(10,delay2,0);
			}
			else if(f==5)
			{

			glutTimerFunc(10,delay3,0);
			}

		}

		void NormalKey(GLubyte key, GLint x, GLint y)
		{

			switch ( key )
		{
			case  13 :
		        f++;
		        mydisplay();
		        break;

			case 27 :
		         exit(0);


		}
		}


		void main(int argc, char** argv)
		{
			glutInit(&argc,argv);
			glutInitDisplayMode(GLUT_SINGLE| GLUT_RGB);
			glutInitWindowSize(800,800);
			glutInitWindowPosition(100,150);
			glutCreateWindow("MY PROJECT");
			myInit();

			system("play 6.wav&>/dev/null&");
			glutDisplayFunc(text);
			glutKeyboardFunc(NormalKey);
			glutMainLoop();

		}
