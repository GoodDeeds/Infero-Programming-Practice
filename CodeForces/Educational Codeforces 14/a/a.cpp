#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,c0=0,c1=0,inp;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>inp;
		if(inp==0)
		{
			c0++;
		}
		else
		{
			c1++;
		}
	}
	if(n!=1 && c0==1)
	{
		cout<<"YES"<<endl;
	}
	else if(n==1 && c1==1)
	{
		cout<<"YES"<<endl;
	}
	else
	{
		cout<<"NO"<<endl;
	}
	return 0;
}
