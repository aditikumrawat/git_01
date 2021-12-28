#include<iostream>
using namespace std;

int sum(int arr[],int n)
{
    static int sum = 0;
    if(n>0)
    {
        sum = arr[n] + sum(arr,n-1);
    } 
    return sum;
}

int check(int sum,int k)
{
    int half;
    if(sum%k==0)
    {
        half = sum/k;
        if(x!=sum)
        {
            sum()
        } 
        
    }
}

int main()
{
    return 0;
}