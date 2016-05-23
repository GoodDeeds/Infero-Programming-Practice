//Is this method any better than checking each range till a 1 or a 2 is encountered?
#include<iostream>
#include<vector>
using namespace std;
int main()
{
	long long int t,n,i,j,x,y,z,in1=0,in2=0,in3=0;
	cin>>n>>t;
	vector<long long int> arr(n);
	vector<long long int> a1(n);
	vector<long long int> a2(n);
	vector<long long int> a3(n);
	for(x=0;x<n;x++)
	{
		cin>>arr[x];
		if(arr[x]==1)
		{
			a1[in1]=x;
			in1++;
		}
		if(arr[x]==2)
		{
			a2[in2]=x;
			in2++;
		}
		if(arr[x]==3)
		{
			a3[in3]=x;
			in3++;
		}
	}
	for(x=0;x<t;x++)
	{
		cin>>i>>j;
		int flag=0;
		for(y=0;y<in1;y++)
		{
			if(i<=a1[y] && j>=a1[y])
			{
				flag=1;
				break;
			}
		}
		if(flag==1)
		{
			cout<<"1"<<endl;
			continue;
		}
		for(y=0;y<in2;y++)
		{
			if(i<=a2[y] && j>=a2[y])
			{
				flag=1;
				break;
			}
		}
		if(flag==1)
		{
			cout<<"2"<<endl;
		}
		else
		{
			cout<<"3"<<endl;
		}
		
	}
	return 0;
}
