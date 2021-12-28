#include <iostream>
using namespace std;

void reverse(int arr[], int num)
{
    for (int i = num-1 ; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    reverse(a, n);
    return 0;
}