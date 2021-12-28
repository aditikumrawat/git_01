#include<iostream>
using namespace std;
class A{
    public:
    void f(){
        cout<<"Class A"<<endl;
    }
};

class B::public A{
    public:
    void f(){
        cout<<"Class B"<<endl;
    }
};

void g(A& arg)
{
    arg.f();
}
int main()
{
    B x;
    g(x);
    return 0;
}