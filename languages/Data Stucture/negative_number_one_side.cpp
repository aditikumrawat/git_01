#include <iostream>
using namespace std;

void swap(int &a, int &b)
{
    a = a + b;
    b = a - b;
    a = a - b;
}

void negative_one_side(int A[], int num)
{
    int i = 0;
    int j = num - 1;
    while (i <= j)
    {
        while (A[i]<0)
        {
           i++;
        }
        while (A[j]>0)
        {
            j--;
        }
        swap(A[i],A[j]);
    }
}
int main()
{
    int n;
    cin >> n;
    int Arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> Arr[i];
    }
    negative_one_side(Arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << Arr[i] << " ";
    }

    return 0;
}