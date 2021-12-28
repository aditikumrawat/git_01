#include <iostream>
using namespace std;

class vehical
{
public:
    int number_plate, registeration_date;
    void get_vehical_data()
    {
        cout << "Enter your vehical number : ";
        cin >> number_plate;
        cout << "Registration year of your vehical : ";
        cin >> registeration_date;
    }
};

class fourwheeler
{
public:
    int number_plate, registeration_date;
    void get_fourwheeler_data()
    {
        cout << "Enter your fourwheeler number : ";
        cin >> number_plate;
        cout << "Registration year of your fourwheeler : ";
        cin >> registeration_date;
    }
};

class car : public vehical, public fourwheeler
{
public:
    void out()
    {
        cout << "Your car details....";
        cout<<endl;
    }
};
int main()
{
    car c;
    c.out();
    c.get_vehical_data();
    c.get_fourwheeler_data();
    return 0;
}