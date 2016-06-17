#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	long long q,n,t,i,j,k;
	cin>>n>>q;
	long long *arr=new long long[n];
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	sort(arr,arr+n);
	for(i=0;i<q;i++)
	{
		cin>>t;
		if(t>arr[n-1] || t<arr[0])
		{
			cout<<"No"<<endl;	
		}
		else
		{
			cout<<"Yes"<<endl;
		}
		
	}
	return 0;
}
