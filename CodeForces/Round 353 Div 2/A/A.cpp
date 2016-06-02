#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	long long a,b,c;
	long double temp;
	cin>>a>>b>>c;
	if(c!=0)
	{
		temp=((long double)(b-a))/c;
	}
	else
	{
		temp=1;
	}
	if(((long long)temp)*c==(b-a) && temp>=0)
	{
		cout<<"YES"<<endl;
	}
	else
	{
		cout<<"NO"<<endl;
	}
	return 0;
	
}
