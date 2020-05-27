#pragma once
#include "Object.h"

class Text : public Object
{
	int X;
	int Y;
	char text[256];
	float size; //pt
	char color[128];
public:
	Text();
	Text(int x, int y, char* txt, float size, char* color);
	~Text() { cout << "Text destructor\n"; }

	void SetPosition(int x, int y);
	void SetText(char* txt);
	void SetTextSize(float size);
	void SetTextColor(char* color);
	int GetPositionX() { return X; }
	int GetPositionY() { return Y; }
	char* GetText() { return text; }
	float GetSize() { return size; }
	char* GetColor() { return color; }
	void Print();
};


