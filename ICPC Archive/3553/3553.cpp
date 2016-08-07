#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n,i,j,k,t,temp2;
	vector< vector<long long> > arr;
	arr.clear();
	vector<long long> row;
	char temp1;
	string mode;
	while(t--)
	{
		cin>>n>>temp1>>temp2;
		for(i=0;i<n;i++)
		{
			row.clear();
			for(j=0;j<n;j++)
			{
				cin>>temp2;
				row.push_back(temp2);
					
			}
			arr.push_back(row);
		}
		cin>>mode;
		if(mode[0]=='T' && mode[1]=='L')
		{
			for(i=0;i<(2*n-1);i++)
			{
				if(i%2==0 && i<n)
				{
					for(j=0;j<=i;j++)
					{
						cout<<arr[i-j][j]<<" ";
					}
					
				}
				else if(i%2==1 && i<n)
				{
					for(j=0;j<=i;j++)
					{
						cout<<arr[j][i-j]<<" ";
					}
				}
				else if(i%2==0)
				{
					for(j=0;j<2*n-i;j++)
					{
						cout<<arr[i+1-n+j][n-1-j]<<" ";
					}
					
				}
				else
				{
					for(j=0;j<2*n-1;j++)
					{
						cout<<arr[n-1-j][i+1-n+j]<<" ";
					}
				}
			}
			
				
		}
		else if(mode[0]=='T' && mode[1]=='R')
		{
			for(i=0;i<(2*n-1);i++)
			{
				if(i%2==0 && i<n)
				{
					for(j=0;j<=i;j++)
					{
						cout<<arr[i-(n-j-1)][n-j-1]<<" ";
					}
					
				}
				else if(i%2==1 && i<n)
				{
					for(j=0;j<=i;j++)
					{
						cout<<arr[n-j-1][i-(n-j-1)]<<" ";
					}
				}
				else if(i%2==0)
				{
					for(j=0;j<2*n-i;j++)
					{
						cout<<arr[i+1-n+(n-j-1)][n-1-(n-j-1)]<<" ";
					}
					
				}
				else
				{
					for(j=0;j<2*n-1;j++)
					{
						cout<<arr[n-1-(n-j-1)][i+1-n+(n-j-1)]<<" ";
					}
				}
			}
				
		}
		else if(mode[0]=='B' && mode[1]=='L')
		{
			for(i=0;i<(2*n-1);i++)
			{
				if(i%2==0 && i<n)
				{
					for(j=0;j<=i;j++)
					{
						cout<<arr[n-i-1-j][j]<<" ";
					}
					
				}
				else if(i%2==1 && i<n)
				{
					for(j=0;j<=i;j++)
					{
						cout<<arr[j][n-i-1-j]<<" ";
					}
				}
				else if(i%2==0)
				{
					for(j=0;j<2*n-i;j++)
					{
						cout<<arr[n-i-1+1-n+j][n-1-j]<<" ";
					}
					
				}
				else
				{
					for(j=0;j<2*n-1;j++)
					{
						cout<<arr[n-1-j][n-i-1+1-n+j]<<" ";
					}
				}
			}
			
			
		}
		else if(mode[0]=='B' && mode[1]=='R')
		{
			for(i=0;i<(2*n-1);i++)
			{
				if(i%2==0 && i<n)
				{
					for(j=0;j<=i;j++)
					{
						cout<<arr[j-i][j]<<" ";
					}
					
				}
				else if(i%2==1 && i<n)
				{
					for(j=0;j<=i;j++)
					{
						cout<<arr[j][i-j]<<" ";
					}
				}
				else if(i%2==0)
				{
					for(j=0;j<2*n-i;j++)
					{
						cout<<arr[i+1-n+j][n-1-j]<<" ";
					}
					
				}
				else
				{
					for(j=0;j<2*n-1;j++)
					{
						cout<<arr[n-1-j][i+1-n+j]<<" ";
					}
				}
			}
			
		}
		
	}		
		
}
