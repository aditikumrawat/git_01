#include <iostream>
using namespace std;

class shape
{
public:
    void area();
    void perimeter();
};

class circle : public shape
{
public:
    int r;
    void perimeter()
    {
        cout << "Here enter the value to find area of circle...";
        cout << "\nEnter value of r: ";
        cin >> r;
    }
    void area()
    {
        cout << "Area of circle is " << 2 * 3.14 * r * r;
    }
};

class rectangle : public shape
{
public:
    int l, b;
    void perimeter()
    {
        cout << "\nHere enter the value to find area of rectangle...";
        cout << "\nEnter value of l: ";
        cin >> l;
        cout << "Enter value of b: ";
        cin >> b;
    }
    void area()
    {
        cout << "Area of rectangle is " << l * b;
    }
};

int main()
{
    circle c;
    c.perimeter();
    c.area();
    rectangle r;
    r.perimeter();
    r.area();
    return 0;
}