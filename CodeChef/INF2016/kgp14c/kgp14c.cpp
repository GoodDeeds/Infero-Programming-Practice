#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
using namespace std;
long long int n;
int main()
{
	long long int t,m,x,y,i,j,k,l,s,num;
	cin>>t;
	for(i=0;i<t;i++)
	{
		cin>>n;
		queue<long long int> elqu;
		long long int val=0,curnode;
		long long int **grap=new long long int*[n];
		for(j=0;j<n;j++)
		{
			grap[j]=new long long int[n];
		}
		long long int *res=new long long int[n];
		for(j=0;j<n;j++)
		{
			for(k=0;k<n;k++)
			{
				grap[j][k]=0;
				
			}
			res[j]=-1;
		}
		for(j=0;j<n;j++)
		{
			cin>>num;
			for(k=0;k<num;k++)
			{
				cin>>y;
				grap[j][y-1]=1;
			}			
		}
	  	int flag2=1;
		int flag=0;
		while(true)
		{
			
			flag2=0;
			for(j=0;j<n;j++)
			{
				if(res[j]==-1)
				{
					res[j]=0;
					flag2=1;
					break;
				}
			}
			if(flag2==0)
			{
				break;
			}
			elqu.push(j);
			
			while(!elqu.empty())
			{
				curnode=elqu.front();
				elqu.pop();
				for(j=0;j<n;j++)
				{
					if(grap[curnode][j]==1 && res[j]==-1)
					{
						elqu.push(j);
						res[j]=(res[curnode]+1)%2;
					}
					else if(grap[curnode][j]==1 && res[j]==res[curnode])
					{
						flag=1;
						break;
					}
				}
				if(flag==1)
				{
					break;
				}
			}
			if(flag==1)
			{
				break;
			}
		}			
		if(flag==1)
		{
			cout<<"Case "<<i+1<<": "<<"0 0 0"<<endl;
			continue;
		}
		int sum[2]={0};
		for(j=0;j<n;j++)
		{
			sum[res[j]]++;
		}
		cout<<"Case "<<i+1<<": 1 "<<min(sum[0],sum[1])<<" "<<max(sum[0],sum[1])<<endl;
		delete grap;
		delete res;
		
	}
	
	return 0;
}
