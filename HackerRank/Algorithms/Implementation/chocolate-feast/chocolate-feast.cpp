#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	long long int t,n,c,m,i,j,k,l,res=0,lef=0;
	cin>>t;
	for(i=0;i<t;i++)
	{
		res=0;
		lef=0;
		cin>>n>>c>>m;
		j=n/c;
		k=j;
		res+=j;
		
		l=k/m;
		lef=k-m*l;
		while(l>0)
		{
			res+=l;
			k=l+lef;
			l=k/m;
			lef=k-m*l;
		}
		cout<<res<<endl;
	}
	return 0;
}
