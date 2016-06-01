#include<iostream>
using namespace std;
int main()
{
	long long t,n,k,i,j,l;
	cin>>t;
	for(i=0;i<t;i++)
	{
		cin>>n>>k;
	
		if(k==0)
		{
			for(j=1;j<=n;j++)
			{
				cout<<j<<" ";
			}
			cout<<endl;
		}	
		else if(n%2==1)
		{
			cout<<"-1"<<endl;
		}
		else if(n%(2*k)!=0)
		{
			cout<<"-1"<<endl;
		}
		else
		{
			long long low=1;
			long long high=2*k;
			while(high<=n)
			{
				for(j=(low+k);j<=high;j++)
				{
					cout<<j<<" ";
				}
				for(j=low;j<(low+k);j++)
				{
					cout<<j<<" ";
				}
				low+=(2*k);
				high+=(2*k);
			}
			cout<<endl;
		}
	}
	return 0;
}
