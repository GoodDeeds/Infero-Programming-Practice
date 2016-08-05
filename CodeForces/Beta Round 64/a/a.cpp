#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n,mod=1000003,i,j,res=1;
	cin>>n;
	for(i=0;i<n-1;i++)
	{
		res*=3;
		if(res>mod)
		{
			res%=mod;
		}
	}
	cout<<res<<endl;
}
