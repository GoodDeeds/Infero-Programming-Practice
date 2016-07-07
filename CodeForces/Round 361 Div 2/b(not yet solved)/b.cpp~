#include<bits/stdc++.h>
using namespace std;
long long findmin(long long *arr, long long n,long long cur,long long dest,long long **mintime,long long prev)
{
	long long temp;
	if(mintime[cur-1][dest-1]!=-1)
	{
		return mintime[cur-1][dest-1];
	}
	if(cur==dest)
	{
		mintime[cur-1][dest-1]=0;
		return 0;
	}
	if(cur==n)
	{
		mintime[cur-1][dest-1]=findmin(arr,n,cur-1,dest,mintime,cur);
		return mintime[cur-1][dest-1];
	}
	if(cur>1)
	{
		if(prev!=(cur-1) && prev!=(cur+1))
			temp=min(findmin(arr,n,cur+1,dest,mintime,cur),findmin(arr,n,cur-1,dest,mintime,cur));
		else if(prev==(cur-1))
		{
			temp=findmin(arr,n,cur+1,dest,mintime,cur);
		}
		else if(prev==(cur+1))
		{
			temp=findmin(arr,n,cur-1,dest,mintime,cur);
		}
	}
	else if(cur==1 && prev==0)
	{
		temp=findmin(arr,n,cur+1,dest,mintime,cur);
	}
	else if(cur==1 && prev!=0)
	{
		return 200001;
	}
	if(cur!=arr[cur-1])
		mintime[cur-1][dest-1]=min((1+findmin(arr,n,arr[cur-1],dest,mintime,cur)),1+temp);
	else mintime[cur-1][dest-1]=1+temp;
	return mintime[cur-1][dest-1];
}
int main()
{
	long long n,i,j,k;
	cin>>n;
	long long *arr=new long long[n];
	long long **mintime=new long long*[n];
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
		mintime[i]=new long long[n];
		for(j=0;j<n;j++)
		{
			mintime[i][j]=-1;
		}
		
	}
	long long sum=0;
	for(i=1;i<=n;i++)
	{
		sum=findmin(arr,n,1,i,mintime,0);
		cout<<sum<<" ";
	}	
	cout<<endl;
	return 0;
}
