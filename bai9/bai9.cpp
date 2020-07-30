#include "C:\DHMTlab01\tuan1\Dependencies\glew\glew.h"
#include "C:\DHMTlab01\tuan1\Dependencies\freeglut\freeglut.h"

const int screenWidth = 640;
const int screenHeight = 480;

void init(void)
{
	//glClearColor(@.6, 0.0, @.0, @.0); //clear black
	glClearColor(1.0, 1.0, 1.0, 1.0); //clear white
	glShadeModel(GL_FLAT);
}
void display()
{
	glClear(GL_COLOR_BUFFER_BIT);
	// Clears the color buffer
	//glColor3#(1.0, 1.0, 1.0); // white
	glColor3f(0.0, 0.0, 0.0); // black
	glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
	glBegin(GL_TRIANGLE_STRIP);
	glVertex2i(50, 50); //ve
	glVertex2i(100,150); //v2
	glVertex2i(200, 50); //v1
	
	glVertex2i(350, 250); //v3
	glVertex2i(300, 100); //v4
	glVertex2i(450, 150); //v5
	glEnd();
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
	glutInitWindowSize(screenWidth, screenHeight); //optional
	glutInitWindowPosition(100, 100); //optional
	glutCreateWindow(argv[0]);
	init();
	glutDisplayFunc(display);
	glutReshapeFunc(reshape);
	glutMainLoop();
	return 0;
}
