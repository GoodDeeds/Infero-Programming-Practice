#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	long long int n,q,t,*x,*y,l,r,i,j,maxy=0,*c;
	cin>>n;
	x=new long long int[n];
	y=new long long int[n];
	for(i=0;i<n;i++)
	{
		cin>>x[i];
		cin>>y[i];
		if(y[i]>maxy)
		{
			maxy=y[i];
		}
	}
	c=new long long int[maxy];
	//long long int maxc=0;
	for(t=1;t<=maxy;t++)
	{
		c[t-1]=0;
		for(j=0;j<n;j++)
		{
			if(x[j]<=t && y[j]>=t)
			{
				c[t-1]++;
			}
		}
		//cout<<"t: "<<t<<" c[t-1]: "<<c[t-1]<<endl;
	}
	cin>>q;
	for(i=0;i<q;i++)
	{
		cin>>l>>r;
		long long int maxc=0,flag=0;
		for(t=l;t<=min(maxy,r);t++)
		{
			if(maxc<c[t-1])
			{
				maxc=c[t-1];
				flag=1;
			}
		}
		cout<<maxc<<endl;
		if(flag==0)
		{
			cout<<"0"<<endl;
		}
		//long long int count=0,maxcount=0;
		//for(t=l;t<=r;t++)
		//{
			//count=0;
			//for(j=0;j<n;j++)
			//{
				//if(x[j]<=t && y[j]>=t)
				//{
					//count++;
				//}
			//}
			//if(maxcount<count)
			//{
				//maxcount=count;
			//}
		//}
		//cout<<maxcount<<endl;
	}
	return 0;
}
