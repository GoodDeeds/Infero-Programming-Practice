#include<bits/stdc++.h>
using namespace std;
long long lcm(long long a,long long b)
{
	long long maxval=max(a,b);
	long long minval=min(a,b);
	long long q=maxval/minval;
	long long lcmval=q*minval;
	
	while(lcmval%maxval!=0)
	{
		lcmval+=minval;
	}
	return lcmval;
}
int main()
{
	long long n,a,b,p,q,i,j,k,res=0,temp;
	cin>>n>>a>>b>>p>>q;
	temp=a;
	while(temp<=n)
	{
		if(p<q && temp%b!=0)
		{
			res+=p;
		}
		else if(p>=q)
		{
			res+=p;
		}
		temp+=a;
		
	}
	temp=b;
	while(temp<=n)
	{
		if(q<=p && temp%a!=0)
		{
			res+=q;
		}
		else if(p<q)
		{
			res+=q;
		}
		temp+=b;
	}
	
	
	cout<<res<<endl;
	return 0;
}
