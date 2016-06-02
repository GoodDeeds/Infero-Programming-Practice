#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n,i,j,maxpos=0,minpos=0;
	cin>>n;
	int *arr=new int[n];
	
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
		if(arr[i]>arr[maxpos])
		{
			maxpos=i;
		}
		if(arr[i]<arr[minpos])
		{
			minpos=i;
		}
		
	}
	if(maxpos<=minpos)
	{
		cout<<max(abs(n-1-maxpos),abs(minpos));
	}
	else
	{
		cout<<max(abs(n-1-minpos),abs(maxpos));
	}
	return 0;
}
