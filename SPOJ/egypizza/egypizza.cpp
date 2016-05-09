#include<iostream>
using namespace std;
int main()
{
	long long int t,nume,deno,arr[3],i,res=0;
	arr[0]=arr[1]=arr[2]=0;
	char dummy;
	cin>>t;
	for(i=0;i<t;i++)
	{
		cin>>nume>>dummy>>deno;
		if(nume==3)
		{
			arr[0]++;
		}
		else if(deno==2)
		{
			arr[1]++;
		}
		else
		{
			arr[2]++;
		}
	}
	res+=arr[0];
	if(arr[2]>arr[0])
	{
		
		arr[2]-=arr[0];
	}
	else
	{
		
		arr[2]=0;
	}
	res+=arr[1]/2;
	if(arr[1]%2==1)
	{
		res++;
		arr[2]-=2;
		
	}
	
	if(arr[2]>0)
	{
		long long int temp=arr[2]%4;
		res+=arr[2]/4;
		if(temp!=0)
		{
			res++;
		}
		
	}
	res++;
	cout<<res<<endl;
	return 0;	
}
