#include <windows.h> // Import library 
#include <string.h> // -
#include <stdarg.h> //-
#include <gl\glut.h>//-
#include <gl\glu.h>//-
#include <stdlib.h> // import library 

void mydisplay (){ // mendeklarasikan method untuk di eksekusi dengan nama mydisplay
	glClear(GL_COLOR_BUFFER_BIT);
	
	glBegin(GL_POLYGON); //polygon dasar dari soal
	glColor3f(0.85, 0.15, 0.15); 
	glVertex2f(-0.5,-0.5); 
	glVertex2f(-0.5,0.5); 
	glVertex2f(0.5,0.5); 
	glVertex2f(0.5,-0.5); 
	glFlush(); }
	
	void resize(int w, int h) {
		if (2>= h)
		glViewport(0, 0, (GLsizei)h,(GLsizei)h);
		else 
		glViewport(0, 0, (GLsizei)w,(GLsizei)w);
	
	
	int main(int argc,char**argv){
		glutInit(&argc,argv); // untuk memproses tiap line yg memakai library GLUT
		glutCreateWindow("Polygon_209");// membuat judul dalam dengan nama polygoon_209
		glutInitWindowSize(500,500); // membuat windows dengan ukuran 500x500 px
		glutDisplayFunc(mydisplay); // memanggil method dengan nama mydisplay untuk di eksekusi
		glutMainLoop();	// glut utama akan di panggil terus menerus atau looping
		} 

