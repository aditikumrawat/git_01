#include<iostream>
using namespace std;

struct student
{
    int roll_no;
    int *name;
};

int main()
{
    student s;
    s.name = "aditi";
    cout<<s.name;
    return 0;
}