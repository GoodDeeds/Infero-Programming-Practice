#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	long long int t,a,b,i,j,k,l,num=0;
	cin>>t;
	for(i=0;i<t;i++)
	{
		cin>>a>>b;
		j=ceil(sqrt(a));
		k=floor(sqrt(b));
		l=k-j+1;
		cout<<l<<endl;
	}
	return 0;
}
