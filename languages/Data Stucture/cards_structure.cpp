#include<iostream>
using namespace std;

struct card{
    int face;
    int shape;
    int colour;
};
int main()
{
    struct card c[52] ={{1,0,0},{1,1,1}};  // first value is for first member and further follow same method
    cout<<c[0].shape;  
    return 0;
}