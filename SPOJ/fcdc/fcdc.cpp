//Help from Chandra Kiran
#include<bits/stdc++.h>
using namespace std;
/*long long f(long long n)
{
	long long i,j,k,count=0,val;
	int flag=0;
	for(i=2;i<=sqrt(n);i++)
	{
		count=0;
		if(n%i==0)
		{
			while(n%i==0)
			{
				n/=i;
				count++;
			}
			val=1;
			
			
		}
	}
}*/
long long f(long long n)
{
	long long res=1,i;
	for(i=1;i<=n;i++)
	{
		res=((res%n)*(i%n))%n;
		if(res==0)
		{
			return i;
		}
	}
	return n; 
}
int main()
{
	long long a,b,i,j,k,val1,val2;
	cin>>a>>b;
	val1=f(a);
	val2=f(b);
	cout<<max(val2-val1,(long long)0)<<endl;
	return 0;
}
