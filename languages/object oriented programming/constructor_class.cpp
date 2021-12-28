#include <iostream>
using namespace std;
class test
{
private:
    int a, b;
    public:
    test();
    void showdata();
};
test ::test()
{
    a = 10;
    b = 20;
}
void test :: showdata()
{
    cout<<a<<" "<<b;
}
int main()
{
    test t;
    t.showdata();
    return 0;
}