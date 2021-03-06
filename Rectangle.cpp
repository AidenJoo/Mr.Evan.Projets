#include "includes.h"


/* Setter method which sets the length to len */
void Rectangle::set_length(int len)
{
	this->length = len;
}

/* Setter method which sets the width to wid */
void Rectangle::set_width(int wid)
{
	this->width = wid;
}

/* Getter method which returns the length */
int Rectangle::get_length()
{
	return this->length;
}

/* Getter method which returns the width */
int Rectangle::get_width()
{
	return this->width;
}

/* This method will return the area of the rectangle.
 * Do we need to use the getter functions in here to
 * access the length and width?
 * Hint
 * no.
 * We don't since this method is part of the class, therefore
 * it can access the private data. So to access the length
 * and the width in this method we only need to call
 * this->length and this->width respectively.
 */
int Rectange::area()
{
	return this->width*this->height;
}
