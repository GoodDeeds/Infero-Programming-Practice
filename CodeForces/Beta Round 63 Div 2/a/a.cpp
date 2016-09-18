#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,xs=0,ys=0,zs=0,x,y,z;
	cin>>n;
	while(n--)
	{
		cin>>x>>y>>z;
		xs+=x;
		ys+=y;
		zs+=z;
	}
	if(xs!=0 || ys!=0 || zs!=0)
	{
		cout<<"NO"<<endl;
	}
	else
	{
		cout<<"YES"<<endl;
	}
	return 0;
}
