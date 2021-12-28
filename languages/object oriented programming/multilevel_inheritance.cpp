#include <iostream>
using namespace std;

class base
{
    int a, b;

public:
    void getdata()
    {
        cout << "Enter 2 no: ";
        cin >> a >> b;
        cout << endl;
    }

    void putdata()
    {
        cout << "Value of a and b is "
             << " " << a << " "
             << "and"
             << " " << b;
        cout << endl;
    }
};

class derived_1 : public base
{
    int a, b;

public:
    void add()
    {
        cout << "Enter 2 no for addition: ";
        cin >> a >> b;
        cout << endl;
    }

    void outadd()
    {
        cout << "Addtion of your value : "
             << " " << a + b;
        cout << endl;
    }
};
class derived_2 : public derived_1
{
    int a, b;

public:
    void subtract()
    {
        cout << "Enter 2 no for subtraction: ";
        cin >> a >> b;
        cout<<endl;
    }

    void outsubtract()
    {
        cout << "Subtraction of your value : " << a - b;
        cout << endl;
    }
};

int main()
{
    derived_2 d;
    d.getdata();
    d.putdata();
    d.add();
    d.outadd();
    d.subtract();
    d.outsubtract();
    return 0;
}