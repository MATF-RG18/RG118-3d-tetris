#include "grid.h"
#define CUBE_SIZE 0.5


Grid::Grid() {}

void Grid::firstRow() {

	glPushMatrix();
		glColor3f(1, 1, 1);
		glScalef(1, 0, 1);
		glTranslatef(0.25, 0, 0.25);
		glutWireCube(CUBE_SIZE);
	glPopMatrix();

	glPushMatrix();
		glColor3f(1, 1, 1);
		glScalef(1, 0, 1);
		glTranslatef(0.75, 0, 0.25);
		glutWireCube(CUBE_SIZE);
	glPopMatrix();

	glPushMatrix();
		glColor3f(1, 1, 1);
		glScalef(1, 0, 1);
		glTranslatef(1.25, 0, 0.25);
		glutWireCube(0.5);
	glPopMatrix();

	glPushMatrix();
		glColor3f(1, 1, 1);
		glScalef(1, 0, 1);
		glTranslatef(1.75, 0, 0.25);
		glutWireCube(CUBE_SIZE);
	glPopMatrix();

	glPushMatrix();
		glColor3f(1, 1, 1);
		glScalef(1, 0, 1);
		glTranslatef(2.25, 0, 0.25);
		glutWireCube(CUBE_SIZE);
	glPopMatrix();

}

void Grid::bottomGrid() {

	glPushMatrix();
		firstRow();
	glPopMatrix();

	glPushMatrix();
		glTranslatef(0, 0, 0.5);
		firstRow();
	glPopMatrix();

	glPushMatrix();
		glTranslatef(0, 0, 1);
		firstRow();
	glPopMatrix();

	glPushMatrix();
		glTranslatef(0, 0, 1.5);
		firstRow();
	glPopMatrix();


	glPushMatrix();
		glTranslatef(0, 0, 2);
		firstRow();
	glPopMatrix();
}
 
void Grid::sideGrid() {
	
	glPushMatrix();
		glRotatef(-90, 1, 0, 0);
		bottomGrid();
	glPopMatrix();

	glPushMatrix();
		glRotatef(90, 0, 0, 1);
		bottomGrid();
	glPopMatrix();

	 
	glPushMatrix();
		glTranslatef(2.5, 0, 0);
		glRotatef(90, 0, 0, 1);
		bottomGrid();
	glPopMatrix();

	glPushMatrix();
		glTranslatef(0, 0, 2.5);
		glRotatef(-90, 1, 0, 0);
		bottomGrid();
	glPopMatrix();

	glPushMatrix();
		glTranslatef(0, 2.5, 0);
		glRotatef(-90, 1, 0, 0);
		bottomGrid();
	glPopMatrix();

	glPushMatrix();
		glTranslatef(0, 2.5, 0);
		glRotatef(90, 0, 0, 1);
		bottomGrid();
	glPopMatrix();

	 
	glPushMatrix();
		glTranslatef(2.5, 2.5, 0);
		glRotatef(90, 0, 0, 1);
		bottomGrid();
	glPopMatrix();

	glPushMatrix();
		glTranslatef(0, 2.5, 2.5);
		glRotatef(-90, 1, 0, 0);
		bottomGrid();
	glPopMatrix();

}


 