#include<GL/glu.h>
#include<GL/glut.h>
#include<windows.h>
#include<stdlib.h>
int key;

void display()
{


}

void mouse(int btn,int state,int x,int y)
{
    if(btn == GLUT_RIGHT_BUTTON && state == GLUT_UP)
    {
    glClearColor(0.0,0.0,0.0,0.0);
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1.0,0.0,0.0);
    glBegin(GL_TRIANGLES);
    glVertex2f(0.5,0.0);
    glVertex2f(0.0,0.5);
    glVertex2f(-0.5,0.0);
    glEnd();
    glFlush();


    }
    else
    {
    glClearColor(0.0,1.0,0.0,0.0);
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1.0,0.0,0.0);
    glBegin(GL_TRIANGLES);
    glVertex2f(0.8,0.0);
    glVertex2f(0.0,0.8);
    glVertex2f(-0.8,0.0);
    glEnd();
    glFlush();



    }
}
int main(int argc,char **argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowPosition(0,0);
    glutInitWindowSize(400,350);
    glutCreateWindow("VSP");
    glutDisplayFunc(display);
    glutMouseFunc(mouse);
    glutMainLoop();
    return 0;
}
