#include<iostream>
using namespace std;

int main ()
{
    long int t;
    cin>>t;
    while(t--)
    {
        long int num,fact=1;
        cin>>num;
        while(num>=1)
        {
            fact *= num;
            num--;
        }
        cout<<fact<<endl;
    }
    return 0;
}