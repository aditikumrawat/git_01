#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int i=0,cn=0,cm=0,seats=0;
        for(i=0;i<=n;++i)
        {
            if(i%2!=0)
              cn++;
        }
        for(i=0;i<=m;++i)
        {
            if(i%2!=0)
              cm++;
        }
        seats = cn*cm;
        cout<<seats<<"\n";
    }
    return 0;
}