//Remove this line before running - Score 119
#include<iostream>
using namespace std;
int main()
{
	long t,i,n,sum=0;
	cin>>t;
	for(i=0;i<t;i++)
	{
		cin>>n;
		if(n>0)
			sum+=n;
	}
	cout<<sum;		
}
