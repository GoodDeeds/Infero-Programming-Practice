#include<iostream>
#include<cmath>
using namespace std;
long long int f(long long int x)
{
	if(x==0)
	{
		return 0;
	}
	else if(x==1)
	{
		return 1;
	}
	else if(x==2)
	{
		return 2;
	}
	long long int temp=sqrt(x);
	
	for(long long int i=temp;i>1;i--)
	{
		if(x%i==0)
		{
			return f(i)+f(x/i);
		}
	}
	return 0;
}
int main()
{
	long long int x;
	cin>>x;
	cout<<f(x)<<endl;
	return 0;
}
