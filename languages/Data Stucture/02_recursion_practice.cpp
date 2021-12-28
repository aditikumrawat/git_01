#include<iostream>
using namespace std;

int sum(int last)
{
    int sum_up = 0;
    if(last>0)
    {
        sum_up = last + sum(last-1);
    }
    return sum_up;
}

int main()
{
    int s = sum(5);
    cout<<"Sum is: "<<s;
    return 0;
}