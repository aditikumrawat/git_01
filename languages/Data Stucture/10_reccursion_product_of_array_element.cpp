#include<iostream>
using namespace std;

int product(int arr[],int n)
{
    static int res=1,s=1;
    if(n>0)
    {
       res = arr[n]*product(arr,n-1);
    }
    return res;

}

int main()
{
    int num = 4;
    int arr[]={1,2,3,4,5};
    int result = product(arr,num);
    cout<<"Product is here: "<<result;

    return 0;
}