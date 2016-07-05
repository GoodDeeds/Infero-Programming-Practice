#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,i,j,count[2]={0};
	cin>>n>>m;
	//int **grap=new int*[n];	
	int *visi=new int[n];
	int *stat=new int[n];
	list<int> *adj=new list<int>[n];
	for(i=0;i<n;i++)
	{
		/*grap[i]=new int[n];
		for(j=0;j<n;j++)
		{
			grap[i][j]=0;
		}*/
		adj[i].empty();
		stat[i]=-1;
		visi[i]=0;
	}
	queue<int> que;
	int curnode;
	que.empty();
	int u,v;
	for(i=0;i<m;i++)
	{
		cin>>u>>v;
		adj[u-1].push_back(v-1);
		adj[v-1].push_back(u-1);
	}
	que.push(0);
	stat[0]=1;
	visi[0]=1;
	count[1]++;
	int flag=0,flag2=0;
	list<int>::iterator k;
	while(true)
	{
		while(!que.empty())
		{	
			
			curnode=que.front();
			que.pop();		
			for(k=adj[curnode].begin();k!=adj[curnode].end();++k)
			{
				if(visi[*k]==0)
				{
					que.push(*k);
					stat[*k]=(stat[curnode]%2)+1;
					count[((stat[curnode]%2)+1)%2]++;
					visi[*k]=1;
					
				}
				else if(visi[*k]==1)
				{
					if(stat[curnode]==stat[*k])
					{
						flag=1;
						break;
					}
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
		else
		{
			flag2=0;
			for(j=0;j<n;j++)
			{
				if(visi[j]==0)
				{
					que.push(j);
					stat[j]=1;
					count[1]++;
					visi[j]=1;
					flag2=1;
				//	cout<<"j: "<<j<<endl;
				//	cout<<"c0: "<<count[0]<<" c1: "<<count[1]<<endl;
					break;
					
				}
			}
			if(flag2==0)
			{
				break;
			}
		}
	}	
	if(flag==1)
	{
		cout<<"-1"<<endl;
	}
	else
	{
		for(i=0;i<2;i++)
		{
			cout<<count[i]<<endl;
			for(j=0;j<n;j++)
			{
				if((stat[j]%2)==i)
				{
					cout<<(j+1)<<" ";
				}
			}
			cout<<endl;
		}
	}
	return 0;
}
