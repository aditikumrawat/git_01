#include <iostream>
using namespace std;

int main()
{
    long long n;
    long sum_odd,sum_even;
    cin >> n;
    sum_odd = n*n;
    sum_even = n*(n+1);
    cout << sum_odd << " " << sum_even;
    return 0;
}