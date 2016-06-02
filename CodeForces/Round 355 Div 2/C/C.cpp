#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int countzeroes(int num)
{
	int count=0;
	if(num<1)
	{
		count++;
	}
	if(num<2)
	{
		count++;
	}
	if(num<4)
	{
		count++;
	}
	if(num<8)
	{
		count++;
	}
	if(num<16)
	{
		count++;
	}
	if(num<32)
	{
		count++;
	}
	
	while(num>0)
	{
		if(num%2==0)
		{
			count++;
		}
		num/=2;
	}
	//cout<<"c: "<<count<<endl;
	return count;
	
}
int main()
{
	string inp;
	long long i,j,k,l,count=1;
	cin>>inp;
	for(i=0;i<inp.size();i++)
	{
		if(inp[i]>=48 && inp[i]<=57)
		{
			count*=(long long)pow(3,countzeroes(inp[i]-48));
		}
		else if(inp[i]>=65 && inp[i]<=90)
		{
			count*=(long long)pow(3,countzeroes(inp[i]-55));
		}
		else if(inp[i]>=97 && inp[i]<=122)
		{
			count*=(long long)pow(3,countzeroes(inp[i]-61));
		}
		else if(inp[i]=='-')
		{
			count*=(long long)pow(3,countzeroes(62));
		}
		else if(inp[i]=='_')
		{
			count*=(long long)pow(3,countzeroes(63));
		}
		count%=(1000000007);
		
			
		
	}
	cout<<count<<endl;
	return 0;
}
