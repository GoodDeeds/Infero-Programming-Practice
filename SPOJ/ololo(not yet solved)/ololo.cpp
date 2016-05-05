#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	long long int t,n;
	cin>>t;
	long long int *arr=new long long int[t];
	for(long long int i=0;i<t;i++)
	{
		cin>>n;
		arr[i]=n;
		
	}
	sort(arr,arr+t);
	int flag=0;
	for(long long int i=0;i<t-1;)
	{
		if(arr[i]==arr[i+1])
		{
			i+=2;
		}
		else
		{
			flag=1;
			cout<<arr[i];
			break;
		}
	}
	if(flag==0)
	{
		cout<<arr[t-1];
		
	}
	return 0;
}
