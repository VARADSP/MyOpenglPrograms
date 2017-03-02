#include<GL/glu.h>
#include<GL/glut.h>
#include<windows.h>
#include<stdlib.h>

void display()
{
    glClearColor(1.0,1.0,0.0,0.0);
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_TRIANGLES);
    glVertex3f(1.0,0.0,0.0);
    glVertex3f(0.0,1.0,0.0);
    glVertex3f(0.0,0.0,1.0);
    glEnd();
    glFlush();


}
void menu(int value)
{
    switch(value)
    {
        case 1:glColor3f(1.0,0.0,0.0);break;
        case 2:glColor3f(0.0,1.0,0.0);break;
        case 3:glColor3f(0.0,0.0,1.0);break;
        case 4:exit(0);break;

    }glutPostRedisplay();
}
int main(int argc,char **argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    int v = glutCreateMenu(menu);
    glutAddMenuEntry("RED",1);
    glutAddMenuEntry("GREEN",2);
    glutAddMenuEntry("BLUE",3);
    glutCreateMenu(menu);
    glutAddSubMenu("Draw Tri",v);
    glutAddSubMenu("Quit",4);
    glutAttachMenu(GLUT_RIGHT_BUTTON);
    glutInitWindowPosition(0,0);
    glutInitWindowSize(400,300);
    glutCreateWindow("VSP");

    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
