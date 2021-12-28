#include<iostream>
using namespace std;

void linear_search(int *arr,int num,int search_element)
{
    int temp=0;
   for (int i = 0; i <= num ; i++)
   {
       if(arr[i]==search_element)
       {
           cout<<"Your element is present on index "<<i;
           temp = 1;
           break;
       }
   }
   if(temp==0)
   {
       cout<<"\nYour number is not present in the list.";
   }
}
int main()
{
    int num,n;
    cout<<"Enter the number of elements you want in an array : ";
    cin>>num;
    int array[num];
    for(int i = 0;i<=num;i++)
    {
        cout<<"Enter value for "<<i<<" :";
        cin>>array[i];
    } 
    cout<<"\nWhich element you want to search :";
    cin>>n;
    linear_search(array,num,n);
    return 0;
}