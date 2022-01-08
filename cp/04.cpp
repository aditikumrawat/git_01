#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        long long n,
        int i=0,j=0;
        cin>>n;
        long long A[n],B[n*n],size=0;
        for (i = 0; i < n; i++)
        {
            cin>>A[i];
        }
        for (i = 0; i < n; i++)
        {
            j=i+1;
            while (j<n)
            {
               B[i]=A[i]&A[j];
               j++;
               size++;
            }
        }
        int i = 0,j=1;
        while (size>0)
        {
            B[i]=B[0]|B[i+1];
            size--;
        }
        cout<<B[1];
    }
    return 0;
}