#include<iostream>
using namespace std;

int main()
{
    int t,n,last_digit;
    cin>>t;
    while (t--)
    {
       cin>>n;
       while(n%10==0)
       {
         n = n/10;
       }
       while (n>0)
       {
           last_digit = n%10;
           cout<<last_digit;
           n = n/10;
       }
       cout<<endl;
    }
    return 0;
}