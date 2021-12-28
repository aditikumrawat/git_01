#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	while(true)
	{
		int x;
		cin>>x;
		if (x==42)
		{
			break;
		}
		cout<<x;
	}
	return 0;
}