#include "Text.h"
#include "Polygon.h"

//Object <- Figure <- Polygon 
// |	       |
//Text	     Ellips

int main()
{
	Object* O;	//pointer to abstract class object

	char color[256] = "yellow";
	Polygon rectangle(1, 1, 30, 40, color, 4);
	strcpy(color, "black");

	char text[256] = "Here should be a text";
	Text txt(-15, -30, text, 15, color);

	Ellips ellips(1, 1, 112, 123, color);

	O = &txt;
	cout << O << endl;
	O = &rectangle;
	cout << O << endl;
	O = &ellips;
	cout << O << endl;

	strcpy(text, "!!This is my program!!");
	txt.SetText(text);
	O = &txt;
	cout << O << endl;

	return 0;
}
