#include<bits/stdc++.h>
using namespace std;
long long depthfs(long long vertex, long long *vis, long long **arr, long long lastcolour,long long n,long long k)
{
	int flag=0;
	long long sum=0;
	for(long long i=1;i<=n;i++)
	{
		if(arr[vertex-1][i-1]==1 && vis[i-1]==-1)
		{
			if(lastcolour<k)
				sum+=(depthfs(i,vis,arr,lastcolour,n,k)+depthfs(i,vis,arr,lastcolour+1,n,k));
			else
				sum+=depthfs(i,vis,arr,lastcolour,n,k);
			flag=1;
		}
	}
	if(flag==0)
	{
		return npr(k,lastcolour);
	}
	else
	{
		return sum;
	}
}
int main()
{
	long long t,n,k,i,j,l,u,v;
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		long long **arr=new long long*[n];
		long long *vis=new long long[n];
		for(i=0;i<n;i++)
		{
			arr[i]=new long long[n];
			vis[i]=-1;
			
		}
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				arr[i][j]=-1;
			}
		}
		for(i=0;i<(n-1);i++)
		{
			cin>>u>>v;
			arr[u-1][v-1]=arr[v-1][u-1]=1;
		}
		depthfs(1,arr,vis,1);
		
	}
}
