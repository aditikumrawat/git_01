#include<iostream>
using namespace std;

double taylor_series(double x,double num)
{
   static double pow = 1;
   static double fact = 1;
   double result;
   if(num==0)
   {
       return 1;
   }
   else
   {
       result = taylor_series(x,num -1);
       pow *= x;
       fact *= num;
       return result +pow/fact;
   }
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