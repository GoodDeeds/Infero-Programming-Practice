#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long t,s,x,i,j,k;
	cin>>t>>s>>x;
	if(x<t)
	{
		cout<<"NO"<<endl;
		return 0;
	}
	long long diff=x-t;
	if((x-t)%s==0)
	{
		cout<<"YES"<<endl;
	}
	else if((x-t-1)==0)
	{
		cout<<"NO"<<endl;
	}
	else if((x-t-1)%s==0)
	{
		cout<<"YES"<<endl;
	}
	else
	{
		cout<<"NO"<<endl;
	}
	return 0;
}
