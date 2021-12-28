#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int t;
    cin>>t;
    long long int arr[t];
    for (int i = 0; i < t; i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+t);
    long long int max_revenue=0;
    for (int i = 0; i < t; i++)
    {
       long long int revenue = arr[i]*(t-i);
       if (revenue>max_revenue)
       {
           max_revenue = revenue;
       } 
    }
    cout<<max_revenue;
    return 0;
}