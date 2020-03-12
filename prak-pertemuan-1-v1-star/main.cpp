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
void star(float awal)
{
	 glBegin(GL_LINES);
      glVertex2f(awal, awal);
      glVertex2f((awal-0.05f), (awal-0.2f));


      glVertex2f((awal-0.05f), (awal-0.2f));
      glVertex2f((awal+0.1f), (awal));


      glVertex2f((awal+0.1f), (awal));
      glVertex2f((awal+0.25f), (awal-0.2f));


      glVertex2f((awal+0.25f), (awal-0.2f));
      glVertex2f((awal+0.2f), (awal));


      glVertex2f((awal+0.2f), (awal));
      glVertex2f((awal+0.35f), (awal+0.2f));


      glVertex2f((awal+0.35f), (awal+0.2f));
      glVertex2f((awal+0.2f), (awal+0.2f));


      glVertex2f((awal+0.2f), (awal+0.2f));
      glVertex2f((awal+0.1f), (awal+0.4f));


      glVertex2f((awal+0.1f), (awal+0.4f));
      glVertex2f((awal), (awal+0.2f));


      glVertex2f((awal), (awal+0.2f));
      glVertex2f((awal-0.15f), (awal+0.2f));


      glVertex2f((awal-0.15f), (awal+0.2f));
      glVertex2f((awal), (awal));

  glEnd();
}
void star1(float awal)
{
	 glBegin(GL_LINE_STRIP);
      glVertex2f(awal, awal);
      glVertex2f((awal-0.05f), (awal-0.2f));


      glVertex2f((awal-0.05f), (awal-0.2f));
      glVertex2f((awal+0.1f), (awal));


      glVertex2f((awal+0.1f), (awal));
      glVertex2f((awal+0.25f), (awal-0.2f));


      glVertex2f((awal+0.25f), (awal-0.2f));
      glVertex2f((awal+0.2f), (awal));


      glVertex2f((awal+0.2f), (awal));
      glVertex2f((awal+0.35f), (awal+0.2f));


      glVertex2f((awal+0.35f), (awal+0.2f));
      glVertex2f((awal+0.2f), (awal+0.2f));


      glVertex2f((awal+0.2f), (awal+0.2f));
      glVertex2f((awal+0.1f), (awal+0.4f));


      glVertex2f((awal+0.1f), (awal+0.4f));
      glVertex2f((awal), (awal+0.2f));


      glVertex2f((awal), (awal+0.2f));
      glVertex2f((awal-0.15f), (awal+0.2f));


      glVertex2f((awal-0.15f), (awal+0.2f));
      glVertex2f((awal), (awal));

  glEnd();
}
void star2(float awal)
{
	 glBegin(GL_LINE_LOOP);
      glVertex2f(awal, awal);
      glVertex2f((awal-0.05f), (awal-0.2f));


      glVertex2f((awal-0.05f), (awal-0.2f));
      glVertex2f((awal+0.1f), (awal));


      glVertex2f((awal+0.1f), (awal));
      glVertex2f((awal+0.25f), (awal-0.2f));


      glVertex2f((awal+0.25f), (awal-0.2f));
      glVertex2f((awal+0.2f), (awal));


      glVertex2f((awal+0.2f), (awal));
      glVertex2f((awal+0.35f), (awal+0.2f));


      glVertex2f((awal+0.35f), (awal+0.2f));
      glVertex2f((awal+0.2f), (awal+0.2f));


      glVertex2f((awal+0.2f), (awal+0.2f));
      glVertex2f((awal+0.1f), (awal+0.4f));


      glVertex2f((awal+0.1f), (awal+0.4f));
      glVertex2f((awal), (awal+0.2f));


      glVertex2f((awal), (awal+0.2f));
      glVertex2f((awal-0.15f), (awal+0.2f));


      glVertex2f((awal-0.15f), (awal+0.2f));
      glVertex2f((awal), (awal));

  glEnd();
}
void display()
{
  glClearColor(1.0 , 1.0, 1.0, 1.0);
  glClear(GL_COLOR_BUFFER_BIT);

  glColor3f(0.0, 0.0, 0.0);

  star(-0.6f);

  star1(0.0f);

  star2(0.5f);



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
