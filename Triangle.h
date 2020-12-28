#ifndef TRIANGLE_H
#define TRIANGLE_H
#include <iostream>
using namespace std;

class Triangle
{
    public:
        Triangle();
        virtual ~Triangle();
        Triangle(int newWidth, int newHeight);
        void setWidth(int newWidth);
        void setHeight(int newHeight);
        virtual int getArea();
        virtual void drawTriangle();
    protected:
        int width = 0;
        int height = 0;
        int h, w;
    private:
};

#endif // TRIANGLE_H
