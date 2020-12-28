#include "Rectangle.h"
#include <iostream>
using namespace std;

Rectangle::Rectangle()
{
    //ctor
}

Rectangle::~Rectangle()
{
    //dtor
}

Rectangle::Rectangle(int newWidth, int newHeight)
{
    width = newWidth;
    height = newHeight;

}


void Rectangle::setWidth(int newWidth)
{
    width = newWidth;

}


void Rectangle::setHeight(int newHeight)
{
    height = newHeight;

}

int Rectangle::getArea()
{
    return width * height;
}

void Rectangle::draw()
{
    h = 0;
    while(h < width)
    {
        for(w=0; w<height; w++)
        {
            cout << "*";
        }
        cout << endl;
        h++;
    }
}
