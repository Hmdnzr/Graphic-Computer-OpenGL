#include <windows.h> // Import library 
#include <string.h> // -
#include <stdarg.h> //-
#include <gl\glut.h>//-
#include <gl\glu.h>//-
#include <stdlib.h> // import library 

// Latihan 1


void cube (void){ // mendeklarasikan method untuk di eksekusi dengan nama mydisplay
	
	
	
	glColor3f(1,0,0); //warna rusuk kubusnya merah
	glBegin(GL_POLYGON); //polygon dasar dari soal
	glutWireCube(2); //menggambar kubus dengan panjang 2 
	}
	void display () {
	glClearColor(0,0,0,1);
	glClear(GL_COLOR_BUFFER_BIT);
	glLoadIdentity();
	gluLookAt(0,0,5,0,0,0,0,1,0);
	cube();
	glEnd();
	
	glBegin(GL_POLYGON); //Tambahan persegi panjang
	glColor3f(0.92, 0.2, 0.67); //warna objek Merah maroon
	glVertex2f(-0.4,.67); //Titik M
	glVertex2f(0.4,0.67); //Titik N
	glVertex2f(0.4,-0.7); //Titik O
	glVertex2f(-0.4,-0.7); //Titik P
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
	glVertex2f(0,0.6); glColor3f(0.27, 1, 0.96); //Titik I  dengan warna hijau tosca
	glVertex2f(-0.6,0); glColor3f(0.92, 0.2, 0.67);//Titik J dengan  warna merah maroon
	glVertex2f(0,-0.6); glColor3f(0.27, 0.27, 1);//Titik K dengan warna biru
	glVertex2f(0.6,0); glColor3f(0.95, 1, 0.27);//Titik L IKdengan warna  kuning
	glEnd(); // untuk mengakhiri 
	
	glFlush(); //fungsi untuk memastikan program dapat dijalankan 
	}
	
	void reshape (int w, int h) {
		glViewport(0,0,(GLsizei)w,(GLsizei)h);
		glMatrixMode(GL_PROJECTION);
		glLoadIdentity();
		gluPerspective(60,(GLfloat)w/(GLfloat)h,1,100);
		glMatrixMode(GL_MODELVIEW);
	}
	
	int main(int argc,char**argv){
		glutInit(&argc,argv); // untuk memproses tiap line yg memakai library GLUT
		glutInitDisplayMode(GLUT_SINGLE);
		glutCreateWindow("A basic OpenGL Window");// membuat judul dalam dengan nama polygoon_209
		glutInitWindowSize(500,500); // membuat windows dengan ukuran 500x500 px
		glutInitWindowPosition(100,100);
		glutDisplayFunc(display); // memanggil method dengan nama mydisplay untuk di eksekusi
		glutReshapeFunc(reshape);
		glutMainLoop();	// glut utama akan di panggil terus menerus atau looping
		return 0;
		} 

