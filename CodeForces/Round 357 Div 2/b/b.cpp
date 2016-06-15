#include<bits/stdc++.h>
#define MOD 1000000007
#define num1 1234567
#define num2 123456
#define num3 1234
using namespace std;
int main()
{
	long long n,t1,t2,t3;
	cin>>n;	
	int flag=0;
	if(n>=num1)
	{
		
		for(long long i=0;(i*num1)<=n;i++)
		{
			
			t1=n-i*num1;
			if(t1>=num2)
			{
				
				for(long long j=0;(j*num2)<=t1;j++)
				{
					
					t2=t1-j*num2;
					
					if(t2%num3==0)
					{
					    
						flag=1;
						break;
					}
				
				}
				if(flag==1)
				{
					break;
				}
			}
			else
			{
				if(t1%num3==0)
				{
					flag=1;
					break;
				}
			}
		}
	}
	else if(n>=num2)
	{
		for(long long i=0;(i*num2)<=n;i++)
		{
			t1=n-i*num2;
			if(t1%num3==0)
			{
				flag=1;
				break;
			}
		}
	}
	else if(n>=num3)
	{
		if(n%num3==0)
		{
			flag=1;
			
		}
	}
	if(flag==0)
	{
		cout<<"NO"<<endl;
	}
	else
	{
		cout<<"YES"<<endl;
	}
	return 0;
}
