#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
	long long int n,m,i,j,k,l,maxi=0,sum=0;
	long double avg;
	cin>>n>>m;
	vector<long long int> arr(n);
	
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
		if(maxi<arr[i])
		{
			maxi=arr[i];
		}
		sum+=arr[i];
		
	}
	avg=((long double)sum)/m;
	sort(arr.begin(),arr.end());

	j=max((long long int)ceil(avg),maxi);
	cout<<j<<endl;
	return 0;
	
}
