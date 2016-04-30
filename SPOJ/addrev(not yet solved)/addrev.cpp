#include<iostream>
using namespace std;
unsigned long reverse_number(unsigned long num)
{
	
	unsigned long res=0;
	while(num!=0)
	{
		unsigned long k=num%10;
		res+=k;
		res*=10;
		num/=10;
	}
	res/=10;
	
	return res;
}
int main()
{
	unsigned long t,n1,n2,sum;
	cin>>t;
	for(unsigned long i=0;i<t;i++)
	{
		cin>>n1>>n2;
		n1=reverse_number(n1);
		n2=reverse_number(n2);
		unsigned long sum=n1+n2;
		sum=reverse_number(sum);
		cout<<sum<<endl;
	}
	return 0;
} 
