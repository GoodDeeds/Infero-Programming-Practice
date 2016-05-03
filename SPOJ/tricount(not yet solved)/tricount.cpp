#include<iostream>
using namespace std;
int main()
{
	long t,n;
	for(long i=0;i<t;i++)
	{
		cin>>n;
		long sum=0;
		for(long j=0;j<n;j++)
		{
			sum+=j^2;
		}
	}
}
