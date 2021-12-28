#include<iostream>
using namespace std;

double taylor_series(double x,double num)
{
   static double sum = 1;
   if(num==0)
    {
       return sum;
    }
    sum = 1+x*sum/num;

    return taylor_series(x,num-1);
   
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