#include<iostream>
#include<cmath>
using namespace std;
long long inverse(long long num, long long p)//to find the inverse mod 1000000007
{
    long long num1=p,temp;
    long long q;
    if(p==1)
	{
		return 0;
	}
	long long bez1=0,bez2=1;
	while(num>1)
    {
        q=num/p;
 		temp=p;	
        p=num%p,
        num=temp;
        temp=bez1;
 		bez1=bez2-(bez1*q);
        bez2=temp;
    }
    if(bez2<0)
    {
    	bez2=bez2+num1;
    }
    return bez2;
}    
long long choosemod(long long n,long long r)
{
	if(r>n)
	{
		return 0;
	}
	if(r>(n-r))
	{
		r=n-r;
	}
	if(r==0)
	{
		return 1;
	}
	if(r==1)
	{
		return n%1000000007;
	}
	long long prod1=1,prod2=1;
	for(long long i=n;i>n-r;i--)
	{
		prod1*=(i%1000000007);
		prod1%=1000000007;
	}
//	cout<<"p1: "<<prod1<<" r: "<<r<<endl;
	long long temp=1;
	for(long long j=r;j>0;j--)
	{
		if(temp<1000000007)
		{
			temp*=j;
		}
		else
		{
			prod2*=inverse(temp,1000000007);
		//	cout<<"p2: "<<prod2<<endl;
			prod2%=1000000007;
			prod1*=prod2;
			prod1%=1000000007;
			temp=1;
		}
	}
	prod2*=inverse(temp,1000000007);
	prod2%=1000000007;
	prod1*=prod2;
	prod1%=1000000007;
	return prod1;
}
int main()
{
	long long t,n,k,i,j;
	cin>>t;
	//cout<<"inv: "<<inverse(1,1000000007)<<endl;
	while(t--)
	{
		cin>>n>>k;
		long long *arr=new long long[n];
		for(i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		if(n<=k)
		{
			long long temp=(n-1)/30,res=1;
			for(i=0;i<temp;i++)
			{
				res*=(((long long)pow(2,30))%1000000007);
				res%=1000000007;
			}
			long long diff=(n-1)-30*temp;
			res*=(((long long)pow(2,diff))%1000000007);
			res%=1000000007;
			cout<<res<<endl;
		}
		else
		{
			if(k%2==0)
			{
				long long temp1,res=0;
				for(i=0;i<=k;i+=2)
				{
					long long temp1=choosemod(n,i);
					
					res+=(temp1%1000000007);
				}
				res%=1000000007;
				cout<<res<<endl;
			}
			else if(k%2==1)
			{
				long long temp1,res=0;
				for(i=1;i<=k;i+=2)
				{
					long long temp1=choosemod(n,i);
			//		cout<<"t: "<<temp1<<endl;
					res+=(temp1%1000000007);
				}
				res%=1000000007;
				cout<<res<<endl;
			}
		}
	}
	return 0;
}
