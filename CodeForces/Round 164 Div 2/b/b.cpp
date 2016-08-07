#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n,i,j,k,res=0;
	cin>>n;
	for(i=1;i<n;i++)
	{
		res++;
		res+=(i*(n-i));
	}
	res++;
	cout<<res<<endl;
	return 0;
}
