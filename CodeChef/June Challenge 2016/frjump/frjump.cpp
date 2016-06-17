#include<iostream>
#include<cmath>
#include<iomanip>
#define MOD 1000000007
using namespace std;
int main()
{
	long long n,q,i,j,k,typ,first,sec;
	cin>>n;
	long long *f=new long long[n];
	for(i=0;i<n;i++)
	{
		cin>>f[i];
	}
	cin>>q;
	while(q--)
	{
		cin>>typ;
		if(typ==1)
		{
			cin>>first>>sec;
			f[first-1]=sec;
		}
		else if(typ==2)
		{
			cin>>first;
			long long res=1;
			for(i=0;i<n;i+=first)
			{
				res*=f[i];
			}
			long double temp=(long double)(log10(res));
			long double frac=temp-floor(temp);
			long double ans1=(long double)(pow(10,frac+1e-10));
			int ans=floor(ans1);
			
			//cout<<"inter: "<<temp<<" "<<frac<<" "<<ans1<<" "<<ans<<endl;
			res%=MOD;
			cout<<ans<<" "<<res<<endl;
		}
	}
	return 0;
}
