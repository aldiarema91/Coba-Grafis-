/*
 * GLUT Shapes Demo
 *
 * Written by Nigel Stewart November 2003
 *
 * This program is test harness for the sphere, cone
 * and torus shapes in GLUT.
 *
 * Spinning wireframe and smooth shaded shapes are
 * displayed until the ESC or q key is pressed.  The
 * number of geometry stacks and slices can be adjusted
 * using the + and - keys.
 */

#include <windows.h>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include <stdlib.h>
void kotak(float awal)
{
	 glBegin(GL_LINES);
      glVertex2f(awal, awal);
      glVertex2f(awal, (awal+0.2));

      glVertex2f(awal, (awal+0.2));
      glVertex2f((awal+0.2), (awal+0.2));


      glVertex2f((awal+0.2), (awal+0.2));
      glVertex2f((awal+0.2), (awal));


      glVertex2f((awal+0.2), (awal));
      glVertex2f((awal), (awal));

  glEnd();
}

void kotak1(float awal)
{
	 glBegin(GL_LINE_STRIP);
      glVertex2f(awal, awal);
      glVertex2f(awal, (awal+0.2));

      glVertex2f(awal, (awal+0.2));
      glVertex2f((awal+0.2), (awal+0.2));


      glVertex2f((awal+0.2), (awal+0.2));
      glVertex2f((awal+0.2), (awal));


      glVertex2f((awal+0.2), (awal));
      glVertex2f((awal), (awal));

  glEnd();
}

void kotak2(float awal)
{
	 glBegin(GL_LINE_LOOP);
      glVertex2f(awal, awal);
      glVertex2f(awal, (awal+0.2));

      glVertex2f(awal, (awal+0.2));
      glVertex2f((awal+0.2), (awal+0.2));


      glVertex2f((awal+0.2), (awal+0.2));
      glVertex2f((awal+0.2), (awal));


      glVertex2f((awal+0.2), (awal));
      glVertex2f((awal), (awal));

  glEnd();
}
void display()
{
  glClearColor(1.0 , 1.0, 1.0, 1.0);
  glClear(GL_COLOR_BUFFER_BIT);

  glColor3f(0.0, 0.0, 0.0);

  kotak(-0.4f);
  kotak1(-0.1f);
  kotak2(0.2f);



  glFlush();
  glutPostRedisplay();
}

int main(int argc, char **argv)
{
  glutInit(&argc, argv);
  glutInitDisplayMode(GLUT_SINGLE);
  glutInitWindowSize(640, 480);
  glutInitWindowPosition(50, 50);
  glutCreateWindow("praktikum 1");
  glutDisplayFunc(display);
  glutMainLoop();
  return 0;
}
