#ifndef RECTANGLE_H
#define RECTANGLE_H
#include <iostream>
using namespace std;

class Rectangle
{
    public:
        Rectangle();
        virtual ~Rectangle();
        Rectangle(int newWidth, int newHeight);
        void setWidth(int newWidth);
        void setHeight(int newHeight);
        virtual int getArea();
        virtual void draw();
    protected:
        int width = 0;
        int height = 0;
        int h, w;
    private:
};

#endif // RECTANGLE_H
