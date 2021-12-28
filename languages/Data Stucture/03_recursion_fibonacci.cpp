#include <iostream>
using namespace std;

void fibonacci(int terms)
{
    static int next_no;
    static int start = 0;
    static int end = 1;

    if(terms>2)
    {
        next_no = start + end;
        start = end;
        end = next_no;
        cout<<next_no<<" ";
        fibonacci(terms-1);
    }

}

int main()
{
    int num;
    cout << "Enter the last number from 1 to 20 to print fibonaaci series : ";
    cin >> num;
    cout<<0<<" "<<1<<" ";
    fibonacci(num);
    return 0;
}
