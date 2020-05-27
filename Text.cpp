#include "Text.h"

Text::Text()
{
	cout << "Text is created\n";
	X = 0;
	Y = 0;
	strcpy(text, "Here  should be a text");
	size = 12;
	strcpy(color, "black");
}

Text::Text(int x, int y, char* txt, float size, char* color)
	: X(x), Y(y), size(size)
{
	strcpy(text, txt);
	strcpy(this->color, color);
	if (size <= 0) this->size = abs(size);
	if (size > 300) this->size = 300;
	cout << "Text constructor is working\n";
}

void Text::SetPosition(int x, int y)
{
	X = x;
	Y = y;
}

void Text::SetText(char* txt)
{
	strcpy(text, txt);
}

void Text::SetTextSize(float size)
{
	if (size < 0) this->size = abs(size);
	if (size > 300) this->size = 300;
}

void Text::SetTextColor(char* color)
{
	strcpy(this->color, color);
}

void Text::Print()
{
	cout << "\n~~~TEXT~~~\n";
	cout << "Position:\t(" << X << "; " << Y << ")\n";
	cout << "Text:\t\t" << text << endl;
	cout << "Size:\t\t" << size << " pt" << endl;
	cout << "Color:\t\t" << color << endl;
}