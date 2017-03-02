#include<GL/glu.h>
#include<GL/glut.h>
#include<windows.h>
#include<stdlib.h>
void init()
{
    glClearColor(0.0,0.0,0.0,0.0);
    glColor3f(1.0,0.0,0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0,600,0,700);

}
GLdouble x1=100,y1=100,x2=450,y2=350;
void LineDDA()
{
    GLdouble dx=x2-x1,dy=y2-y1,steps;
    float xinc,yinc,x=x1,y=y1;

    steps=(dx>dy)?abs(dx):abs(dy);

    xinc = dx / (float ) steps;
    yinc = dy / (float ) steps;

    glClear(GL_COLOR_BUFFER_BIT);
    glPointSize(10.0);
    glBegin(GL_POINTS);
    glColor3f(1.0,0.0,0.0);
    glVertex2f(x,y);
    for(int i=0;i<steps;i++)
    {
        x=x+xinc;
        y=y+yinc;
        glVertex2f(x,y);

    }
    glEnd();
    glFlush();



}
int main(int argc,char **argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowPosition(0,0);
    glutInitWindowSize(400,500);
    glutCreateWindow("HI");
    init();
    glutDisplayFunc(LineDDA);
    glutMainLoop();
    return 0;
}
