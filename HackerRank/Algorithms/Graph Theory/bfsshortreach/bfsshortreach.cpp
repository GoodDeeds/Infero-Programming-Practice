#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
using namespace std;
long long int n;
/*queue<long long int> elqu;
long long int val=6;*/
/*void bfsearch(long long int arr[],long long int **gra,long long int start,long long int va)
{
	int flag=0;
	for(int i=0;i<n;i++)
	{
		if(gra[start][i]==1)
		{
			if(arr[i]!=-1)
			{
				continue;
			}
			else
			{
		//		cout<<"Arr: "<<start<<" "<<i<<endl;
				elqu.push(i);
			//	arr[i]=va;
				flag=1;
			}
		}
	}
	if(flag==0)
	{
		return;
	}
	val+=6;
	
	while(!elqu.empty())
	{
		long long int temp=elqu.front();
	//	cout<<"e: "<<elqu.front()<<endl;
		elqu.pop();
		arr[temp]=va;
		bfsearch(arr,gra,temp,va+6);
		
	}
	val-=6;
}*/
int main()
{
	long long int t,m,x,y,i,j,k,l,s;
	cin>>t;
	for(i=0;i<t;i++)
	{
		//queue<long long int>().swap(elqu);
		cin>>n>>m;
		queue<long long int> elqu;
		long long int val=6,curnode;
		val=6;
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
		for(j=0;j<m;j++)
		{
			cin>>x>>y;
			grap[x-1][y-1]=1;
			grap[y-1][x-1]=1;
		}
	   /* for(j=0;j<n;j++)
		{
			for(k=0;k<n;k++)
			{
				cout<<grap[j][k]<<" ";
			}
			cout<<endl;
		}
		for(j=0;j<<n;j++)
		{
			cout<<res[j]<<" ";
			
		}
		cout<<endl;*/
		cin>>s;
	//	cout<<"S: "<<s<<endl;
		res[s-1]=0;
		//bfsearch(res,grap,s-1,6);
		elqu.push(s-1);
		while(!elqu.empty())
		{
			curnode=elqu.front();
			elqu.pop();
			for(j=0;j<n;j++)
			{
				if(grap[curnode][j]==1 && res[j]==-1)
				{
					elqu.push(j);
					res[j]=res[curnode]+6;
				}
			}
			//val+=6;
		}
		for(j=0;j<n;j++)
		{
			if(j!=(s-1))
			{
				cout<<res[j]<<" ";
			}
		}
		cout<<endl;
		delete grap;
		delete res;
		
	}
	cout<<endl;
	return 0;
}
