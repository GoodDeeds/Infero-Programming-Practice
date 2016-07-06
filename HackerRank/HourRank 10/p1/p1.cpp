#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n,k,i,j;
	cin>>n>>k;
	long long *c=new long long[n];
	for(i=0;i<n;i++)
	{
		cin>>c[i];
	}
	long long e=100;
	long long curc=0;
	do
	{
		e--;
		curc=(curc+k)%n;
		if(c[curc]==1)
		{
			e-=2;
			
		}
		
	}while(curc!=0);
	cout<<e<<endl;
	return 0;
}
