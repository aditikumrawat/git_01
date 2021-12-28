#include <iostream>
using namespace std;

int main()
{
    int t,k=-4;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        if (i % 2 != 0)
        {
            k += 4;
            for (int j = 1 ; j <= 5 ; j++)
            {
                cout<<++k<<" ";
               
            }
        }
        else
        {
            k += 6;
            for (int j = 1; j <= 5; j++)
            {
                /* code */
                cout<<--k<<" ";
            }
            
        }
        cout<<endl;
    }
    return 0;
}