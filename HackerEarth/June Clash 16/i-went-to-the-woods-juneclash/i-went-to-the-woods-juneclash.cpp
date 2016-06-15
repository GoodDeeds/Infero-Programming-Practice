#include<iostream>
using namespace std;
void bsort(long long *t,long long *u,long long *v,long long *c,long long m)
{
	long long temp;
	for(long long i=0;i<m-1;i++)
	{
		for(long long j=0;j<m-1-i;j++)
		{
			if(t[j]>t[j+1])
			{
				temp=t[j];
				t[j]=t[j+1];
				t[j+1]=temp;
				temp=u[j];
				u[j]=u[j+1];
				u[j+1]=temp;
				temp=v[j];
				v[j]=v[j+1];
				v[j+1]=temp;
				temp=c[j];
				c[j]=c[j+1];
				c[j+1]=temp;
				
			}
			else if(t[j]==t[j+1])
			{
				if(u[j]>u[j+1])
				{
					temp=t[j];
					t[j]=t[j+1];
					t[j+1]=temp;
					temp=u[j];
					u[j]=u[j+1];
					u[j+1]=temp;
					temp=v[j];
					v[j]=v[j+1];
					v[j+1]=temp;
					temp=c[j];
					c[j]=c[j+1];
					c[j+1]=temp;
				
				}
				else if(u[j]==u[j+1])
				{
					if(v[j]>v[j+1])
					{
						temp=t[j];
						t[j]=t[j+1];
						t[j+1]=temp;
						temp=u[j];
						u[j]=u[j+1];
						u[j+1]=temp;
						temp=v[j];
						v[j]=v[j+1];
						v[j+1]=temp;
						temp=c[j];
						c[j]=c[j+1];
						c[j+1]=temp;
				
					}
				}
			}
		}
	}
}
int main()
{
	long long n,m,i,j,k;
	cin>>n>>m;
	long long *u=new long long[m];
	long long *v=new long long[m];
	long long *t=new long long[m];
	long long *c=new long long[m];
	for(i=0;i<m;i++)
	{
		cin>>v[i]>>u[i]>>t[i];
		c[i]=i+1;
	}
	//bsort(t,u,v,c,m);
	for(i=0;i<m;i++)
	{
		cout<<c[i]<<" ";
	}
	cout<<endl;
	return 0;
}
