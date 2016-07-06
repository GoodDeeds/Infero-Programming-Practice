#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long r,c,n,i,j,k;
	cin>>r>>c>>n;
	string *grid=new string[r];
	long long **bomb=new long long*[r];
	for(i=0;i<r;i++)
	{
		bomb[i]=new long long[c];
		for(j=0;j<c;j++)
		{
			bomb[i][j]=0;
		}
	}
	for(i=0;i<r;i++)
	{
		cin>>grid[i];
		for(j=0;j<c;j++)
		{
			if(grid[i][j]==79)
			{
				bomb[i][j]=1;
			}
			
		}
	}
	if(n%2==0)
	{
		char ch=79;
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				cout<<ch;
			}
			cout<<endl;
		}
	}
	else
	{
		for(i=2;i<=n;i++)
		{
			if(i%2==1)
			{
				for(j=0;j<r;j++)
				{
					for(k=0;k<c;k++)
					{
						if(bomb[j][k]==1)
						{
							bomb[j][k]=0;
							if(j>0 && bomb[j-1][k]!=1)
							{
								bomb[j-1][k]=0;
							}
							if(k>0 && bomb[j][k-1]!=1)
							{
								bomb[j][k-1]=0;
							}
							if(j<r-1 && bomb[j+1][k]!=1)
							{
								bomb[j+1][k]=0;
							}
							if(k<c-1 && bomb[j][k+1]!=1)
							{
								bomb[j][k+1]=0;
							}
						}
						
					}
				}
				for(j=0;j<r;j++)
				{
					for(k=0;k<c;k++)
					{
						if(bomb[j][k]==2)
						{
							bomb[j][k]=1;
						}
					}
				}
			}
			else
			{
				for(j=0;j<r;j++)
				{
					for(k=0;k<c;k++)
					{
						if(bomb[j][k]==0)
						{
							bomb[j][k]=2;
						}
					}
				}
			}
		}
		char ch=79;
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				if(bomb[i][j]==0)
				{
					cout<<".";
				}
				else
				{
					cout<<ch;
				}
			}
			cout<<endl;
		}
		
	}
	
	
	
	return 0;
}
