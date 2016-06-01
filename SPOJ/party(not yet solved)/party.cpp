#include<iostream>
#include<cmath>
#include<vector>
#include<algorithm>
using namespace std;
int maxcost(int numleft,int sleft,int *cost,int *fun,int **arr,int **take)
{
	int result;
	int tak=0,donttak=0;
	if(numleft==0)
	{
		result=0;
	}
	else if(arr[numleft][sleft]!=-1)
	{
		return arr[numleft][sleft];
	}
	else if(cost[numleft-1]>sleft)
	{
		
		take[numleft][sleft]=-1;
		result=maxcost(numleft-1,sleft,cost,fun,arr,take);
	}
	else
	{
		tak=fun[numleft-1]+maxcost(numleft-1,sleft-cost[numleft-1],cost,fun,arr,take);
		donttak=maxcost(numleft-1,sleft,cost,fun,arr,take);
		result=max(tak,donttak);
		if(tak>donttak)
		{
			take[numleft][sleft]=1;
		}
		else
		{
			take[numleft][sleft]=-1;
		}
	}
	arr[numleft][sleft]=result;
	return result;
}
int main()
{
	int budget,n,i,j,k,l,res,actcost=0;
	cin>>budget>>n;
	while(budget!=0 || n!=0)
	{
		int *cost=new int[n];
		int *fun=new int[n];
		int **arr=new int*[n+1];
		int **take=new int*[n+1];
		for(i=0;i<=n;i++)
		{
			arr[i]=new int[budget+1];
			take[i]=new int[budget+1];
			for(j=0;j<=budget;j++)
			{
				arr[i][j]=-1;
				take[i][j]=-1;
			}
		}
		for(i=0;i<n;i++)
		{
			cin>>cost[i]>>fun[i];
		}
		res=maxcost(n,budget,cost,fun,arr,take);
		i=n;
		j=budget;
		actcost=0;
		while(i>0 && j>0)
		{
			if(take[i][j]!=1)
			{
				i--;
			}
			else
			{
				actcost+=cost[i-1];
				i--;
				j-=cost[i-1];
			}
		}
		for(i=0;i<=n;i++)
		{
			for(j=0;j<=budget;j++)
			{
				cout<<arr[i][j]<<" ";
			}
			cout<<endl;
		}
		cout<<endl;
		for(i=0;i<=n;i++)
		{
			for(j=0;j<=budget;j++)
			{
				cout<<take[i][j]<<" ";
			}
			cout<<endl;
		}
		cout<<endl;
		cout<<actcost<<" "<<res<<endl;
		cin>>budget>>n;
	}
	
}
