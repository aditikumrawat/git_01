#include <iostream>
using namespace std;

int sum(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}

void subset(int ind, vector<int> &ds, int size, int sum)
{
    int sum_equal=0
    if (ind == size && sum_equal==sum)
    {
        if(ds.size() != 0)
        {
            for(auto it : ds)
            {
                cout<<it<<" ";
            }
        }
        return ;
    }

    ds.push_back(a[ind]);
    equal_sum += arr[ind]
    
}
int main()
{
    //Number of elements
    int n, k;
    int i int set[n];
    for (i = 0; i < n; i++)
    {
        cin >> set[i];
    }
    int sum_set = sum(set, n);
    if (sum_set % k == 0)
    {
        subset(0,set,);
    }
    else
    {
        cout << "\nThe k subset of your given set can't be formed."
    }
    return 0;
}