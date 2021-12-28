#include<iostream>
using namespace std;

int main()
{
    int T;
    cin>>T;
    int i,j;
    for(j=T;j>0;j--)
    {
        int draw=0,india=0,england=0;
        for(i=0;i<5;i++)
        { 
            int x ;
            cin>>x;
            if(x==2)
            {
                england += 1;
            }
            else if(x==1)
            {
                india += 1;
            }
            else
            {
                draw += 1 ;
            }
        }
        if(england>india)
        {
            cout<<"ENGLAND"<<endl;
        }
        else if(india>england)
        {
            cout<<"INDIA"<<endl;  
        }
        else if(india==england)
        {
            cout<<"DRAW"<<endl;
        }
    }
    return 0;
}