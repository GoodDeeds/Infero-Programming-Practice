#include<iostream>
using namespace std;
int main()
{
	long long int n,q,*arr,i,j,k,x,y,z;
	cin>>n>>q;
	arr=new long long int[n];
	for(z=0;z<n;z++)
	{
		cin>>arr[z];
	}
	for(x=0;x<q;x++)
	{
		cin>>i>>j>>k;
		long long int sum=0;
		y=i-1;
		int flag=0;
		while(y!=j)
		{
			for(z=0;z<k;z++)
			{
				if(flag==0)
				{
					sum+=arr[y+z];
					//cout<<"Sa "<<sum<<" "<<arr[y+z]<<" "<<y<<" "<<z<<endl;
				}
				else
				{
					sum-=arr[y+z];
					//cout<<"Ss "<<sum<<" "<<arr[y+z]<<" "<<y<<" "<<z<<endl;
				}
			}
			if(flag==0)
			{
				flag=1;
			}
			else
			{
				flag=0;
			}
			y+=k;
		}
		cout<<sum<<endl;
		
	}
	return 0;
}
