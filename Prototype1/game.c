//drawing stuff
#include<GL/gl.h>
#include<GL/glut.h>
#include"game.h"
#include<stdio.h>
#include<stdlib.h>

int gridX,gridY;		//dimension of the grid

void unit(int x, int y);
void initGrid(int x,int y)	//initialize grid
{
	//this fucntion only initialize stuff
	gridX=x;
	gridY=y;
}

void drawGrid()
{
	unit(20,20);
}

void unit(int x,int y)
{
	glLineWidth(1.0);
	glColor3f(1.0,1.0,1.0);
	glBegin(GL_LINE_LOOP);	//loop of lines, first vertex and last vertex specified will be connected 
	glVertex2f(x,y);	//2 floating
	glVertex2f(x+1,y);
	glVertex2f(x+1,y+1);
	glVertex2f(x,y+1);
	glEnd();
}
