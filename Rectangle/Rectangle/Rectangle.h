// Rectangle.h : Include file for standard system include files,
// or project specific include files.

#pragma once

#include <iostream>
using namespace std;
class CRectangle {
private : 
	int width, height; 
public : 
	void setWidth(int _width);
	int getWidth() const;
	void setHeight(int _height);
	int getHeight() const; 
	int area();
};

// TODO: Reference additional headers your program requires here.
