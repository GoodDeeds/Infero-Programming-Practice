#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;

long long maxexp(long long arr[],long long size, long long index,long long s,int stat,long long cumu[])
{
	long long res=0;
	
	/*if(hold[index][s]!=-1)
	{
		return hold[index][s];
	}
	if(index==(size-1))
	{
		return (p+s*arr[index]);
	}
	long long res=max(maxexp(arr,size,index+1,s+1,p,hold),maxexp(arr,size,index+1,s,(p+(s*arr[index])),hold));
	hold[index][s]=res;
	return res;*/
	if(index==(size-1))
	{
		res=s*arr[index];
		
	}
	else if(stat==0)
	{
		res=max(maxexp(arr,size,index+1,s+1,0,cumu),maxexp(arr,size,index,s,1,cumu));
	//	cout<<"Hello "<<res<<endl;
	}
	else if(stat==1)
	{
		res=s*cumu[index];
	}
	return res;
}
int main()
{
	long long t,n,i,j,k,res;
	cin>>t;
	for(i=0;i<t;i++)
	{
		cin>>n;
		long long *arr=new long long[n];
		long long *cumu=new long long[n];
		
		//long long **hold=new long long*[n];
		
		for(j=0;j<n;j++)
		{
			cin>>arr[j];
		/*	hold[j]=new long long[n+1];
			for(k=0;k<=n;k++)
			{
				hold[j][k]=-1;
			}*/
		}
		
		sort(arr,arr+n);
		cumu[n-1]=arr[n-1];
		for(j=(n-2);j>=0;j--)
		{
			cumu[j]=cumu[j+1]+arr[j];
		}
	/*	for(j=0;j<n;j++)
		{
			cout<<arr[j]<<" ";
		}
		cout<<endl;*/
		res=maxexp(arr,n,0,1,0,cumu);
		cout<<res<<endl;
	}
	return 0;
}
