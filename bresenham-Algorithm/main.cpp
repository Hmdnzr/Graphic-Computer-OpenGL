#include <GL/freeglut.h>
#include <GL/glut.h>
#include <iostream>


void init();
void display(void);
void bresenham();

int window_x;
int window_y;

int window_width = 400;
int window_height = 500;

int main (int argc,char** argv){
	glutInit(&argc, argv);
	int window_x = (glutGet(GLUT_SCREEN_WIDTH)-window_width)/2;
	int window_y = (glutGet(GLUT_SCREEN_HEIGHT)-window_height)/2;
	glutInitWindowSize(window_width, window_height);
	glutInitWindowPosition(window_x, window_y);
	glutInitDisplayMode(GLUT_RGBA | GLUT_DOUBLE);
	glutCreateWindow("Implementasi Algorithm bresenham");
	init();
	glutDisplayFunc(display);
	glutMainLoop();
}
void init () {
	glClearColor(1, 1, 1,1);
	glColor3f(0.18, 0.32, 0.96);
	glPointSize(5.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(120,160,90,130);
}
void display(){
	glClear(GL_COLOR_BUFFER_BIT);
	bresenham();
	glutSwapBuffers();
	
}


void bresenham(){
	int x1,y1,x2,y2,x,y,dx,dy,increment,p,p1,p2;
	
	//Nilai batas akhir dan awal
	x1=11;
	y1=14;
	x2=22;
	y2=24;
	
	//perhitungan Rumus dx&dy
	dx=abs(x2-x1);
	dy=abs(y2-y1);
	
	
	//perhitungan P
	p=2*dy-dx;
	p1=2*dy;
	p2=2*(dy-dx);
	
	//perhitungan titik awal sampai akhir
	if(x1>x2){
		x=x2;
		y=y2;
		increment=x1;
	}
	else {
		x=x1;
		y=y1;
		increment=x2;
		
	}
	
	glBegin(GL_POINTS);
	glVertex2i(x,y);
	
	while(x<increment){
		x++;
		if(p<0){
			p+=p2;
			
		}
		glVertex2i(x,y);
	}
	glEnd();
	glFlush();
}



