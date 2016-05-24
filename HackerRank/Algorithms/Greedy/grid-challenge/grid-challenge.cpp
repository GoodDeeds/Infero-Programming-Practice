#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
	long long int t,n,i,j,k,l;
	cin>>t;
	for(i=0;i<t;i++)
	{
		cin>>n;
		vector<string> arr(n);
		for(j=0;j<n;j++)
		{
			cin>>arr[j];
			sort(arr[j].begin(),arr[j].end());
		}
		int flag=0;
		for(j=0;j<n-1;j++)
		{
			for(k=0;k<n;k++)
			{
				if(arr[j][k]>arr[j+1][k])
				{
					flag=1;
					break;
				}
			}
		}
		if(flag==1)
		{
			cout<<"NO"<<endl;
		}
		else
		{
			cout<<"YES"<<endl;
		}
	}
	return 0;
}
