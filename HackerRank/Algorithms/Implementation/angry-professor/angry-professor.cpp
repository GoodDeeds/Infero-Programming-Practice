//on checking count after each iteration, 'Abort called' was received. Why?
#include<iostream>
#include<vector>
using namespace std;
int main()
{
	long long int t,n,k,i,j,l,count=0,flag=0;
	cin>>t;
	for(i=0;i<t;i++)
	{
		cin>>n>>k;
		count=0;
		flag=0;
		vector<long long int> arr(n);
		for(j=0;j<n;j++)
		{
			cin>>arr[j];
			if(arr[j]<=0)
			{
				count++;
			}
			
		}
		if(count>=k)
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
