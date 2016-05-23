#include<iostream>
#include<vector>
using namespace std;
int main()
{
	long long int n,i,sum=0;
	cin>>n;
	vector<long long int> arr(n);
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
		sum+=arr[i];
	}
	cout<<sum<<endl;
	return 0;
}
