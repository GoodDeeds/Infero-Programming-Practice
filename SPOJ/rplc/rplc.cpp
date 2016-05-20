#include<iostream>
using namespace std;
int main()
{
	long long int t,n,*arr,i,j,k,l,sum=0,min=1;
	cin>>t;
	for(i=0;i<t;i++)
	{
		cout<<"Scenario #"<<i+1<<": ";
		cin>>n;
		arr=new long long int[n];
		sum=0;
		min=1;
		for(j=0;j<n;j++)
		{
			cin>>arr[j];
			sum+=arr[j];
			if(sum<min)
			{
				min=sum;
			}
		}
		if(min==1)
		{
			cout<<min<<endl;
		}
		else
		{
			cout<<1-min<<endl;
		}
	}
	return 0;
}
