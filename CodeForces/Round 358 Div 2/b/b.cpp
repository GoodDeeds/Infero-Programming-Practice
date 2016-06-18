#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n,i,j,k;
	cin>>n;
	long long *arr=new long long[n];
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	sort(arr,arr+n);
	long long cnt=1;
	j=0;
	for(i=0;i<n;i++)
	{
		if(arr[i]>=(cnt+j))
		{
			arr[i]=cnt+j;
			j++;
		}
		
	}
	cout<<(arr[n-1]+1)<<endl;
	return 0;
}
