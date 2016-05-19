#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
	long long int t,n,m,d,*arr,i,j,k,l;
	cin>>t;
	for(i=0;i<t;i++)
	{
		cin>>n>>m>>d;
		arr= new long long int[n];
		for(j=0;j<n;j++)
		{
			cin>>arr[j];
		}
		sort(arr,arr+n);
		int flag=0;
		for(j=n-1;j>=0;j--)
		{
			while(arr[j]>d)
			{
				arr[j]-=d;
				m--;
			}
			if(m<=0)
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
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
