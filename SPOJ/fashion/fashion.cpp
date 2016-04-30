#include<iostream>
using namespace std;
void bubble_sort(int *arr,int size)
{
	for(int i=0;i<size-1;i++)
	{
		for(int j=0;j<size-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				int t=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=t;
			}
		}
	}
}
int main()
{
	int t,n,*n1,*n2;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		cin>>n;
		int sum=0;
		n1=new int[n];
		n2=new int[n];		
		for(int j=0;j<n;j++)
		{
			cin>>n1[j];
		}
		for(int j=0;j<n;j++)
		{
			cin>>n2[j];
		}
		bubble_sort(n1,n);
		bubble_sort(n2,n);
		for(int j=0;j<n;j++)
		{
			sum+=(n1[j]*n2[j]);
		}
		cout<<sum<<endl;
	}
	return 0;
}
