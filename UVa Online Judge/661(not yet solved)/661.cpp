//getting time limit exceeded - for O(m+n)?
#include<iostream>
using namespace std;
int main()
{
	long long n,m,c,i,j,k,count=1;
	cin>>n>>m>>c;
	while(n!=0)
	{
		long long *device=new long long[n];
		long long *state=new long long[n];
		long long *order=new long long[m];
		long long tot=0,maxi=-1;
		for(i=0;i<n;i++)
		{
			cin>>device[i];
			state[i]=0;
		}
		int flag=0;
		for(i=0;i<m;i++)
		{
			cin>>order[i];
			if(state[order[i]-1]==0)
			{
				state[order[i]-1]=1;
				tot+=device[order[i]-1];
				if(tot>c)
				{
					flag=1;
					break;
				}
				if(maxi<tot)
				{
					maxi=tot;
				}
			}
			else if(state[order[i]-1]==1)
			{
				state[order[i]-1]=0;
				tot-=device[order[i]-1];
			}
			
		}
		cout<<"Sequence "<<count<<endl;
		if(flag==0)
		{
			cout<<"Fuse was not blown."<<endl<<"Maximal power consumption was "<<maxi<<" amperes."<<endl;
		}
		else
		{
			cout<<"Fuse was blown."<<endl;
		}
		cout<<endl;
		cin>>n>>m>>c;
		count++;
	}
	return 0;
}
