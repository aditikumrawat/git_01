#include<iostream>
using namespace std;

int main()
{
    //Missing element in natural number list
    int s=0,sum=0,ne=0;
    int A[] = {1,2,3,4,5,6,8,9,10,11,12};
    for (int i = 0; i <= 11; i++)
    {
        sum += A[i];
    }
    s = 12*(12+1)/2;
    ne = s-sum;
    cout<<"Missing element : "<<ne;
    return 0;
}
