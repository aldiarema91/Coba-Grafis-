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
#include <math.h>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include <stdlib.h>
const double PI = 3.141592653589793;
void display()
{
     int i,radius,jumlah_titik,x_tengah,y_tengah;
    radius = 70;
    jumlah_titik = 30;
    x_tengah = 50;
    y_tengah = 50;
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glClearColor(1.0, 1.0, 1.0, 1.0);
    glLoadIdentity();
    glTranslatef(-0.5f, -0.5f, 0);
    glColor3f(0.0, 0.0, 0.0); // Mengubah warna garis menjadi hitam
    glBegin(GL_POLYGON);
    for (i=0;i<jumlah_titik; i++){
    float sudut;
    sudut = (float) (i*(2*PI/jumlah_titik));
    float x = (float) (x_tengah+radius * cos(sudut));
    float y = (float) (y_tengah+radius * sin(sudut));
    glVertex2f(x/100, y/100);
    }
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
