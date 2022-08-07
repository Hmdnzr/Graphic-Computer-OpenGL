#include <windows.h> // Import library 
#include <string.h> // -
#include <stdarg.h> //-
#include <gl\glut.h>//-
#include <gl\glu.h>//-
#include <stdlib.h> // import library 

void mydisplay (){ // mendeklarasikan method untuk di eksekusi dengan nama mydisplay
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_POLYGON); //Tambahan persegi panjang
	glColor3f(0.92, 0.2, 0.67); //warna objek Merah maroon
	glVertex2f(-0.4,.67); //Titik I
	glVertex2f(0.4,0.67); //Titik J
	glVertex2f(0.4,-0.7); //Titik I
	glVertex2f(-0.4,-0.7); //Titik I
	glEnd(); // untuk mengakhiri program
	
	glBegin(GL_POLYGON); //polygon dasar dari soal
	glColor3f(0,1,0); //warna hijau
	glVertex2f(-0.5,-0.5); //Titik A
	glVertex2f(-0.75,0); //Titik B
	glVertex2f(-0.5,0.5); //Titik C
	glVertex2f(0,0.75);	//Titik D
	glVertex2f(0.5,0.5); //Titik E
	glVertex2f(0.75,0); //Titik F
	glVertex2f(0.5,-0.5); //Titik G
	glVertex2f(0,-0.75); //Titik H
	glEnd(); // untuk mengakhiri program
	
	glBegin(GL_POLYGON); // polygon persegi dengan gradasi warna warnidi dalam polygon warna hijau
	glColor3f(0.92, 0.88, 0.02);
	glVertex2f(0,0.6); glColor3f(0.27, 1, 0.96); //Titik N  dengan warna hijau tosca
	glVertex2f(-0.6,0); glColor3f(0.92, 0.2, 0.67);//Titik J dengan  warna merah maroon
	glVertex2f(0,-0.6); glColor3f(0.27, 0.27, 1);//Titik I dengan warna biru
	glVertex2f(0.6,0); glColor3f(0.95, 1, 0.27);//Titik I dengan warna  kuning
	glEnd(); // untuk mengakhiri program
	glFlush();} //fungsi untuk memastikan program dapat dijalankan 
	
	int main(int argc,char**argv){
		glutInit(&argc,argv); // untuk memproses tiap line yg memakai library GLUT
		glutCreateWindow("Polygon_209");// membuat judul dalam dengan nama polygoon_209
		glutInitWindowSize(500,500); // membuat windows dengan ukuran 500x500 px
		glutDisplayFunc(mydisplay); // memanggil method dengan nama mydisplay untuk di eksekusi
		glutMainLoop();	// glut utama akan di panggil terus menerus atau looping
		} 

