#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n,i,j,k,dist,mind=-1;
	cin>>n;
	long long *arr=new long long[n];
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
		
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i]==arr[j])
			{
				dist=j-i;
				if(mind==-1 || mind>dist)
				{
					mind=dist;
				}
			}
		}
	}
	cout<<mind<<endl;
	return 0;
}
