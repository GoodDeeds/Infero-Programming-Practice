//arithm
#include<bits/stdc++.h>
using namespace std;
long long gcd(long long a,long long b)
{
	while(b!=0)
	{
		long long r=a%b;
		a=b;
		b=r;
	}
	return a;
}
int main()
{
	long long t,n,c,i,j,k,t1,t2,t3,val;
	cin>>t;
	while(t--)
	{
		cin>>n>>c;
		t1=2*c;
		if(t1%n!=0)
		{
			cout<<"No"<<endl;
			continue;
		}
		t1/=n;
		long long a=1;
		int flag=0;
		if(n==1 && c>=1)
		{
			cout<<"Yes"<<endl;
			continue;
		}
		if(t1<=(n-1))
		{
			flag=1;
			
		}
		else
		{
			val=t1%(n-1);
			if(val==0)
			{
				if(n%2==1)
					val+=(n-1);
				else
					val+=(2*(n-1));				
				if((t1-val)<=0)
				{
						
					flag=1;
					
				}
			}
			else if(val%2==0)
			{
				
			}
			else
			{
				if(n%2==1)
				{
					flag=1;
					
				}
				else
				{
					if((t1-n-1-val)<=0)
					{
						flag=1;
					}
				}
					/*while(t1>(n-1))
					{
						t1-=a*(n-1);
						a+=2;
					}	*/
			}
			
				/*t2=t1-2*a;
				if(t2<=0 || t2<(n-1))
				{
					
					break;
				}
				if(t2%(n-1)==0)
				{
					flag=1;
					break;
				}*/
				/*t3=t2%(n-1);
				if(t2%2==1 && n%2==0)
				{
					flag=1;
					break;
				}
				if(t2%2==0)
				{
					if(n%2==1)
					{
						a+=(t3/2);
					}
				}*/
			
		}
			
		if(flag==0)
		{
			cout<<"Yes"<<endl;
		}
		else
		{
			cout<<"No"<<endl;
		}
	}
	return 0;
}
