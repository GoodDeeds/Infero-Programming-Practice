//Help from Chandra Kiran, also referred to Geeks for Geeks
#include<bits/stdc++.h>
using namespace std;
/*int main()
{
	long long n,d,i,j,k;
	while(true)
	{
		cin>>n>>d;
		if(n==0)
		{
			break;
		}
		vector<long long> arr;
		arr.clear();
		for(i=1;i<=n;i++)
		{
			arr.push_back(i);
		}
		i=0;
		d--;
		while(arr.size()>1)
		{
			i=(i+d)%arr.size();
			arr.erase(arr.begin()+i);		
		}
		cout<<n<<" "<<d+1<<" "<<arr[0]<<endl;
	}
	return 0;
}*/
long long f(long long n,long long d)
{
	long long res=0;
	long long *arr=new long long[n+1];
	arr[1]=1;
	/*if(n==1)
	{
		return 1;
	}
	return (((f(n-1,d)+d-1)%n)+1);*/
	for(long long i=2;i<=n;i++)
	{
		arr[i]=(arr[i-1]+d-1)%i+1;
		
	}
	return arr[n];
}
int main()
{
	long long n,d,i,j,k;
	while(true)
	{
		cin>>n>>d;
		if(n==0)
		{
			break;
		}
		cout<<n<<" "<<d<<" "<<f(n,d)<<endl;
	}
	return 0;
	
	
}
