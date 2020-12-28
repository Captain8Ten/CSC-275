// Based on the provided size of an object,
// this program makes a shape of a rectangle and a triangle.
// This program also uses header classes which can also be found in the CSC-275 Depository

#include <iostream>
#include "Polygon.h"

using namespace std;

int main()
{
    Rectangle rec;
    rec.setHeight(9);
    rec.setWidth(5);
    rec.draw();
    cout << "The area of the rectangle is " << rec.getArea();

    cout << endl;
    cout << endl;

    Rectangle rec2;
    rec2.setHeight(15);
    rec2.setWidth(10);
    rec2.draw();
    cout << "The area of the rectangle 2 is " << rec2.getArea();

    cout << endl;
    cout << endl;

    Triangle tri;
    tri.setHeight(5);
    tri.setWidth(10);
    tri.drawTriangle();
    cout << "The area of the triangle is " << tri.getArea();

    cout << endl;
    cout << endl;

    Triangle tri2;
    tri2.setHeight(4);
    tri2.setWidth(8);
    tri2.drawTriangle();
    cout << "The area of the triangle is " << tri2.getArea();

    // With the pure virtual function. My program does not run because I believe that
    // because it is a virtual function, the program does not want it to change.

    return 0;
}
