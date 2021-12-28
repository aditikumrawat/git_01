#include<iostream>
#include<string.h>
using namespace std;

struct student{
    int roll_num;
    char name[20];
};
int main()
{
    student s;
    strcpy(s.name,"aditi");
    cout<<strcpy(s.name,"aditi");
    return 0;
}