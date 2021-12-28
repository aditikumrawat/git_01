#include<iostream>
using namespace std;
void print(int i)
{
    cout<<"Here is int "<< i <<endl;
}
void print(double f)
{
    cout<<"Here is double "<< f <<endl;
}
void print(string c)
{
    cout<<"Here is string "<< c <<endl;
}
int main()
{
    print(10);
    print(10.10);
    print("ten");
    return 0;
}