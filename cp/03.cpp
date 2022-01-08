#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, y, mid = 0, coin = 0;
        cin >> n >> x >> y;
        mid = (n + 1) / 2;
        while (mid != x && mid != y)
        {
            if (x == y && n < x)
            {
                x = x - 1;
                y = y - 1;
            }
            else if (x > y)
            {
                x = x - 1;
                y = y + 1;
            }
            else if (y > x)
            {
                x = x + 1;
                y = y - 1;
            }
            else if (x == y && x < n)
            {
                x = x + 1;
                y = y + 1;
            }
            else if (x==mid && x<y)
            {
                y = y - 1;
                coin++;
            }
            else if (x==mid && x > y)
            {
                y = y+1;
                coin++;
            }
            else if(y==mid && x>y)
            {
                x = x-1;
                coin++;
            }
            else
            {
                if (y==mid && x<y)
                {
                    x = x+1;
                    coin++;
                }
                
            }
        }
        cout<<coin<<"\n";
    }
    return 0;
}