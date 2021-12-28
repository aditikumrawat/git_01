#include<iostream>
using namespace std;

class base
{
public:
    int a, b;
    void getdata()
    {
        cout << "Enter two no: ";
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

class addition : public base
{
    public:
    void add()
    {
        getdata();
        cout<<"Addition of number : "<<a+b;
        cout<<endl;
    }
};

class subtraction : public base
{
    public:
    void sub()
    {
        getdata();
        cout<<"Subtraction of number : "<<a-b;
        cout<<endl;
    }
};
int main()
{
    addition a;
    a.add();
    subtraction s;
    s.sub();
    return 0;
}