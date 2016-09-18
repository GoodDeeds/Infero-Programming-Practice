#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,a,b;
	cin>>n>>a>>b;
	int si=a+1;
	if(n-si>b)
	{
		si=n-b;
	}
	if(si>0 && si<=n)
	{
		cout<<(n-si+1)<<endl;
	}
	else
	{
		cout<<"0"<<endl;
	}
	return 0;
}
