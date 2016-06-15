#include<iostream>
#include<cmath>
#include<algorithm>
#include<string>
#include<vector>
#include<iomanip>
using namespace std;
int main()
{
	int a,n,i,j,k;
	cin>>n>>a;
	int *t=new int[n];
	for(i=0;i<n;i++)
	{
		cin>>t[i];
		
	}
	int res=0;
	for(i=(a-1);i>=0;i--)
	{
		if(t[i]==1)
		{
			if((2*a-i-2)<n && t[2*a-2-i]==1)
			{
				if(i!=(2*a-2-i))
					res+=2;
				else
					res++;
			}
			else if((2*a-i-2)>=n)
			{
				res++;
			}
		}
		
		
		
	}
	for(i=(2*a-1);i<n;i++)
	{
		if(t[i]==1)
		{
			res++;
		}
	}
	cout<<res<<endl;
	return 0;
}
