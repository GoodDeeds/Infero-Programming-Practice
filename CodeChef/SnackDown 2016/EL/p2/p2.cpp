#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n,i,j,k,q,l,r,c,d,sum=0;
	cin>>n;
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
	cin>>q;
	while(q--)
	{
		sum=0;
		cin>>l>>r>>c>>d;
		for(i=l-1;i<r;i++)
		{
			sum+=max((long long)0,(a[i]*c-b[i]*d));
		}
		cout<<sum<<endl;
		fflush(stdout);
	}
	return 0;
}
