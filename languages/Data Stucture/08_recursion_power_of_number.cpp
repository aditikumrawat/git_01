#include<iostream>
using namespace std;

int pow(int num,int p)
{
    static int power = 1; 
    if(num==1 || p==0)
    {
        return 1;
    }
    else if(p%2==0)
    {
       power = pow(num*num,p/2);
       return power;
    }
    else
    {
        power = num*pow(num*num,(p-1)/2);
        return power;
    }
}
int main()
{
    int num,power,out;
    cout<<"Enter the base element for which you want power: ";
    cin>>num;
    cout<<"Enter power for the base element: ";
    cin>>power;
    out = pow(num,power);
    cout<<"Answer is: "<<out;
    return 0;
}