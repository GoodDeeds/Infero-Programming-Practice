#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n,i,j,k,sum=0,val;
	cin>>n;
	long long *arr=new long long[n];
	long long *arr2=new long long[n];
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
		arr2[i]=1;
		sum+=arr[i];
	}
	val=(sum*2)/n;
	for(i=0;i<n;i++)
	{
		if(arr2[i]==1)
		{
			for(j=i+1;j<n;j++)
			{
				if((arr[i]+arr[j]==val) && arr2[j]==1)
				{
					cout<<(i+1)<<" "<<(j+1)<<endl;
					arr2[i]=arr2[j]=0;
					break;
				}
			}
			
		}
	}
	return 0;
}
