#include<iostream>
using namespace std;

int main()
{
    int *p = new int[5];
    for (int i = 0; i < 5; i++)
    {
        cout<<"Enter: ";
        cin>>p[i];
    }

    for (int i = 0; i < 5; i++)
    {
        cout<<p[i];
    }
    return 0;
}