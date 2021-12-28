#include<iostream>
using namespace std;

void display(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

void reverse(int *arr,int start,int end)
{
   for (int i = 0; i < end; i++)
   {
      int temp = arr[start];
      arr[start] = arr[end];
      arr[end] = temp;
      start++;
      end--;
   }
   
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
    cout<<"Before revering the array: ";
    display(A,num);
    reverse(A,0,num-1);
    cout<<"\nAfter revering the array: ";
    display(A,num);
    return 0;
}