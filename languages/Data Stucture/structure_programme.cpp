#include<iostream>
using namespace std;

struct Rectangle{
    public:
    int length;
    int breadth;
    char shape[20];
};
int main()
{
    struct Rectangle r;
    r.length = 10;
    r.breadth = 20;
    r.shape = "Rectangle";
    cout<<"\nArea of Rectangle is : "<<r.length*r.breadth;
    return 0;
}