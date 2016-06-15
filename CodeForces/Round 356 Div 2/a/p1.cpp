#include<iostream>
#include<cmath>
#include<algorithm>
#include<string>
#include<vector>
#include<iomanip>
using namespace std;
int main()
{
	int arr[5];
	int i,j,k,sum=0;
	for(i=0;i<5;i++)
	{
		cin>>arr[i];
		sum+=arr[i];
	}
	sort(arr,arr+5);
	int maxsum=-1;
	for(i=0;i<3;i++)
	{
		if(arr[i]==arr[i+1] && arr[i]==arr[i+2] && (arr[i]+arr[i+1]+arr[i+2])>maxsum)
		{
			maxsum=arr[i]+arr[i+1]+arr[i+2];
		}
	}
	for(i=0;i<4;i++)
	{
		if(arr[i]==arr[i+1] && (arr[i]+arr[i+1])>maxsum)
		{
			maxsum=arr[i]+arr[i+1];
		}
	}
	if(maxsum==-1)
	{
		cout<<sum<<endl;
	}
	else
	{
		cout<<(sum-maxsum)<<endl;
	}
	return 0;
}
