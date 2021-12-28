#include<iostream>
using namespace std;

void swap(int &a,int &b)
{
	a = a+b;
	b = a-b;
	a = a-b;
}

void reverse(int a[],int num)
{
	int i=0,j=num-1;
	for(i,j;i<num,j>0;i++,j--)
	{
		if(i<j)
		{
            swap(a[i],a[j]);
		}
	}
}

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int arr[n];
	for (int i = 0; i < n;i++)
	{
		cin>>arr[i];
	}
	reverse(arr,n);
    for(int j =0;j<n;j++)
    {
    	cout<<arr[j]<<" ";
    }
	return 0;
}