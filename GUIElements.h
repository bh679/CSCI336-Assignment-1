//GUIElements.h - brennan hatton Ass1 CSCI336

#ifndef GUI
#define GUI

#include <OpenGL/gl.h>
#include <OpenGL/glu.h>
#include <GLUT/glut.h>
#include <cmath>
#include <iostream>
#include <string>
#include <sstream>
#include <cstring>

const float pi = 3.14159265359;
const float boarderBuffer = 0.1;
//const void* font = GLUT_BITMAP_HELVETICA_18;

struct RGB{
	int red, green, blue;
};

struct Position{
	float x, y;
};

void setFont(void*);

void drawText(float, float, char[]);

int max(int a, int b);

int min(int a, int b);

float lengthDirectionX(float length, float direction);

float lengthDirectionY(float length, float direction);

void drawCircle(float x, float y, float r, int segments);

void drawCirclePart(float x, float y, float r, float percentage, float startPercentage, int segments);

void drawRectangleOutline(float x1, float y1, float x2, float y2);

void drawRectangle(float x1, float y1, float x2, float y2);

void drawRectangle(float x1, float y1, float x2, float y2, RGB rgb);

void drawLine(float x1, float  y1, float x2, float y2);

void floatToString(char[], float);

//void drawGraph(float x, float y, float width, float height, float valueXMin, float valueXMax, float valueYMin, float valueYMax);



#endif
