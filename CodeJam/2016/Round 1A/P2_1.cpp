#include<iostream>
using namespace std;
int main()
{
	int t;
	int arr[50][50];
	int inp[99][50];
	int n;
	int op;
	int ctr=0;
	int store[50];
	int flag;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		cin>>n;
		for(int j=0;j<(2*n)-1;j++)
		{
			for(int k=0;k<n;k++)
			{
				cin>>inp[j][k];
				store[k]=0;
			}
		}
		int min=inp[0][0];
		for(int j=0;j<(2*n)-1;j++)
		{
			if((min>=inp[j][0]))
			{
				min=inp[j][0];
				
			}
		}
		flag=0;
		for(int j=0;j<(2*n)-1;j++)
		{
			for(int k=0;k<(2*n)-1;k++)
			{
				ctr=0;
				for(int x=0;x<n;x++)
				{
					if(inp[j][x]==inp[k][x])
					{
						ctr++;
					}
				}
				if(ctr!=2)
				{
					
				}
			}
		}
	}
}
