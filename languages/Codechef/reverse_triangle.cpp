#include <iostream>
using namespace std;

int main()
{
    int N,m=1;
    cin >> N;
    for (int i = N; i > 0 ; i--)
    {
        for (int  j = 1; j<=i-1; j++)
        {
            cout<<" ";
        }
        for(int k = 1; k <= m; k++)
        {
           cout<<"*";
        }
        cout<<endl;
        m++;   

    }
    return 0;
}