#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,val,tot=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>val;
		tot+=val;
	}
	long double res=((long double)(tot))/((long double)(n));
	cout<<fixed<<setprecision(12)<<res<<endl;
	return 0;
}
