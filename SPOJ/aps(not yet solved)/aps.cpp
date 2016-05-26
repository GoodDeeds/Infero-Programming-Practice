//getting time limit exceeded
#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
vector<long long int> farr(10000000);
long long int f(long long int x)
{
	if(farr[x]!=-1)
	{
		return farr[x];
	}
	for(long long int i=2;i<=sqrt(x);i++)
	{
		if(x%i==0)
		{
			farr[x]=i;
			return i;
		}
	}
	farr[x]=x;
	return x;
}
int main()
{
	long long int t,n,i,j,k,l;
	cin>>t;
	vector<long long int> arr(10000000);
	
	for(i=0;i<10000000;i++)
	{
		arr[i]=-1;
		farr[i]=-1;
	}
	arr[0]=0;
	arr[1]=0;
	for(i=0;i<t;i++)
	{
			cin>>n;
		if(arr[n]!=-1)
		{
			cout<<arr[n]<<endl;
			continue;
		}
		for(j=n;j>=0;j--)
		{
			if(arr[j]!=-1)
			{
				for(k=j+1;k<=n;k++)
				{
					arr[k]=arr[k-1]+f(k);
				}
				cout<<arr[n]<<endl;
				break;
			}
		}
				
	}
	return 0;
	
}
