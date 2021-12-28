#include <iostream>
using namespace std;

class box
{
public:
    void setlength(double len)
    {
        length = len;
    }

    void setbreadth(double bre)
    {
        breadth = bre;
    }

    void setheight(double heig)
    {
        height = heig;
    }

    double getvolume(void)
    {
        return length * breadth * height;
    }
    box operator+(const box &b)
    {
        box result;
        result.length = this->length + b.length;
        result.breadth = this->breadth + b.breadth;
        result.height = this->height + b.height;
        return result;
    }

private:
    double length;
    double breadth;
    double height;
};

int main()
{
    box box1;
    box box2;
    box box3;

    double volume = 0.0;

    box1.setlength(1.0);
    box1.setbreadth(2.0);
    box1.setheight(1.0);

    box2.setlength(1.0);
    box2.setbreadth(1.0);
    box2.setheight(2.0);

    volume = box1.getvolume();
    cout << "Volume of Box1 : " << volume << endl;

    volume = box2.getvolume();
    cout << "Volume of Box2 : " << volume << endl;

    box3 = box1 + box2;
    volume = box3.getvolume();
    cout << "Volume of Box3 : " << volume << endl;

    return 0;
}