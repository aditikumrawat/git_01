#include <iostream>
using namespace std;

class rectangle
{
private:
    float height;
    float width;

public:
    rectangle(float, float);
    void showdata();
};

rectangle::rectangle(float h,float w){
    height = h;
    width = w;
    h = 10;
    w = 20;
}

void rectangle :: showdata()
{
    cout<<height<<" "<<width;
}

int main()
{
    rectangle rc(3.0,2.0);
    return 0;
}