#include <iostream>
using namespace std;

double taylor_series(double x, double num)
{
    double s = 1;
    double ne = 1;
    double den =1;
    for (int i = 1; i <= num; i++)
    {
        ne *= x;
        den *= i;
        s += num/den;
    }
    return s;
}
int main()
{
    double num;
    double last;
    cout<<"Enter the value of x in taylor series: ";
    cin>>num;
    cout<<"The last term of your series in number form: ";
    cin>>last;
    double out = taylor_series(num,last);
    cout<<"Sum:"<<out;
    return 0;
}