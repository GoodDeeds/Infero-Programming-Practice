#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	long long int n,*arr,i,j,k,l;
	cin>>n;
	while(n!=0)
	{
		arr=new long long int[n];
		for(i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		sort(arr,arr+n);
		int flag=0;
		
		for(i=1;i<n;i++)
		{
			if(arr[i]-arr[i-1]>200)
			{
				flag=1;
				break;
			}
		}
		if(1422-arr[n-1]>100)
		{
			flag=1;
		}
		if(flag==1)
		{
			cout<<"IMPOSSIBLE"<<endl;
		}
		else
		{
			cout<<"POSSIBLE"<<endl;
		}
		cin>>n;
	}
	return 0;
}
