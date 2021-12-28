#include<iostream>
using namespace std;

int main()
{
    int t;
    long num;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>num;
        long sum=0;
        while(num>0)
        {
            int ld=num%10;
	        sum=sum+ld;
	        num=num/10;
        } 
        cout<<sum<<endl;
    }
    return 0;
}

// #include <iostream>
// using namespace std;

// int main() {
// 	int t;cin>>t;
// 	while(t--)
// 	{long n;cin>>n;
// 	    long sum=0;
// 	    while(n>0)
// 	    {
// 	        int ld=n%10;
// 	        sum=sum+ld;
// 	        n=n/10;
// 	    }
// 	    cout<<sum<<endl;
// 	}
// 	return 0;
// }