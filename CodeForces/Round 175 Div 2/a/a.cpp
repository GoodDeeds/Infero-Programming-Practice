#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k;
	cin>>n>>k;
	int i=0;
	for(i=0;i<k;i++)
	{
		cout<<n-i<<" ";
	}
	n=n-i;
	for(i=1;i<=n;i++)
	{
		cout<<i<<" ";
	}
	cout<<endl;
	return 0;
}
