#include <iostream>
using namespace std;
class car
{
public:
    int car_num;
    char answer_car;
    void car_number()
    {
        cout << "Enter your car number :";
        cin >> car_num;
    }
    void solution()
    {
        cout<<"for car...";
        cout << "\nYour issue is solved or not (Y/N) :";
        cin >>answer_car;
    }
};

class fare
{
public:
    char anwser_fare;
    void yes_no()
    {
        cout << "\nYour issue is solved or not (Y/N) :";
        cin >> anwser_fare;
    }
};

class vehical : public car
{
public:
    void output()
    {
        car c;
        c.solution();
    }
};

class bus : public vehical, public fare
{
public:
    void fare_bus()
    {
        cout<<"for bus....."<<endl;
        fare f;
        f.yes_no();
    }
};
int main()
{
    bus b;
    b.output();
    b.fare_bus();
    return 0;
}