#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	long long int t,m,n,i,j,k;
	int flag;
	cin>>t;
	for(i=0;i<t;i++)
	{
		cin>>m>>n;
		if(m<2)
		{
			cout<<"2"<<endl;
		}
		if(m%2==0)
		{
			for(j=m+1;j<=n;j+=2)
			{
				flag=0;
				if((j%3==0 || j%5==0 || j%7==0 || j%11==0 || j%13==0 ||j%17==0 ||j%19==0) && j!=3 && j!=5 && j!=7 &&j!=11 && j!=13 && j!=17 && j!=19)
				{
					continue;
				}
				for(k=2;k<=sqrt(j);k++)
				{
					if(j%k==0)
					{
						flag=1;
						break;
					}
				}
				if(flag==0 && j!=1)
				{
					cout<<j<<endl;
				}
			}
		}		
		else
		{
			for(j=m;j<=n;j+=2)
			{
				flag=0;
				if((j%3==0 || j%5==0 || j%7==0 || j%11==0 || j%13==0 ||j%17==0 ||j%19==0) && j!=3 && j!=5 && j!=7 &&j!=11 && j!=13 && j!=17 && j!=19)
				{
					continue;
				}
				for(k=2;k<=sqrt(j);k++)
				{
					if(j%k==0)
					{
						flag=1;
						break;
					}
				}
				if(flag==0 && j!=1)
				{
					cout<<j<<endl;
				}
			}
		}
		cout<<endl;
	}
	return 0;
}
