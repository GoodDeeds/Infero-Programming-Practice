#include<iostream>
using namespace std;
unsigned long check_split(unsigned long num)
{
	unsigned long sum=0;
	unsigned long n1=num/2;
	unsigned long n2=num/3;
	unsigned long n3=num/4;
	if(n1+n2+n3>num)
	{
		sum+=check_split(n1);
		sum+=check_split(n2);
		sum+=check_split(n3);
	}
	else
	{
		sum=num;
	}
	return sum;
}
int main()
{
	unsigned long n,res;
	while(cin>>n)
	{
		res=check_split(n);
		cout<<res<<endl;
	} 
	return 0;
}
