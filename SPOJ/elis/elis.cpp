#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int maxlength(int min,int arr[],int beg,int end)
{
	if(beg==end && arr[beg]>min)
	{
		return 1;
	}
	for(int i=beg;i<=end;i++)
	{
		if(min<arr[i])
		{
			//cout<<"Hi"<<endl;
			return max(1+maxlength(arr[i],arr,i+1,end),maxlength(min,arr,i+1,end));
		}
	}
	return 0;
}
int main()
{
	int n,i,j;
	cin>>n;
	int *arr=new int[n];
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	int maxval=0;
	for(i=0;i<n;i++)
	{
		j=1+maxlength(arr[i],arr,i,n-1);
		if(j>maxval)
		{
			maxval=j;
		}
	}
	cout<<maxval<<endl;
	return 0;
}
