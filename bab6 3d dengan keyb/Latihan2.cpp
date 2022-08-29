#include <windows.h>
#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include <gl\glut.h>
#include <gl\glu.h>
#include <stdlib.h>

float w=480,h=480;
float sudut=0,sx=0,sy=0,sz=0;
void sphere() {
	glColor3d(1,1,1); 
	glutWireSphere(100,150,150);
}

void display(){
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFER_BIT);
	glLoadIdentity();
	glTranslatef(0,0,z);
	glRotatef(sudut,sx,sy,sz);
	sphere();
	glutSwapBuffers();
}

void resize(int w1,int h1){
	glViewport(0,0,w1,h1);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(45.0(float) w1/(float) h1,1.0,300.0);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity():
}

void init(){
	glClearColor(0.0,0.0,0.0,1.0);
	glEnable(GL_DEPTH_TEST);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(45.,(GLdouble)w/(GLdouble)h,1.,300.);
	glMatrixMode(GL_MODELVIEW);
}

void myKeyboard(unsigned char key, int x, int y){
	if(key=='y'){
		sy=1;
		
		sudut+=10;
	} 
	}

void update(int value){
	glutPostRedisplay();
	glutTimeFunc(50,update,0);
}

int main(int argc, char **argv){
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH | GLUT_RGBA);
	glutInitWindowPosition(100,100);
	glutInitWindowSize(w,h);
	glutCreateWindow("Objek 3D");
	glutDisplayFunc(display);
	glutReshapeFunc(resize);
	init();
	glutTimerFunc(50,update,0);
	glutKeyboardFunc(myKeyboard);
	glutMainLoop();
}
