#include <iostream>
using namespace std;

void find(int arr[], int search, int n)
{
    int count = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == search)
        {
            count = 1;
            break;
        }
    }
    cout << count;
}
int main()
{
    int size, num;
    cin >> size >> num;
    int a[size];
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }
    find(a,num,size);
    return 0;
}