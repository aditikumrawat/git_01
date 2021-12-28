#include <iostream>
using namespace std;
void swap(int &a, int &b)
{
    a = a + b;
    b = a - b;
    a = a - b;
}

void display(int *array, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
}

void bubble_sort(int *array,int size)
{
   for(int i=0;i<size-1;i++)
   {
       int swap_num = 0;
       for (int j = 0 ; j <size-2; j++)
       {
           if(array[j]>array[j+1])
           {
               swap(array[j],array[j+1]);
               swap_num = 1;
           }
       }
       if(!swap_num)
       break;
   }
}
int main()
{
    int num ;
    cout<<"Enter the number of elements: ";
    cin>>num;
    int arr[num];
    for(int i = 0;i<num;i++)
    {
        cout<<"Enter the element "<<i<<": ";
        cin>>arr[i];
    }
    cout<<"Array brfore sorting : ";
    display(arr,num);
    bubble_sort(arr,num);
    cout<<endl;
    cout<<"Array after sorting : ";
    display(arr,num);
    return 0;
}