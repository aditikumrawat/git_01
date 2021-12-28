#include <iostream>
using namespace std;
struct student
{
    int a;
    double b;
};
//we can define variable before above semicolon,if we don't want to intialize in main()
int main()
{
    student s1, s2;
    cin >> s1.a;
    cin >> s1.b;
    cout << s1.a << endl;
    cout << s1.b << endl;
    s2=s1;
    //cin >> s2.a; work
    //cin >> s2.b; work
    cout << s2.a << endl;
    cout << s2.b << endl;
    return 0;
}