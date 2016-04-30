#include<iostream>
using namespace std;
unsigned long fact(unsigned long num)
{
	if(num==0 || num==1)
	{
		return 1;
	}
	return num*fact(num-1);
}
unsigned long fact2(unsigned long num)
{
	unsigned long sum=1;
	while(num>1)
	{
		sum*=num;
		num--;
		cout<<sum<<endl;
	}
	return sum;
}
int main()
{
	unsigned long t,n;
	cin>>t;
	for(unsigned long i=0;i<t;i++)
	{
		cin>>n;
		cout<<fact2(n)<<endl;
	}
	return 0;
}
