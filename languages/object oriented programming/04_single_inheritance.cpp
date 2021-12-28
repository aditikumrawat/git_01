#include<iostream>
using namespace std;

class base
{
    public:
    int num1,num2;
    void getnum()
    {
        cout<<"Enter your 1st number : ";
        cin>>num1;
        cout<<"Enter your 2nd number : ";
        cin>>num2;
    }
};

class derived : public base
{
    public:
    void add()
    {
        cout<<endl;
        cout<<"Addition of two number : "<<num1+num2;
    }
};
int main()
{
    derived d;
    d.getnum();
    d.add();
    return 0;
}