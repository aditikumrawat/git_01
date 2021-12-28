#include<iostream>
using namespace std;

template<class s>
class student
{
public:
    char *name;
    s roll_no;
    s no ; 
    void get(s a,s num);
};

template<class s>
void set(s a,s num)
{
    roll_no = a;
    no = num;
    cout<<roll_no;
}
int main()
{
   int num1=09;
   int num2=123;
   set<int>(num1,num2);
    return 0;
}