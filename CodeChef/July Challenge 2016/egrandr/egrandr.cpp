#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long t,n,sum=0,avg,i,j,flag=0,flagf=0;
	cin>>t;
	while(t--)
	{
		cin>>n;
		long long *arr=new long long[n];
		sum=0;
		for(i=0;i<n;i++)
		{
			cin>>arr[i];
			sum+=arr[i];
		}
		sort(arr,arr+n);
		if(arr[0]>2 && arr[n-1]==5 && (sum/n)>=4)
		{
			cout<<"Yes"<<endl;
		}
		else
		{
			cout<<"No"<<endl;
		}
		/*flag=0;
		flagf=0;
		sum=0;
		for(i=0;i<n;i++)
		{
			cin>>j;
			sum+=j;
			if(j==5)
			{
				flag=1;
			}
			if(j==2)
			{
				flagf=1;
				
			}
		}
		if(flag==0 || flagf==1)
		{
			cout<<"No"<<endl;
			continue;
		}
		avg=sum/n;
		if(avg>=4)
		{
			cout<<"Yes"<<endl;
		}
		else
		{
			cout<<"No"<<endl;
		}*/
	}
	return 0;
}
