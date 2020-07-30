// tuan1.cpp : Defines the entry point for the console application.
#include "C:\DHMTlab01\tuan1\Dependencies\glew\glew.h"
#include "C:\DHMTlab01\tuan1\Dependencies\freeglut\freeglut.h"

const int screenWitdth = 640;
const int screenHeight = 480;

void init(void) {
	glClearColor(0.0, 0.0, 0.0, 0.0);

}

void drawRetangle(GLint x, GLint y, GLint width, GLint height) {
	glBegin(GL_POLYGON);

	glColor3f(1.0f, 0.0f, 1.0f);
	glVertex2i(x, y);
	glColor3f(0.0f,	1.0f, 1.0f);
	glVertex2i(x + width, y);
	glColor3f(1.0f, 1.0f, 0.0f);
	glVertex2i(x + width, y + height);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2i(x, y + height);

	glEnd();
}
void display()
{
	glClear(GL_COLOR_BUFFER_BIT); //Clears the color buffer
	GLint w = 400, h = 200;
	GLint x = (screenWitdth - w) / 2;
	GLint y = (screenHeight - h) / 2;
	drawRetangle(x, y, w, h);

	glFlush();
}
void reshape(int w, int h)
{
	glViewport(0, 0, (GLsizei)w, (GLsizei)h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0, (GLdouble)w, 0.0, (GLdouble)h);
}
int main(int argc, char **argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
	glutInitWindowSize(screenWitdth, screenHeight); //optional
	glutInitWindowPosition(100, 100); //optional
	glutCreateWindow(argv[0]);
	init();
	glutDisplayFunc(display);
	glutReshapeFunc(reshape);
	glutMainLoop();
	return 0;
}
