#include<iostream>
using namespace std;

int main()
{
    long n,sum=0;
    int i=1;
    cin>>n;
    while (i<=n)
    {
        sum += i;
        i++;
    }
    cout<<sum;
    return 0;
}