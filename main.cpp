#include <GL/gl.h>
#include <GL/glut.h>
#include <math.h>


const double PI = 3.141592654;

void circle(int xCen, int yCen, int radX, int radY)
{
    float theta;
    int i;

    glBegin(GL_POLYGON);
    for(i=0; i<360; i++)
    {
        theta=i*PI/180;
        glVertex2f(xCen + radX * cos(theta), yCen + radY * sin(theta));
    }
    glEnd();
}

void rectang(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4)
{
    glBegin(GL_POLYGON);
    glVertex2d(x1, y1);
    glVertex2d(x2, y2);
    glVertex2d(x3, y3);
    glVertex2d(x4, y4);
    glEnd();
}

void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);

    //Ear Left
    glColor3ub(202, 221, 225);
    glRectf(110, 230, 90, 200);

    glLineWidth(3.0);
    glBegin(GL_LINES);
    glVertex2f(100, 230);
    glVertex2f(100, 260);
    glEnd();

    //glRectf(110+100, 230, 90+100, 200);

    //Head
    glColor3ub(255, 255, 255);
    circle(150, 230, 50, 30);

    glColor3ub(255, 255, 255);
    glRectf(100, 230, 200, 190);

    glColor3ub(48, 50, 65);
    circle(140, 230, 30, 20);

    glColor3ub(48, 50, 65);
    glRectf(110, 230, 170, 200);

    //Ear Right
    glColor3ub(202, 221, 225);
    glRectf(110+90, 230, 90+90, 200);

    glLineWidth(3.0);
    glBegin(GL_LINES);
    glVertex2f(100+90, 230);
    glVertex2f(100+90, 260);
    glEnd();

    //Eye
    glColor3ub(255, 233, 36);
    glRectf(120, 230, 125, 222);
    glRectf(120+30, 230, 125+30, 222);

    //Legs
    glColor3ub(48, 50, 65);
    glRectf(120, 90, 130, 75);

    glRectf(120+40, 90, 130+40, 75);

    //Body
    glColor3ub(191, 211, 212);
    glBegin(GL_POLYGON);
    glVertex2d(100, 170);
    glVertex2d(120, 185);
    glVertex2d(200, 185);
    glVertex2d(180, 170);
    glEnd();

    glColor3ub(255, 255, 255);
    glRectf(100, 170, 180, 90);

    glColor3ub(202, 221, 225);
    glBegin(GL_POLYGON);
    glVertex2d(180, 90);
    glVertex2d(200, 105);
    glVertex2d(200, 185);
    glVertex2d(180, 170);
    glEnd();

    //Inner design on body Upper
    glColor3ub(48, 50, 65);
    glRectf(110, 160, 170, 140);

    glColor3ub(255, 233, 36);
    circle(140, 130, 30, 25);

    glColor3ub(48, 50, 65);
    circle(140, 130, 29, 24);

    //Inner vanish
    glColor3ub(255, 255, 255);
    glRectf(110, 90, 170, 140);

    //Meter
    glColor3ub(255, 233, 36);
    glLineWidth(1.0);
    glBegin(GL_LINES);
    glVertex2f(140, 140);
    glVertex2f(150, 150);
    glEnd();


    //Inner design on body Lower
    glColor3ub(48, 50, 65);
    glRectf(110, 160-30, 170, 140-30);

    //Zic Zac design
    glColor3ub(255, 233, 36);
    glLineWidth(2.0);
    glBegin(GL_LINES);
    glVertex2f(110, 120);
    glVertex2f(120, 120);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(120, 120);
    glVertex2f(130, 125);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(150, 115);
    glVertex2f(130, 125);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(150, 115);
    glVertex2f(160, 120);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(160, 120);
    glVertex2f(170, 120);
    glEnd();


    //Sholder
    glColor3ub(48, 50, 65);
    glRectf(120, 180, 180, 190);


    //Legs lower portion
    glColor3ub(255, 255, 255);
    glRectf(117, 50, 132, 75);

    glRectf(105, 60, 132, 50);


    glRectf(117+40, 50, 132+40, 75);

    glRectf(105+40, 60, 132+40, 50);

    //Soil
    glColor3ub(92, 143, 174);
    circle(150, 50, 150, 2);

    //Hand Left
    glColor3ub(255, 255, 255);
    glRectf(100, 150, 60, 130);

    glRectf(80, 100, 60, 130);

    //Hand Right
    glColor3ub(255, 255, 255);
    glRectf(190, 150, 230, 130);

    glRectf(210, 100, 230, 130);



    glFlush();
}

void init (void)
{
    glClearColor (0.25, 0.46, 0.60, 1.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-100, 400, -100, 400);
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB | GLUT_MULTISAMPLE);
    glutInitWindowSize (700, 700);
    glutInitWindowPosition (100, 100);
    glutCreateWindow ("181-15-10869 S. M. Rakibul Islam G (Robot)");
    init ();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
