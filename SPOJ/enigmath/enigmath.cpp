#include<iostream>

using namespace std;
long long int max(long long int a, long long int b)
{
	if(a>b)
	{
		return a;
	}
	return b;
}
long long int min(long long int a, long long int b)
{
	if(a<b)
	{
		return a;
	}
	return b;
}
long long int gcd(long long int p, long long int q)
{
	long long int r=p%q;
	long long int d=q;
	long long int d2,r2;
	while(r!=0)
	{
		r2=r;
		r=d%r;
		d=r2;
	
	}
	return d;
}
int main()
{
	long long int t,a,b,i,j;
	cin>>t;
	for(i=0;i<t;i++)
	{
		cin>>a>>b;
		//for(j=2;j<=min(a,b);j++)
		//{
			//while(a%j==0 && b%j==0)
			//{
				//a/=j;
				//b/=j;
		//	}
		//}
		long long int g=gcd(max(a,b),min(a,b));
		long long int a2=a/g;
		long long int b2=b/g;
		
		cout<<b2<<" "<<a2<<endl;
	}
	return 0;
}
