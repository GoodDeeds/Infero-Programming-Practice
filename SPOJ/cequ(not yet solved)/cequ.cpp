#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	long long int t,a,b,c,i,j,k,l;
	cin>>t;
	for(i=0;i<t;i++)
	{
		cin>>a>>b>>c;
		cout<<"Case "<<i+1<<": ";
		int flag=0;
		if(b<=a)
		{
			for(j=0;j<b;j++)
			{
				if((c-a*j)%b==0)
				{
					flag=1;
					break;
				}
			}
		}
		else
		{
			for(j=0;j<a;j++)
			{
				if((c-b*j)%a==0)
				{
					flag=1;
					break;
				}
			}	
		}	
		if(flag==0)
		{
			cout<<"No"<<endl;
		}
		else
		{
			cout<<"Yes"<<endl;
		}
	}
	return 0;
}
