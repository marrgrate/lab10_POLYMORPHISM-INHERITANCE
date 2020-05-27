#pragma once
#include "Object.h"

class Figure : public Object
{
	int X;
	int Y;
	int width;
	int height;
	char color[256];
public:
	Figure();
	Figure(int x, int y, int width, int height, char* color);
	Figure(Figure& f);
	void SetPosition(int x, int y);
	void SetSize(int width, int height);
	void SetColor(char* color);
	int GetPositionX() { return X; }
	int GetPositionY() { return Y; }
	int GetWidth() { return width; }
	int GetHeight() { return height; }
	char* GetColor() { return color; }
	~Figure() { cout << "Figure destructor\n"; };
	void Print();
};



