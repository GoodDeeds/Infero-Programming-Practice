#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int size,temp,i,j;
	cin>>size;
	vector<int> arr(size);
	for(i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	temp=arr[size-1];
	i=size-2;
	while(temp<arr[i] && i>=0)
	{
		arr[i+1]=arr[i];
		for(j=0;j<size;j++)
		{
			cout<<arr[j]<<" ";
		}
		cout<<endl;
		i--;
	}
	arr[i+1]=temp;
	for(j=0;j<size;j++)
	{
		cout<<arr[j]<<" ";
	}
	cout<<endl;
	return 0;
	
}

