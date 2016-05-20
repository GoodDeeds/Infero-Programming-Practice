//wrong answer and time limit exceeded
#include<iostream>
#include<vector>
using namespace std;
int main()
{
	long long int n,m,t,i,j,k,l;
	cin>>t;
	for(i=0;i<t;i++)
	{
		cin>>n>>m;
		vector<long long int> arr(n);
		for(j=0;j<n;j++)
		{
			cin>>arr[j];
		}
		long long int sum=0,maxsum=arr[0];
		for(j=0;j<n;j++)
		{
			sum=0;
			for(k=j;k<n;k++)
			{
				sum+=(arr[k]%m);
				sum=sum%m;
				if(sum>maxsum)
				{
					maxsum=sum;
					//cout<<sum<<endl;
				}
			}
		}
		cout<<maxsum<<endl;
	}
	return 0;
}
