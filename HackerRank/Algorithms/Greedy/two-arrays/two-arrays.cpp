#include<bits/stdc++.h>
using namespace std;
bool desc(long long a,long long b)
{
	return a>b;
}
int main()
{
	long long t,n,k,i,j;
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		long long *a=new long long[n];
		long long *b=new long long[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		for(i=0;i<n;i++)
		{
			cin>>b[i];
		}
		sort(a,a+n);
		sort(b,b+n,desc);
		int flag=0;
		for(i=0;i<n;i++)
		{
			if((a[i]+b[i])<k)
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
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
