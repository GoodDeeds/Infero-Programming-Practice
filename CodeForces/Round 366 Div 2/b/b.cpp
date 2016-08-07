#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n,i,j,k,counte=0,a;
	cin>>n;
	while(n--)
	{
		cin>>a;
		if(a%2==0)
		{
			counte++;
		}
		if(counte%2==0)
		{
			cout<<"2"<<endl;
		}
		else
		{
			cout<<"1"<<endl;
		}
	}
	return 0;
}
