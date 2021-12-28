#include <iostream>
using namespace std;

int main()
{
    int A[] = {6, 7, 8, 9, 11, 12, 13};
    int diff = 6, n = 7;
    for (int i = 0; i < n; i++)
    {
        if (A[i] - i != diff)
        {
            cout << "Missing element found : " << i + diff;
            break;
        }    
    }

    return 0;
}