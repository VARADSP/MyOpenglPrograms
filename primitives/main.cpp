#include<GL/glu.h>
#include<GL/glut.h>
#include<windows.h>
#include<stdlib.h>

void init()
{
    glClearColor(1.0,1.0,1.0,0.0);
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(0,600,0,700);

}
void display()
{
    glClearColor(1.0,1.0,0.0,0.0);
    glClear(GL_COLOR_BUFFER_BIT);
    glutBitmapCharacter(GLUT_BITMAP_8_BY_13,100);
    glEnable(GL_LINE_STIPPLE);
    glLineStipple(1,0x010F);
    glLineWidth(7.0);
    glBegin(GL_LINE_LOOP);
    glColor3f(1.0,0.0,0.0);
    glVertex2f(0.5,0.5);
    glVertex2f(-0.5,0.5);
    glVertex2f(-0.5,-0.5);
    glVertex2f(0.5,-0.5);
    glEnd();
    glDisable(GL_LINE_STIPPLE);
    glEnable(GL_LINE_STIPPLE);
    glLineStipple(2,0x0FFF);
    glLineWidth(6.0);
    glBegin(GL_LINE_LOOP);
    glColor3f(0.841,0.642,0.602);
    glVertex2f(0,0.6);
    glVertex2f(0.6,0);
    glVertex2f(0,-0.6);
    glVertex2f(-0.6,0);
    glEnd();
    glDisable(GL_LINE_STIPPLE);




    glFlush();



}
int main(int argc,char **argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowPosition(0,0);
    glutInitWindowSize(400,300);
    glutCreateWindow("VSP");

    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
