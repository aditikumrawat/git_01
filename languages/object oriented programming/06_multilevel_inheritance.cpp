#include <iostream>
using namespace std;
class vehical
{
public:
    string category;
    int reg_no;
    void get_data_of_vehical()
    {
        cout << "Write your vehical category : ";
        cin >> category;
        cout << "Your vehical number : ";
        cin >> reg_no;
    }
};

class fourwheeler : public vehical
{
public:
    int module_no, issue_year;
    string company;
    void gat_data_of_fourwheeler()
    {
        cout << "Write molule_no of your fourwheeler : ";
        cin >> module_no;
        cout << "Write issue year of your fourwheeler : ";
        cin >> issue_year;
        cout << "Company name of your fourwheeler : ";
        cin >> company;
    }
};

class car : public fourwheeler
{
public:
    //int car_no;
    void output()
    {
        cout << "Your car details are....";
        cout << endl;
        fourwheeler f;
        f.get_data_of_vehical();
    }
};

int main()
{
    car c;
    c.output();
    c.gat_data_of_fourwheeler();
    return 0;
}