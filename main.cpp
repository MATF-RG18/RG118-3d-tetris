#include <iostream>
#include <GL/glut.h>
#include <vector>
#include <algorithm>
#include "grid.h"



static void on_display(void);
static void on_keyboard(unsigned char key, int x, int y);
static void on_reshape(int width, int height);
static void on_timer(int value);


static void draw_axis();
 
 
 

int main(int argc, char **argv) {

 
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DEPTH | GLUT_DOUBLE);

  
    glutInitWindowSize(800, 800);
    glutInitWindowPosition(100, 100);
    glutCreateWindow(argv[0]);

    
    glutKeyboardFunc(on_keyboard);
    glutReshapeFunc(on_reshape);
    glutDisplayFunc(on_display);

 
    glClearColor(0.2, 0.2, 0.2, 0);
    glEnable(GL_DEPTH_TEST);

    
    glutMainLoop();

    return 0;

}

 

static void on_display(void) {

   
     
 

    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glRotatef(45, 0, 0, 1);
    gluLookAt(1, 15, 1, 2, 0, 2, 0, 1, 0); 
 

    draw_axis();

    Grid g;
    g.bottomGrid();
    g.sideGrid();

    glutSwapBuffers();

}

static void on_keyboard(unsigned char key, int x, int y) {
	 
 
}

static void on_reshape(int width, int height) {

    glViewport(0, 0, width, height);

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(20, (float)width/height, 1, 30);

}

static void draw_axis() {

    glPushMatrix();
        glBegin(GL_LINES);
        glColor3f(1, 0, 0);
        glVertex3f(1, 0, 0);
        glVertex3f(0, 0, 0);
        glVertex3f(40, 0, 0);
    glEnd();
    glPopMatrix();

    glPushMatrix();
        glBegin(GL_LINES);
        glColor3f(0, 1, 0);
        glVertex3f(0, 1, 0);
        glVertex3f(0, 0, 0);
        glVertex3f(0, 40, 0);
    glEnd();
    glPopMatrix();

    glPushMatrix();
        glBegin(GL_LINES);
        glColor3f(0, 0, 1);
        glVertex3f(0, 0, 1);
        glVertex3f(0, 0, 0);
        glVertex3f(0, 0, 40);
    glEnd();
    glPopMatrix();

}

static void on_timer(int value) {
    
   
    glutPostRedisplay();
}

 