#include<iostream>
using namespace std;

void natural_number(int n)
{
    if(n>0)
    {
        natural_number(n-1);
        cout<<n<<" ";
    }
}

int main()
{
    int last_element = 50;
    natural_number(last_element);
    return 0;
}