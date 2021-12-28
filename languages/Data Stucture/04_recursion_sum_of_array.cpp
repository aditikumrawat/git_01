#include<iostream>
using namespace std;

int sum_of_arr(int arr[],int n)
{
    static int sum = 0;
    if(n>=0)
    {
      sum = arr[n] + sum_of_arr(arr,n-1);
    }
    return sum;
}
int main()
{
    static int out=0,element=0,num=0;
    cout<<"Enter the size of array : ";
    cin>>element;
    int arr[element];
    for ( int i = 0; i < element; i++)
    {
       cout<<"Enter element "<<i<<" : ";
       cin>>arr[i];
    }
    out = sum_of_arr(arr,element);
    cout<<out;
    return 0;
}