// tuan1.cpp : Defines the entry point for the console application.
#include "C:\DHMTlab01\tuan1\Dependencies\glew\glew.h"
#include "C:\DHMTlab01\tuan1\Dependencies\freeglut\freeglut.h"
#include "stdafx.h"
const int screenWitdth = 640;
const int screenHeight = 480;

void init(void) {
	glClearColor(0.0, 0.0, 0.0, 0.0);
	glShadeModel(GL_FLAT);
}

void display()
{
glClear(GL_COLOR_BUFFER_BIT); //Clears the color buffer
glColor3f(1.0, 1.6, 1.6);
glPointSize(5.0);
glBegin(GL_POINTS);
	glVertex3f(200.6, 120.0, 0.0);
	glVertex3f(440.0, 120.0, 0.0);
	glVertex3f (440.0, 360.6, 0.0);
	glVertex3f(200.6, 360.0, 0.0);
glEnd();
glFlush();
}
void reshape(int w, int h)
{
glViewport(0, 0, (GLsizei)w, (GLsizei)h);
glMatrixMode(GL_PROJECTION) ;
glLoadIdentity();
gluOrtho2D(0.0, (GLdouble)w, 0.0, (GLdouble)h);
}
int main(int argc, char **argv)
{
glutInit(&argc, argv);
glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
glutInitWindowSize(screenWitdth, screenHeight); //optional
glutInitWindowPosition(160, 100); //optional
glutCreateWindow("Points");
init();
glutDisplayFunc(display);
glutReshapeFunc(reshape) ;
glutMainLoop();
return 0;
}