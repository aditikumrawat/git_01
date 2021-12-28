#include<iostream>
using namespace std;

int main()
{
    int n,i=1,count=0,j=0;
    cin>>n;
    int a[n];
    for ( i = 1; i <= n; i++)
    {
        if(n%i==0)
        {
            count+=1;
            a[j] = i;
            j++;
        }
    }
    cout<<count<<endl;
    for(int i =0; i < count ;i++)
    {
       cout<<a[i]<<" ";
    }
    return 0;
}