#include<bits/stdc++.h>
using namespace std;
void convbaseseven(long long num,long long *arr,long long size)
{
	long long i=size-1;
	while(num>0)
	{
		arr[i]=num%7;
		num/=7;
		i--;
	}
	
}
int main()
{
	long long n,m,i,i2,j,k;
	cin>>n>>m;
	n--;
	m--;
	i=0;
	while(((long long)(n/pow(7,i)))>0)
	{
		i++;
	}
	if(n==0)
	{
		i=1;
	}
	long long *narr=new long long[i];
	for(j=0;j<i;j++)
	{
		narr[j]=0;
	}
	convbaseseven(n,narr,i);
	i2=0;
	while(((long long)(m/pow(7,i2)))>0)
	{
		i2++;
	}
	if(m==0)
	{
		i2=1;
	}
	long long *marr=new long long[i2];
	cout<<"i: "<<i<<" i2: "<<i2<<endl;
	for(j=0;j<i2;j++)
	{
		marr[j]=0;
	}
	convbaseseven(m,marr,i2);
	for(j=0;j<i;j++)
	{
		cout<<narr[j];
	}
	cout<<endl;
	for(j=0;j<i2;j++)
	{
		cout<<marr[j];
	}
	cout<<endl;
	long long *comp=new long long[i+i2];
	for(j=0;j<i;j++)
	{
		if(j!=0)
		comp[j]=narr[j];
		else if(i!=1)
		comp[j]=narr[j]-1;
		else
		comp[j]=narr[j];
		
	}
	for(j=i;j<i+i2;j++)
	{
		if(j!=i)
		comp[j]=marr[j-i];
		else if(i2!=1)
		comp[j]=marr[j-i]-1;
		else
		comp[j]=marr[j-i];
		
	}
	sort(comp,comp+i+i2);
	for(j=0;j<i+i2;j++)
	{
		cout<<comp[j];
	}
	cout<<endl;
	long long count=0;
	long long res=1;
	int flagco=0;
	for(j=0;j<i+i2;j++)
	{
		if(comp[j]+1-count>0)
		{
			flagco=1;
			res*=(comp[j]+1-count);
			count++;
		}		
		else
		{
			res=0;
			break;
		}
	}
	if(flagco==0)
	{
		res=0;
	}
	/*if(i==1 && i2==1)
	{
		res=0;
	}*/
	long long *comp2=new long long[i+i2];
	int flagc=0;
	if(narr[0]<marr[0])
	{
		if(i>1 && i2>1)
		{
			comp2[0]=narr[0]-1;
			comp2[1]=marr[0]-1;
		}
		else if(i==1 && i2>1)
		{
			comp2[0]=narr[0];
			comp2[1]=marr[0]-1;
		}
		else if(i>1 && i2==1)
		{
			comp2[0]=narr[0]-1;
			comp2[1]=marr[0];
		}
		else
		{
			comp2[0]=narr[0];
			comp2[1]=marr[0];
			flagc=1;
		}
	}
	else
	{
		if(i>1 && i2>1)
		{
			comp2[0]=marr[0]-1;
			comp2[1]=narr[0]-1;
		}
		else if(i==1 && i2>1)
		{
			comp2[0]=marr[0]-1;
			comp2[1]=narr[0];
		}
		else if(i>1 && i2==1)
		{
			comp2[0]=marr[0];
			comp2[1]=narr[0]-1;
		}
		else
		{
			comp2[0]=marr[0];
			comp2[1]=narr[0];
			flagc=1;
		}
	}
	
	for(j=2;j<i+i2;j++)
	{
		comp2[j]=6;
	}
	sort(comp2,comp2+i+i2);
	for(j=0;j<i+i2;j++)
	{
		cout<<comp2[j];
	}
	cout<<endl;
	count=2;
	long long res2=1;
	int flag=0;
	for(j=2;j<i+i2;j++)
	{
		
		if(comp2[j]+1-count>0)
		{
			flag=1;
			res2*=(comp2[j]+1-count);
			count++;
		}
		else
		{
			res2=0;
			break;
		}
	}
	if(flag==0)
	{
		res2=0;
	}
	if(flagc==1)
	{
		res2=0;
	}
	cout<<"r: "<<res<<" r2: "<<res2<<endl;
	cout<<(res+res2)<<endl;
	return 0;
}
