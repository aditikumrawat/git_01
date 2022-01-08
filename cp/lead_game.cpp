#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    int a1[t], a2[t];
    int leadp1 = 0, leadp2 = 0;
    while (t--)
    {
        int p1, p2;
        cin >> p1 >> p2;

        if (p1 > p2)
        {
            a1[leadp1] = p1 - p2;
            leadp1++;
        }
        else
        {
            if (p2 > p1)
            {
                a2[leadp2] = p2 - p1;
                leadp2++;
            }
        }
    }

    int max1 = a1[0];
    for (int i = 1; i < leadp1; i++)
    {
        if (max1 < a1[i])
            max1 = a1[i];
    }

    int max2 = a2[0];
    for (int i = 1; i < leadp2; i++)
    {

        if (max2 < a2[i])
            max2 = a2[i];
    }

    if (max1 > max2)
    {
        cout << "1"
             << " " << max1;
    }
    else if(max1==max2)
    {
        if(leadp1>leadp2)
        {
            cout << "1"
             << " " << max1;
        }
        else
        {
            cout << "1"
             << " " << max2;
        }
        
    }
    else
    {
        cout << "1"
             << " " << max2;
    }

    return 0;
}
