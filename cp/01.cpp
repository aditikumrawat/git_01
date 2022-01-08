#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int Z,Y,A,B,C;
        cin>>Z>>Y>>A>>B>>C;
        Z = Z-Y;
        if(A+B+C<=Z)
        {
            cout<<"YES"<<"\n";
        }
        else
        {
            cout<<"NO"<<"\n";
        }
    }
    return 0;
}