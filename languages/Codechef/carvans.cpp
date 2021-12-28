#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int num, count = 1;
        cin >> num;
        int A[num];
        for (int i = 0; i < num; i++){
            cin >> A[i];
        }
        int min = A[0];
        for (int i = 1; i < num; i++)
        {
           if(A[i] <= min)
           {
               count++;
           }
           if (A[i]<min)
           {
               min=A[i];
           }
        }
        cout<<count<<endl;
    }
    return 0;
}