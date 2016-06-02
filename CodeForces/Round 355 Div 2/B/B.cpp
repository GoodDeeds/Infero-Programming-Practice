#include<iostream>
using namespace std;
int main()
{
	long long n,h,k,i,j,count=0,tim=0;
	cin>>n>>h>>k;
	long long *arr=new long long[n];
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
		if((count+arr[i])<=h)
		{
			count+=arr[i];
		}
		else
		{
			/*while((count+arr[i])>h)
			{
				count-=k;
			
				if(count<0)
				{	
					count=0;
				}
				tim++;
			}*/
			long long temp=count/k;
			count-=(temp*k);
			tim+=temp;
			if((count+arr[i])>h)
			{
				
				count=0;
				tim++;
			}
			count+=arr[i];	
			//cout<<"i: "<<i<<" count: "<<count<<" temp: "<<temp<<" tim: "<<tim<<endl;
		}
	}
	long long temp=count/k;
	count-=(temp*k);
	tim+=temp;
	if(count>0)
	{
		tim++;
	}
	cout<<tim<<endl;
	return 0;
}
