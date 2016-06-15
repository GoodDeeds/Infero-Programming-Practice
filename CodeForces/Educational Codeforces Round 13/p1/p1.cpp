#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n,k,t,diff,res;
	cin>>n>>k;
	t=n%k;
	diff=k-t;
	res=n+diff;
	cout<<res<<endl;
	return 0;
}
