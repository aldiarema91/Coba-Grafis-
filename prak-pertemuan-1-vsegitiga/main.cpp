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

void display()
{
  glClearColor(1.0 , 1.0, 1.0, 1.0);
  glClear(GL_COLOR_BUFFER_BIT);

  glColor3f(0.0, 0.0, 0.0);
  glBegin(GL_LINES);
      glVertex2f(-0.50f, -0.50f);
      glVertex2f(0.5f, -0.5f);

      glVertex2f(0.5f, -0.5f);
      glVertex2f(0.0f, 0.9f);


      glVertex2f(0.0f, 0.9f);
      glVertex2f(-0.50f, -0.50f);

  glEnd();

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
