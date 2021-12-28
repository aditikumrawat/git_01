#include<iostream>
using namespace std;

double ATM(int withdraw,int initial)
{
    if(withdraw%5==0 && initial>withdraw)
    {
       return initial - (withdraw + 0.50);
    }
    else
    {
       return initial;
    }
}

int main()
{
    double X=0,Y=0;
    cout<<"Enter your withdrawal amount: ";
    cin>>X;
    cout<<"Enter your intial bank balance: ";
    cin>>Y;
    float out = ATM(X,Y);
    cout<<out;
    return 0;
}