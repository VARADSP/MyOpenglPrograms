#include<iostream>
#include<GL/freeglut.h>
#include<GL/gl.h>
#include<GL/glu.h>
#include<GL/glut.h>
#include<windows.h>
#include<stdlib.h>

void tri()
{
    glPushMatrix();
    glColor3f(1.0,0.0,0.0);
    glBegin(GL_TRIANGLES);
    glVertex2f(30,300);
    glVertex2f(60,300);
    glVertex2f(45,200);
    glEnd();
    glPopMatrix();

}
void init()
{
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0,500.0,0.0,500.0);

}
void display()
{
    glClearColor(1.0,1.0,1.0,0.0);
    glClear(GL_COLOR_BUFFER_BIT);
    int index=glGenLists(1);
    glNewList(index,GL_COMPILE);
    tri();
    glEndList();
    for(int i=0;i<5;i++)
    {
        glTranslatef(30.0,0.0,0.0);
        glCallList(index);

    }
    glFlush();

}
int main(int argc,char **argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(300,200);
    glutInitWindowPosition(10,10);
    glutCreateWindow("VSP");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;

}
