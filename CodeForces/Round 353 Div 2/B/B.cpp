#include<iostream>
using namespace std;
int main()
{
	int n,arr[4],i,j,k,flag=0,maxsum=0,minsum=0;
	cin>>n;
	cin>>arr[0]>>arr[3]>>arr[1]>>arr[2];
	maxsum=arr[0]+arr[1],minsum=arr[0]+arr[1];
	for(j=0;j<4;j++)
	{
		if((arr[j]+arr[(j+1)%4])>maxsum)
		{
			maxsum=arr[j]+arr[(j+1)%4];
		}
		if((arr[j]+arr[(j+1)%4])<minsum)
		{
			minsum=arr[j]+arr[(j+1)%4];
		}
	}
	//cout<<"max: "<<maxsum<<" min: "<<minsum<<endl;
	long long upsum=n+minsum;
	long long downsum=1+maxsum;
	if(upsum>=downsum)
	{
		long long res=(upsum-downsum+1)*n;
		cout<<res<<endl;
	}
	else
	{
		cout<<"0"<<endl;
	}
	return 0;			
	
}
