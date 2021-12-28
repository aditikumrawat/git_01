#include<iostream>
using namespace std;

void display(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

void Array_Min(int *arr,int size)
{
    if(size==0)
    {
        cout<<"Your minimum element is : "<<arr[0];
    }
    int min;
    for (int i = 0; i < size; i++)
    {
        min = arr[0];
        if (arr[i]<min)
        {
           min = arr[i];
        }
    }
    cout<<"\nMinimum element of an array : "<<min;
     
}

void Array_Max(int *arr,int size)
{
    if(size == 0)
    {
        cout<<"Your maximum number of element is "<<arr[0];
    }
    int max;
    for ( int i = 0; i < size; i++)
    {
        max = arr[0];
        if (arr[i]>max)
        {
           max = arr[i];
        }
    }
    cout<<"\nMaximum element of an array : "<<max;

}
int main()
{
    int num;
    cout<<"Enter the size of array: ";
    cin>>num;
    int A[num];
    for (int i = 0; i <= num; i++)
    {
       cout<<"Enter the values of array : ";
       cin>>A[i];
    }
    cout<<"Your Array elements are : ";
    display(A,num);
    Array_Min(A,num);
    Array_Max(A,num);
    return 0;
}