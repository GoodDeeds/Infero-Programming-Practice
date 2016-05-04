#include<iostream>
using namespace std;
int main()
{
	long long int t,n;
	cin>>t;
	for(long long int i=0;i<t;i++)
	{
		cin>>n;
		long long int sum1=(2*n*(n+1))/2;
		long long int sum2=(n*(n-1))/2;
		long long int res=(sum1+sum2)%1000007;
		cout<<res<<endl;
	}
	return 0;
}
