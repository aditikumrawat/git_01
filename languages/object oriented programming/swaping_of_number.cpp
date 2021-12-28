#include <iostream>
using namespace std;

class swaping
{
    int num1, num2, temp;

public:
    void using_third_variable();
    void without_using_third();
};

int main()
{
    swaping s;
    s.using_third_variable();
    s.without_using_third();
    return 0;
}
void swaping::using_third_variable()
{
    cout << "Using third variable" << endl;
    cout << "Enter 1st number : ";
    cin >> num1;
    cout << "Enter 2nd number : ";
    cin >> num2;
    temp = num1;
    num1 = num2;
    num2 = temp;
    cout << "After swaping : " << endl;
    cout << "1st number:" << num1<<endl;
    cout << "2nd number:" << num2<<endl;
}
void swaping::without_using_third()
{
    cout << "Without Using third variable" << endl;
    cout << "Enter 1st number : ";
    cin >> num1;
    cout << "Enter 2nd number : ";
    cin >> num2;
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;
    cout << "After swaping :" << endl;
    cout << "1st number:" << num1<<endl;
    cout << "2nd number:" << num2<<endl;
}
