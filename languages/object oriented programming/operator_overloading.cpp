#include<iostream>
using namespace std;
class complex{
    double real,imaginary;
    public:
    void get()
    {
        cout << "Enter the real value complex number: ";
        cin>>real;
        cout << "Enter the imaginary value complex number: ";
        cin>>imaginary;
       // cout<<endl;
    }
    void display()
    {
        cout<<real << " +i "<<imaginary;
        
    }
    complex operator+(complex & c);
};

complex complex :: operator+(complex & c)
{
   complex result;
   result.real =  real+c.real;
   result.imaginary =  imaginary+c.imaginary;
   return result;
}

int main()
{
    complex x,y,z;
    cout<<"Enter value for x..."<<endl;
    x.get();
    cout<<"Enter value for y..."<<endl;
    y.get();
    z = x + y;
    z.display();
    return 0;
}