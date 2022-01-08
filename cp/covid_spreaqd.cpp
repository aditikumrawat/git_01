#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, d, lastday = 1;
        cin >> n >> d;
        for (int i = 1; i <= d; i++)
        {
            if (i < 11)
            {
                lastday *= 2;
            }
            else
            {
                lastday *= 3; 
            }
            if (lastday>n)
            {
               lastday = n;
               break;
            }
        }
        cout << lastday << "\n";
    }
    return 0;
}