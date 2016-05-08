#include<iostream>
#include<cmath>
#include<stdio.h>
#include<malloc.h>

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
			cout<<"Here";
		for(int x=0;x<n;x++)
		{
			
			cout<<endl<<"In";
			int min=2501;
			for(int j=0;j<(2*n)-1;j++)
			{
				if((min>=inp[j][0] && store[ctr]<inp[j][0]))
				{
					min=inp[j][0];
					
				}
				
			}
			cout<<endl<<min<<" ";
			flag=0;
			int j;
			for(j=0;j<(2*n)-1;j+=n)
			{
				
				if(min==inp[j][0])
				{
					ctr++;
					store[ctr]=min;
					
					if(flag==0)
					{
						flag=1;
						
					}
					else
					{
						flag=0;
						op=j;
						cout<<"op: "<<op<<endl;
					}
					for(int k=0;k<n;k++)
					{
						if(flag==1)
							arr[x][k]=inp[j][k];
						else
							arr[k][x]=inp[j][k];
					}
				}
				
				
			}
			
			
		}
		flag=0;
		
			for(int k=0;k<n;k++)
			{
				if(inp[op][0]==arr[k][0])
				{
					cout<<"Case #"<<i+1<<": ";
					for(int r=0;r<n;r++)
					{
						cout<<arr[k][r]<<" ";
					}
					cout<<endl;
					flag=1;
				}
			}
			
	}	
}
