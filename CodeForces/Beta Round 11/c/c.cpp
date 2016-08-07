#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long t,i,j,k,n,m,val;
	cin>>t;
	while(t--)
	{
		cin>>n>>m;
		vector< vector<int> > mat;
		vector<int> row;
		for(i=0;i<n;i++)
		{
			row.clear();
			for(j=0;j<m;j++)
			{
				cin>>val;
				row.push_back(val);
			}
			mat.push_back(row);
		}
		long long countr=0,starti=-1,endi=-1;
		for(i=0;i<n;i++)
		{
			countr=0;
			starti=-1;
			endi=-1;
			for(j=0;j<m;j++)
			{
				if(mat[i][j]==0)
				{
					countr=0;
					if(starti!=-1)
					{
						endi=j-1;
					}
					
				}
				else if(mat[i][j]==1)
				{
					if(starti==-1)
					{
						starti=j;
					}
					countr++;
				}
			}
			
		}
	}
}
