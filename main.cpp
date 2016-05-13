#include "includes.h"

using namespace std;

int main()
{
	Rectangle rect1;
	Rectangle rect2;
	
	rect1.set_width(12);
	rect1.set_length(1);
	
	rect2.set_width(1);
	rect2.set_length(5);


	cout << "The width of rect1 is: " << rect1.get_width() << endl;
	cout << "The length of rect1 is: " << rect1.get_length() << endl;

	cout << "The width of rect2 is: " << rect2.get_width() << endl;
	cout << "The length of rect2 is: " << rect2.get_length() << endl;


	cout << "The area of rect1 is: " << rect1.area() << endl;
	cout << "The area of rect2 is: " << rect2.area() << endl;

	return 0;
}
