#include "Polygon.h"

Polygon::Polygon()
{
	vertices = 3;
	cout << "Polygon is created\n";
}

void Polygon::SetVertices(int n)
{
	if (n < 3) this->vertices = 3;
	else this->vertices = n;
}

Polygon::Polygon(int x, int y, int Height, int Width,
	char* color, int vertices)
	: Figure(x, y, Height, Width, color)
{
	if (vertices < 3) this->vertices = 3;
	else this->vertices = vertices;
	cout << "Polygon constructor is working\n";
}

void Polygon::Print()
{
	cout << "\n~~~POLYGON~~~\n";
	Figure::Print();
	cout << "Vertices\t" << vertices << endl;
}
