#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	long long int n,t,c,*x,i,j;
	cin>>t;
	for(i=0;i<t;i++)
	{
		cin>>n>>c;
		x=new long long int[n];
		for(j=0;j<n;j++)
		{
			cin>>x[j];
		}	
		sort(x,x+n);
		
	}
}
