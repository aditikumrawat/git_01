#include <iostream>
using namespace std;

int countf(int index, int sum, int arr[], int n)
{
    if (index == n)
    {
        if (sum == 0)
        {
            return 1;
        }
        return 0;
    }

    int l=0,r=0;

    if(arr[index]<=sum)
    {
        sum-=arr[index];
        l = countf(index,sum,arr,n);
        sum+=arr[index];
    }

    r = countf(index+1,sum,arr,n);

    return l+r;

}

int main()
{
    int ind=0,n=5;
    int s= 4;
    int a[5] = {1,2,3};
    int out = countf(ind,s,a,n);
    cout<<out;
    return 0;
}