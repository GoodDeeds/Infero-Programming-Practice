#include<iostream>
#include<vector>
using namespace std;
int main()
{
	long long int t,n,i,j,k,l,sum1=0,sum2=0;
	cin>>t;
	for(i=0;i<t;i++)
	{
		cin>>n;
		sum1=sum2=0;
		vector<long long int> arr(n);
		int flag=0;
		for(j=0;j<n;j++)
		{
			cin>>arr[j];
			
			if(arr[j]<0)
			{
				flag=1;
			}
		}
		if(flag==0)
		{
			for(j=0;j<n;j++)
			{
				sum1+=arr[j];
			}
			cout<<sum1<<" "<<sum1<<endl;
			continue;
		}
		long long int maxsum=arr[0];
		for(j=0;j<n;j++)
		{
			sum1=0;
			for(k=j;k<n;k++)
			{
				sum1+=arr[k];
				if(maxsum<sum1)
				{
					maxsum=sum1;
				}
			}
		}
		cout<<maxsum<<" ";
		flag=0;
		for(j=0;j<n;j++)
		{
			if(arr[j]>0)
			{
				flag=1;
				sum2+=arr[j];
			}
		}
		if(flag==0)
		{
			long long int maxi=arr[0];
			for(j=0;j<n;j++)
			{
				if(arr[j]>maxi)
				{
					maxi=arr[j];
				}
			}
			cout<<maxi<<endl;
		}
		else
		{
			cout<<sum2<<endl;
		}	
	}
	return 0;
}
