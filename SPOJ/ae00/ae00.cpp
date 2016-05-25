#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n,i,j,k,l,sum=0;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		
			sum+=(n/i);
		
	}
	j=sqrt(n);
	sum+=j;
	sum/=2;
	
	cout<<sum<<endl;
	return 0;
}
