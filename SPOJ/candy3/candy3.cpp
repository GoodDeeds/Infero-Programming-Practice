#include<iostream>
using namespace std;
int main()
{
	unsigned long long int t,n,*c;
	cin>>t;
	for(unsigned long long int i=0;i<t;i++)
	{
		cin>>n;
		if(n==0)
		{
			cout<<"YES"<<endl;
			continue;
		}
		c=new unsigned long long int[n];
		unsigned long long int sum=0;
		for(unsigned long long int j=0;j<n;j++)
		{
			cin>>c[j];
			sum+=(c[j]%n);
			sum%=n;
		}	
		if(sum%n==0)
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
		
		
	}
	return 0;
}
