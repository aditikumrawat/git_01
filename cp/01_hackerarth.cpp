#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int T;
	cin>>T;
	while(T--)
	{
	    int red=0,purple=0,r,p;
	    cin>>red>>purple;
	    int n,x1,x2;
	    cin>>n;
	    while(n--)
	    {
           cin>>x1;
           if (x1==1)
           {
           	 r++;
           }
           cin>>x2;
           if (x2==1)
           {
              p++;
           }
	    }
	    cout<<red*r+purple*p<<endl;
	}
	return 0;
}