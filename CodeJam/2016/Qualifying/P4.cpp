#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	long t,k,c,s;
	cin>>t;
	for(long i=0;i<t;i++)
	{
		cin>>k>>c>>s;
		if(k==s)
		{
			cout<<"Case #"<<i+1<<": ";	
			for(long j=0;j<k;j++)
			{
				cout<<j+1<<" ";
			}
			cout<<endl;
	    }
	    else
	    {
	    	if(k==c)
			{
				int sum=0;
				for(int j=1;j<c;j++)
				{
					sum+=j*pow(k,(c-(j+1)));
				}
				cout<<"Case #"<<i+1<<": "<<sum+1<<endl;
				continue;
			}
			if(k<c)
			{
				int sum=0;
				for(int j=1;j<k;j++)
				{
					sum+=j*pow(k,(c-(j+1)));
				}
				sum+=(sum-1)^(c-k);
				cout<<"Case #"<<i+1<<": "<<sum+1<<endl;
				continue;
			}
	    }
	}
	return 0;
}
