#include<iostream>
using namespace std;

class student{
    int marks;
    public:
    void getdata();
    void putdata();
};

int main()
{
    student s;
    s.getdata();
    s.putdata();
    return 0;
}

void student::getdata()
{
    cout<<"Enter your mark : ";
    cin>>marks;
}
void student::putdata()
{
    cout<<"Marks: "<<marks;
}