#include <iostream>
#include<cstdlib>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        int narr[n];
        int i=0,count=1;
        narr[i] = arr[i];
        while (i<n)
        {
            for (int j = 0; j < n; j++)
            {
                if (abs(arr[++i])==j)
                {
                    
                }
                
            }
            
            
        }
         
    }


}







// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         int arr[n];
//         for (int i = 0; i < n; i++)
//             cin >> arr[i];
//         int i = 0, j = 1, count = 1;
//         int narr[n];
//         while (j < n)
//         {
//             if (arr[i] == arr[j])
//             {
//                 negotiation takes place
//                 if (arr[i] != 0)
//                 {
//                     narr[i] = arr[i];
//                     narr[j] = -(arr[j]);
//                     i++;
//                     j++;
//                     count++;
//                 }
//                 else
//                 {
//                     i++;
//                     j++;
//                 }
                
//             }
//             else
//             {
//                 narr[i] = arr[i];
//                 narr[j] = arr[j];
//                 i++;
//                 j++;
//                 count++;
//             }
//         }
//         cout << count << endl;
//     }
//     return 0;
// }