#include<iostream>
using namespace std;

int main()
{
	long long t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		if(n%6==0)
		{
			cout<<"Misha"<<endl;
		}
		else
		{
			cout<<"Chef"<<endl;
		}
	}
	return 0;
}
