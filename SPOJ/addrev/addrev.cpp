#include<iostream>
using namespace std;
long long int reverse_number(long long int num)
{
	
	long long int res=0;
	while(num!=0)
	{
		long long int k=num%10;
		res+=k;
		res*=10;
		num/=10;
	}
	res/=10;
	
	return res;
}
int main()
{
	long long int t,n1,n2;
	cin>>t;
	for(long long int i=0;i<t;i++)
	{
		cin>>n1>>n2;
		n1=reverse_number(n1);
		n2=reverse_number(n2);
		long long int sum=n1+n2;
		sum=reverse_number(sum);
		cout<<sum<<endl;
	}
	return 0;
} 
