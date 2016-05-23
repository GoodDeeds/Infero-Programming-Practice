#include<iostream>
using namespace std;
int main()
{
	long long int t,n,i,j,k,l;
	cin>>t;
	for(i=0;i<t;i++)
	{
		cin>>n;
		int flag=0;
		for(j=0;j<=n/5;j++)
		{
			k=n-j*5;
			if(k%3==0)
			{
				flag=1;
				break;
			}
		}	
		if(flag==0)
		{
			cout<<"-1"<<endl;
		}
		else
		{
			for(j=0;j<k;j++)
			{
				cout<<"5";
			}
			for(j=0;j<n-k;j++)
			{
				cout<<"3";
			}
			cout<<endl;
		}
	}
	return 0;
}
