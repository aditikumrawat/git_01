#include<iostream>
using namespace std;

int fun(int num)
{   
    static int sum= 0;
    if(num>0)
    {
        sum = num + fun(num-1);
    }
    return sum;
}
int main()
{
    int num=0;
    int in;
    cout<<"Enter the last element for sum of your natural number : ";
    cin>>in;
    num = fun(in);
    cout<<"Sum is here: "<<num;
    return 0;
}