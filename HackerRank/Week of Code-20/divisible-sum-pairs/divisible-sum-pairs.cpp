#include<iostream>
#include<vector>
using namespace std;
int main()
{
	long long int n,k,i,j,l,count=0;
	cin>>n>>k;
	vector<long long int> arr(n);
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
		arr[i]%=k;
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if((arr[i]+arr[j]==k) || (arr[i]+arr[j]==0))
			{
				count++;
			}
		}
	}
	cout<<count<<endl;
	return 0;
}
