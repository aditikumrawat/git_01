#include<iostream>
using namespace std;

int fact(int end)
{
    static int s = 1;
    if(end>0)
    {
       cout<<end<<" * ";
       s = end * fact(end-1);
    }
    return s;
}
int main()
{
    int out,in;
    cout<<"Enter the number to find the factorial of it: ";
    cin>>in;
    out = fact(in);
    cout<<" : "<<out;
    return 0;
}
