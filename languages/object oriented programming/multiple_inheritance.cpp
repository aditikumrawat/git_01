#include<iostream>
using namespace std;
class base
{
   int a,b;
   public:
   void getdata()
   {
      cout<<"Enter 2 no: ";
      cin>>a>>b;
      cout<<endl;
   }

   void putdata()
   {
      cout<<"Value of a and b is "<<" "<<a<<" "<<"and"<<" "<<b;
      cout<<endl;
   }
};

class base_1
{
   int c,d;
   public:
   void getdata_1()
   {
      cout<<"Enter 2 no: ";
      cin>>c>>d;
      cout<<endl;
   }

   void putdata_1()
   {
      cout<<"Value of c and d is "<<" "<<c<<" "<<"and"<<" " <<d;
      cout<<endl;
   }
};
class derived : public base,public base_1
{
   char a[10];
   public:
   void get()
   {
      cout<<"\nEnter your name :";
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
   z.getdata_1();
   z.putdata_1();
   z.get();
   z.print();
   return 0;
}