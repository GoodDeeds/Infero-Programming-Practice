#include<bits/stdc++.h>
using namespace std;
long long d(long long x)
{
	if(x<=9)
	{
		return x;
	}
	long long sum=0,val;
	while(x>0)
	{
		val=x%10;
		sum+=val;
		x/=10;
	}
	return d(sum);
	
}
int main()
{
	long long n,i,j,k,prod,res,diff,q,sum=0;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		for(j=i+1;j<=n;j++)
		{
			prod=d(i)*d(j);
			res=prod%9;
			if(res==0)
			{
				res=9;
			}
			q=n/9;
			if(res<=n%9 && n%9!=0)
			{
		//		cout<<"r: "<<res<<" n: "<<n<<" i: "<<i<<" j: "<<j<<" q: "<<q<<endl;
				q++;
			}
			if(prod<=n)
			{
		//		cout<<"-r: "<<res<<" n: "<<n<<" i: "<<i<<" j: "<<j<<" q: "<<q<<endl;
				q--;
			}
			sum+=(2*q);
			
			
			
		}
	}
	for(i=1;i<=n;i++)
	{
		prod=d(i)*d(i);
		res=prod%9;
		if(res==0)
		{
			res=9;
		}
		q=n/9;
		if(res<=n%9 && n%9!=0)
		{
		//	cout<<"r: "<<res<<" n: "<<n<<" i: "<<i<<" q: "<<q<<endl;
			q++;
		}
		if(prod<=n)
		{
			
		//	cout<<"-r: "<<res<<" n: "<<n<<" i: "<<i<<" q: "<<q<<endl;
			q--;
		}
		sum+=q;
		
			
			
		
	}
	cout<<sum<<endl;
	return 0;
}
