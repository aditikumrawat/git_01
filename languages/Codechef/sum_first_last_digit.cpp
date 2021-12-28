#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,r;
        cin>>n;
        int lastdigit = n%10;
        while (n>=1)
        {
            r = n%10;
            n = n/10;
        }
        cout<<lastdigit+r<<endl;
    }
    return 0;
}

// #include <iostream>
// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int sum, r;
//         int n;
//         cin >> n;
//         sum = n % 10;
//         while (n >= 1)
//         {
//             r = n % 10;
//             n = n / 10;
//         }

//         cout << sum + r << endl;
//     }

//     return 0;
// }