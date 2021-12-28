#include<iostream>
using namespace std;

int main()
{
    int n,zero=0,one=0,two=0,i;
    cin>>n;
    int arr[n];
    for(i = 0; i<n; i++)
    {
        cin>>arr[i];
        if(arr[i]==0)
        {
            zero++;
        }
        else if(arr[i]==1)
        {
            one++;
        }
        else if(arr[i]==2)
        {
            two++;
        }
    }
    while(zero--)
    {
        cout<<"0"<<" ";
    }
    while(one--)
    {
        cout<<"1"<<" ";
    }
    while(two--)
    {
        cout<<"2"<<" ";
    }
    return 0;
}