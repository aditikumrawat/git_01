#include<iostream>
using namespace std;

int main()
{
    int x,k,cnt=0;
    cin>>x>>k;
    for (int j = 0; j < x; j++)
    {
        int ti;
        cin>>ti;
        if(ti%k==0)
            cnt++;
    }
    cout<<cnt<<"\n";
    return 0;
}