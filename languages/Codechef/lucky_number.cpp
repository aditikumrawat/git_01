#include<iostream>
using namespace std;

int main()
{
   int T;
   int a,b,c;
   cin>>T;
   for(int i = 0 ;i<T;i++)
   {
     cin>>a>>b>>c;
     if(a==7 || b==7 || c==7)
     {
         cout<<"YES"<<endl;
     }
     else
     {
         cout<<"NO"<<endl;
     }
   }
    return 0;
}