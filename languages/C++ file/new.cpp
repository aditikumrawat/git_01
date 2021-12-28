#include<iostream>
using namespace std;

class base
{
    int a,b;
    public:
    void getdata()
    {
        cout<<"Enter 2 number with space : "<<endl;
        cin>>a>>b;
        cout<<endl;
    }

    void putdata()
    {
        cout<<"Value of a and b is "<<a<<" "<<"and "<<b;
    }
};
class derived:public base
{
   char a[0];
   public:

   void get()
   {
       cout<<"Enter your name : ";
       cin>>a;
   }

   void print()
   {
       cout<<a;
   }
};

int main()
{
    derived z;
    z.getdata();
    z.putdata();
    z.get();
    z.print();
}