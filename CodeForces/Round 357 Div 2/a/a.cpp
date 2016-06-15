#include<bits/stdc++.h>
#define MOD 1000000007
using namespace std;
int main()
{
	long long n,b,a;
	string h;
	cin>>n;
	int flag=0;
	while(n--)
	{
		cin>>h>>b>>a;
		if(b>=2400 && a>b)
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
