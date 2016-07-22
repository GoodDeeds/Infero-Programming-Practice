#include<iostream>
#include<cmath>
using namespace std;
long long gcd(long long a,long long b)
{
	while(b!=0)
	{
		long long r=a%b;
		a=b;
		b=r;
	}
	return a;
}

int main()
{
	long long t,a,b,c,d,i,j,k,diff,hcf,temp,res;
	cin>>t;
	while(t--)
	{
		cin>>a>>b>>c>>d;
		if(a>=b)
		{
			diff=a-b;
		}
		else
		{
			diff=b-a;
		}
		
		hcf=gcd(c,d);
		
		temp=diff/hcf;
		res=min((diff-(hcf*temp)),((hcf*(temp+1))-diff));
		cout<<res<<endl;
	}
	return 0;
}	
