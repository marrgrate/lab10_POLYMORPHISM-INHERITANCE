#pragma once
#include "Figure.h"

class Polygon : public Figure
{
	int vertices;
public:
	Polygon();
	~Polygon() { cout << "Polygon destructor\n"; }
	void SetVertices(int n);
	int GetVertices() { return vertices; }
	Polygon(int x, int y, int Height, int Width, char* color, int vertices);
	void Print();
};

//========================================================================\\

class Ellips : public Figure
{
public:
	Ellips() {}
	Ellips(int x, int y, int width, int height, char* color)
		:Figure(x, y, width, height, color) {}
	~Ellips() { cout << "Ellips destructor\n"; }
	void Print()
	{
		cout << "\n~~~ELLIPS~~~\n";
		Figure::Print();
	}
};