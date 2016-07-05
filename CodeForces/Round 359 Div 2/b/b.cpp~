#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n,i,j,k,temp;
	cin>>n;
	long long *arr=new long long[n];
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int flag=0;
	for(i=0;i<n;i++)
	{
		flag=0;
		for(j=0;j<n-i-1;j++)
		{
			
			if(arr[j]>arr[j+1])
			{
				flag=1;
				cout<<(j+1)<<" "<<(j+2)<<endl;
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
				
			}
		}
		if(flag==0)
		{
			break;
		}
	}
	return 0;
}
