#include<iostream>
using namespace std;

int main()
{
    int a = 25;
    int &ref = a;
    cout<<a<<endl;
    cout<<ref;
    return 0;
}