#include<iostream>
using namespace std;

class A
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
class derived_1 : virtual public A
{
   int c,d;
   public:
   void getdata_1()
   {
      cout<<"Class B"<<endl;
      cout<<"Enter 2 no: ";
      cin>>c>>d;
      cout<<endl;
   }

   void putdata_1()
   {
      cout<<"Class B"<<endl;
      cout<<"Value of c and d is "<<" "<<c<<" "<<"and"<<" "<<d;
      cout<<endl;
   }
};

class derived_2 : virtual public A
{
   int c,d;
   public:
   void getdata_2()
   {
      cout<<"Class C"<<endl;
      cout<<"Enter 2 no: ";
      cin>>c>>d;
      cout<<endl;
   }

   void putdata_2()
   {
      cout<<"Class C"<<endl;
      cout<<"Value of c and d is "<<" "<<c<<" "<<"and"<<" "<<d;
      cout<<endl;
   }
};

int main()
{   
   derived_1 z;
   z.getdata();
   z.putdata();
   z.getdata_1();
   z.putdata_1();

   derived_2 y;
   z.getdata();
   z.putdata();
   y.getdata_2();
   y.putdata_2();
    return 0;
}