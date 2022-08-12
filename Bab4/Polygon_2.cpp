#include <windows.h> // Import library 
#include <string.h> // -
#include <stdarg.h> //-
#include <gl\glut.h>//-
#include <gl\glu.h>//-
#include <stdlib.h> // import library 

void mydisplay (){ // mendeklarasikan method untuk di eksekusi dengan nama mydisplay
	glClear(GL_COLOR_BUFFER_BIT);
	
	glBegin(GL_POLYGON); //polygon dasar dari soal
	glColor3f(0.85, 0.15, 0.15); //warna merah
	glVertex2f(-0.5,-0.5); //Titik A
	glColor3f(0.85, 0.15, 0.15);
	glVertex2f(-0.75,0); //Titik B
	glColor3f(0.32, 0.06, 0.34); glVertex2f(-0.5,0.5); //Titik C
	glColor3f(0,6,0); glVertex2f(0,0.75);	//Titik D
	glColor3f(0.85, 0.15, 0.15); glVertex2f(0.5,0.5); //Titik E
	glColor3f(0.95, 1, 0.27); glVertex2f(0.75,0); //Titik F
	glColor3f(0,6,0); glVertex2f(0.5,-0.5); //Titik G
	glColor3f(0.95, 1, 0.27); glVertex2f(0,-0.75); //Titik H
	glEnd(); // untuk mengakhiri program
	
	glFlush();} //fungsi untuk memastikan program dapat dijalankan 
	
	int main(int argc,char**argv){
		glutInit(&argc,argv); // untuk memproses tiap line yg memakai library GLUT
		glutCreateWindow("Polygon_209");// membuat judul dalam dengan nama polygoon_209
		glutInitWindowSize(500,500); // membuat windows dengan ukuran 500x500 px
		glutDisplayFunc(mydisplay); // memanggil method dengan nama mydisplay untuk di eksekusi
		glutMainLoop();	// glut utama akan di panggil terus menerus atau looping
		} 

