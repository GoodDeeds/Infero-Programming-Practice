#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	long long n,q,i,j,k,l,curt=1;
	cin>>n>>q;
	long long *cs=new long long[n];
	long long *ce=new long long[n];	
	long long *stat=new long long[n];
	long long *qs=new long long[q];
	long long *qe=new long long[q];
	for(i=0;i<n;i++)
	{
		cin>>cs[i]>>ce[i];
		stat[i]=0;
	}
	for(i=0;i<q;i++)
	{
		cin>>qs[i]>>qe[i];
		curt=qs[i];
		for(j=0;j<n;j++)
		{
			stat[j]=0;
		}
		long long minend=1000001;
		long long numc=0;
		long long counter=0;
		int flag=0;
		do{
			minend=1000001;
			flag=0;
			for(j=0;j<n;j++)
			{
				if(stat[j]==0 &&  cs[j]>=curt && ce[j]<minend)
				{
					minend=ce[j]; 
					counter=j;	
					flag=1;
				}
			}
			if(minend<=qe[i])
			{
				numc++;
				curt=minend;
				stat[counter]=1;
			}	
		}while(minend<=qe[i] && flag==1);
		cout<<numc<<endl;
	}
	return 0;
	
	
}
