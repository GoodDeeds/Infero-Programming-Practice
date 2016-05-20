#include<iostream>
using namespace std;
int main()
{
	long long int t,n,m,i,j,k;
	cin>>t;
	for(i=0;i<t;i++)
	{
		cin>>n>>m;
		while(n>2 && m>2)
		{
			if(m>n)
			{
				if(n%2==1)
				{
					j=n-1;
					n=1;
					m=m-j;
					
				}
				else
				{
					j=n-2;
					n=2;
					m=m-j;
				}
			}
			else
			{
				if(m%2==1)
				{
					j=m-1;
					m=1;
					n=n-j;
					
				}
				else
				{
					j=m-2;
					m=2;
					n=n-j;
				}
			}
		}
		if(m==1 && n==1)
		{
			cout<<"R"<<endl;
			continue;
		}
		else if(m==2 && n==2)
		{
			cout<<"L"<<endl;
			continue;
		}
		else if(m==1)
		{
			cout<<"D"<<endl;
		}
		else if(n==1)
		{
			cout<<"R"<<endl;
		}
		else if(m==2)
		{
			cout<<"U"<<endl;
		}
		else if(n==2)
		{
			cout<<"L"<<endl;
		}
	}
	return 0;
}
