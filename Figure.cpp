#include "Figure.h"

Figure::Figure()
{
	cout << "Figure is created\n";
	X = 0;
	Y = 0;
	width = 1;
	height = 1;
	strcpy(color, "black");
}

Figure::Figure(int x, int y, int Height, int Width, char* color) :
	X(x), Y(y), height(Height), width(Width)
{
	strcpy(this->color, color);
	cout << "Figure constructor is working\n";
}

Figure::Figure(Figure& f)
{
	X = f.X;
	Y = f.Y;
	height = f.height;
	width = f.width;
	strcpy(this->color, color);
	cout << "Figure COPYconstructor is working\n";
}

void Figure::SetPosition(int x, int y)
{
	X = x;
	Y = y;
}

void Figure::SetSize(int width, int height)
{
	if (width < 0) this->width = abs(width);
	else if (width = 0)
		this->width = 1;
	else this->width = width;

	if (height < 0) this->height = abs(height);
	else if (height = 0)
		this->height = 1;
	else this->height = height;
}

void Figure::SetColor(char* color)
{
	strcpy(this->color, color);
}

void Figure::Print()
{
	cout << "Position:\t(" << X << "; " << Y << ")\n";
	cout << "Size:\t\t" << width << " X " << height << endl;
	cout << "Color:\t\t" << color << endl;
}