#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	long long x,y,e,i,j,k;
	long double logy,logx,temp;
	while(n--)
	{
		cin>>x>>y;
		logx=log10(x);
		for(i=1;i<=1000;i++)
		{
			if(((long long)(pow(10,ceil((long double)(i)*logx)-((long double)(i)*logx))))==y)
			{
				cout<<i<<endl;
				break;
			}
			if(i==6)
			{
				cout<<"6: "<<(long long)(pow(10,(long double)(i)*logx))<<" "<<y<<endl;
			}
		}
		
	}
	return 0;
}
