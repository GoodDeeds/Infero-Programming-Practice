#include<bits/stdc++.h>
using namespace std;
long long lcm(long long a,long long b)
{
	long long prod=a*b;
	
	
	while(a!=b)
	{
		if(a<b)
		{
			b-=a;
		}
		else
		{
			a-=b;
		}
	}
	return (prod/a);
}
/*long long lcm(long long a,long long b)
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
}*/
int main()
{
	long long n,a,b,p,q,i,j,k,res=0;
	cin>>n>>a>>b>>p>>q;
	res+=(p*(n/a));
	res+=(q*(n/b));
	if(p<q)
	{
		res-=(p*(n/lcm(a,b)));
	}
	else
	{
		res-=(q*(n/lcm(a,b)));
	}
	cout<<res<<endl;
	return 0;
}
