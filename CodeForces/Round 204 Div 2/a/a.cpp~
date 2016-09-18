#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,a,cf=0,cz=0;
	cin>>n;
	while(n--)
	{
		cin>>a;
		if(a==0)
		{
			cz++;
		}
		else
		{
			cf++;
		}
	}
	if(cz==0)
	{
		cout<<"-1"<<endl;
		return 0;
	}
	if(cf>=9)
	{
		int usef=cf/9;
		cf=usef*9;
		for(int i=0;i<cf;i++)
		{
			cout<<"5";
		}		
		for(int i=0;i<cz;i++)
		{
			cout<<"0";
		}
		cout<<endl;
		return 0;
	}
	else
	{
		cout<<"0"<<endl;
		return 0;
	}
	return 0;
}
