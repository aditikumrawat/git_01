#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        string str;
        cin>>str;
        int size = str.length();
        int subs[size*size],index=0;
        for (int i = 0; i <= size ; i++)
        {
            for (int j = i+1; j <= size; j++)
            {
                subs[index] = str.substring(i,j);
                index++;
            }
        }
        for(int i=0; i< index ; i++)
        {
            cout<<subs[i]<<" ";
        }
    
    }
    
    return 0;
}