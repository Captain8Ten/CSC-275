#include<iostream>
#include<cmath>

using namespace std;

#define N 5
// const in N = 5;

class Point{
    public:
        Point():x(0),y(0),z(54){};
        Point(int a):x(a),y(0),z(54){}
        Point(int a, int b):x(a),y(b),z(54){}
        int getX()
        {
            return x;
        }
        int getY()
        {
            return y;
        }
        int z;
    private:
        int x;
        int y;

};

Point * fillPointArray(Point parray[])
{
    for(int i=0; i<N; i++)
    {
        parray[i] = Point (i, pow(i,2));
    }
    return parray;
}

Point * fillPointArray2(Point *ptr)
{
    for (int t=0; t<N; t++)
    {
        ptr[t] = Point (t, pow(t,3));
    }
    return ptr;
}

int main()
{
    typedef int * IntPtr;
    IntPtr ptr1 = new int; //reserving a memory location, and returns address for that location
    cout << ptr1 << endl; // when it says address it means the memory location
    *ptr1 = 10;
    Point *ptr2;
    ptr2 = new Point(5,1);

    if(ptr1!=NULL)
    {
        cout << *ptr1 << endl;
    }

    cout << ptr2 -> getX() << " " << ptr2 -> getY() << " " << ptr2 -> z << endl;

    Point parray[N];
    fillPointArray(parray);

    // int ptr = a, where a is an array, name of the array always has the address of the array. Therefore I don't need the & operator

    cout<<endl;
    for(int i=0; i<N; i++)
    {
        cout << parray[i].getX() << " " << parray[i].getY() << endl;
    }

    cout<<endl;
/*
    // another way to do it
    for(int i=0; i<N; i++)
    {
        cout << ptr3[i].getX() << " " << ptr3[i].getY() << endl;
    }

    cout<<endl;
    for(int i=0; i<N; i++)
    {
        cout << (parray+i) -> getX() << " " << (parray+i) -> getY() << endl;
    }
*/
    fillPointArray2(parray);

    for(int i=0; i<N; i++)
    {
        cout << parray[i].getX() << " " << parray[i].getY() << endl;
    }
}
