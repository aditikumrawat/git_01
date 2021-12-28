#include <iostream>
using namespace std;
void square(int i)
{
    cout << "Here is square of int is " << i * i << endl;
}

void square(double j)
{
    cout << "Here is square of double is " << j * j << endl;
}
int main()
{
    square(10);
    square(2.5);
    return 0;
}