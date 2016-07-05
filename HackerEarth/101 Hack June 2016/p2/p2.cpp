#include<bits/stdc++.h>
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
	long long n,k,i,j,l,hcf;
	cin>>n>>k;
	long long *arr=new long long[n];
	long long minfac=0;
	if(n>1)
	{
		for(i=0;i<n;i++)
		{	
			cin>>arr[i];
			if(i==1)
			{
				hcf=gcd(arr[0],arr[1]);
			}
			else if(i>1)
			{
				hcf=gcd(hcf,arr[i]);
			}
		}
	}	
	else
	{
		cin>>arr[0];
		minfac=arr[0];
	}
	for(i=2;i<=sqrt(hcf);i++)
	{
		if(hcf%i==0)
		{
			minfac=i;
			break;
		}
	}
	if(minfac==0)
	{
		minfac=hcf;
	}
	long long q=k/minfac;
	long long res=(minfac*q);
	cout<<res<<endl;
	return 0;
}
