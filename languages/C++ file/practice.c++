#include <iostream>
using namespace std;
int main()
{
    char s[] = "string";
    char* cp = s;
    for(; *cp; cp++);
    int i = cp-s;
    cout << i;
    return 0;
}