#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long t,n,i,j,k,sum,res,logval,subst;
	cin>>t;
	while(t--)
	{
		cin>>n;
		sum=(n*(n+1))/2;
		logval=(long long)(log2(n));
		subst=2*(pow(2,logval+1)-1);
		res=sum-subst;
		cout<<res<<endl;
		
	}
	return 0;
}
