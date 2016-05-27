//can be probably done much better
#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
int main()
{
	long long int t,n,m,i,j,k,l,limsieve;
	cin>>t;
	for(i=0;i<t;i++)
	{
		cin>>m>>n;
		limsieve=floor(sqrt(n))+1;
		int *boolarr=new int[limsieve];
		int *res=new int[limsieve];
		for(j=0;j<limsieve;j++)
		{
			boolarr[j]=0;
			res[j]=0;
		}
		long long int coun=0;
		for(j=2;j<limsieve;j++)
		{
			if(boolarr[j]==0)
			{
				for(k=j*2;k<limsieve;k+=j)
				{
					boolarr[k]=1;
				}
				res[coun]=j;
				coun++;
			}
		}
		int flag=0;
		for(j=m;j<=n;j++)
		{
			flag=0;
			for(k=0;k<coun;k++)
			{
				if(j%res[k]==0 && res[k]!=j)
				{
					flag=1;
					break;
				}
			}
			if(flag==0 && j>=2)
			{
				cout<<j<<endl;
			}
			/*if(boolarr[j]==0 && j>=2)
			{
				cout<<j<<endl;
			}*/
		}
		cout<<endl;
	}
	return 0;
}
