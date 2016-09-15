//Help from Chandra Kiran
#include<bits/stdc++.h>
using namespace std;
/*vector<long long> primes;
long long f(long long num)
{
	/*long long i,s=sqrt(num);
	for(i=0;i<primes.size();i++)
	{
		if(primes[i]>s)
		{
			break;
		}
		
	}*/
	/*for(long long i=2;i<=sqrt(num);i++)
	{
		if(num%i==0)
		{
	//		cout<<i<<endl;
			return i;
		}
	}
	return num;
}
int main()
{
	long long t,i,j,k,n;
	cin>>t;
	primes.clear();
	long long *arr=new long long[10000000];
	for(i=0;i<10000000;i++)
	{
		arr[i]=-1;
	}
	arr[0]=arr[1]=0;
	long long max_n=1;
	while(t--)
	{
		cin>>n;
		if(arr[n]!=-1)
		{
			cout<<arr[n]<<endl;
			continue;
		}
		for(i=max_n+1;i<=n;i++)
		{
			arr[i]=arr[i-1]+f(i);
		//	cout<<"i: "<<i<<" arr[i]: "<<arr[i]<<" f: "<<f(i)<<endl;
		}
		max_n=n;
		cout<<arr[n]<<endl;
	}
	return 0;
}*/
long long farr[10000000];
int main()
{
	long long t,i,j,k,n,max_n=1;
	cin>>t;
	long long *arr=new long long[10000000];
	for(i=2;i<10000000;i++)
	{
		if(farr[i]==0)
		{
			for(j=i;j<10000000;j+=i)
			{
				if(farr[j]==0)
				{
					farr[j]=i;
				}
			}
		}
	}
	arr[0]=arr[1]=0;
	while(t--)
	{
		cin>>n;
		if(n<=max_n)
		{
			cout<<arr[n]<<endl;
			continue;
		}
		for(i=max_n+1;i<=n;i++)
		{
			arr[i]=arr[i-1]+farr[i];
		}
		cout<<arr[n]<<endl;
		max_n=n;
		
	}
}
