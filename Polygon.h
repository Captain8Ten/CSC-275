#ifndef POLYGON_H
#define POLYGON_H
#include "Rectangle.h"
#include "Triangle.h"

class Polygon
{
    public:
        Polygon();
        Polygon(int newWidth, int newHeight);
        void setWidth(int newWidth);
        void setHeight(int newHeight);
        virtual int getArea();
        virtual void draw();
    protected:
        int width = 0;
        int height = 0;
        int h, w;

};

#endif // POLYGON_H
