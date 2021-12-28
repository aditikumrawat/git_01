#include<iostream>
using namespace std;

int combi(int n,int r)
{
    if(n==r || r==0)
     return 1;
    else
      return combi(n-1,r-1)+combi(n-1,r);
}
int main()
{
    int out = combi(4,2);
    cout<<out;
    return 0;
}