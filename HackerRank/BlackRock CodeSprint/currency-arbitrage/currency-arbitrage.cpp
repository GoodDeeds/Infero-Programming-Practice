#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
	int n,i,j;
	long double a,b,c;
	cin>>n;
	while(n--)
	{
		cin>>a>>b>>c;
		if((a*b*c)>1)
		{
			cout<<"0"<<endl;
			continue;
		}
		long double div=(long double)(a*b*c);
		long double res=(100000.000000)/(div);
		
	/*	res=((long double)res)/a;
		res=((long double)res)/b;
		res=((long double)res)/c;
		res+=1e-6;*/
		res-=100000;
		cout<<fixed;
		cout<<setprecision(0);
		res=(long long)(res);
		if(res<0)
		{
			cout<<"0"<<endl;
		}
		else
		{
			cout<<res<<endl;
		}
	}
	return 0;
}
