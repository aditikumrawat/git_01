#include<iostream>
using namespace std;
class rectangle
{
    private:
    float height:
    float width:
    int xpos:
    int ypos:
    public:
    rectangle(float,float);
};
rectangle :: rectangle(float h,float w) 
{
   height = h;
   width = w;
}
int main()
{ 
    rectangle rc(3.0,2.0);
    return 0;
}