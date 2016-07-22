#include<iostream>
using namespace std;
int main()
{
	long long t,n,i,j,k;
	cin>>t;
	while(t--)
	{
		cin>>n;
		long long *arr=new long long[n];
		int flag=0;
		for(i=0;i<n;i++)
		{
			cin>>arr[i];
			if(i>=2 && arr[i]==arr[i-1] && arr[i]==arr[i-2])
			{
				flag=1;
			}
		}
		if(flag==0)
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
