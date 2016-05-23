#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	long long int t,n,temp,res,i,j,k,l;
	cin>>t;
	for(i=0;i<t;i++)
	{
		cin>>n;
		temp=pow(2,(int)(n/2));
		res=2*temp-1;
		if(n%2==1)
		{
			res*=2;
		}
		cout<<res<<endl;
	}
}


