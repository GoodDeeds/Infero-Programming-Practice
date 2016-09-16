#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,parc[2]={0},totval=0,val;
	cin>>n;
	while(n--)
	{
		cin>>val;
		parc[val%2]++;	
		totval+=val;	
	}
	if(totval%2==0)
	{
		cout<<parc[0]<<endl;
	}
	else
	{
		cout<<parc[1]<<endl;
	}
	return 0;
}
