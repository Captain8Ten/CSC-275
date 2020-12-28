#include "Triangle.h"
#include <iostream>
#include <conio.h>
using namespace std;

Triangle::Triangle()
{
    //ctor
}

Triangle::~Triangle()
{
    //dtor
}

Triangle::Triangle(int newWidth, int newHeight)
{
    width = newWidth;
    height = newHeight;

}


void Triangle::setWidth(int newWidth)
{
    width = newWidth;

}


void Triangle::setHeight(int newHeight)
{
    height = newHeight;

}

int Triangle::getArea()
{
    return ((width * height)/2);
}

void Triangle::drawTriangle()
{
    for(int i=0; i<height; i++)
    {
        for(int y=height-i; y>0; y--)
            cout << " ";
        for(int z=0;z<2*i+1;z++)
            cout << "*";
            cout <<endl;
    }
}
