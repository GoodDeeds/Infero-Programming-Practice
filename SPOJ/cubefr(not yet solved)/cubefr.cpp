#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int t,n,i,j,k,sum;
	cin>>t;
	for(i=0;i<t;i++)
	{
		cin>>n;
		cout<<"Case "<<i+1<<": ";
		sum=n;
		j=1;
		if(n==1)
		{
			cout<<"1"<<endl;
			continue;	
		}
		//while(pow(j,3)<n)
		//{
			//j++;
		//}
		int flag=0;
		for(k=2;k<=cbrt(n);k++)
		{
			if(n%(int)(pow(k,3))==0)
			{
				cout<<"Not Cube Free"<<endl;
				flag=1;
				break;
			}
			int temp=n/pow(k,3);//problem as multiples of 2^3 3^3 6^3 counted multiple times
			sum-=temp;
		}
		if(flag==0)
		cout<<sum<<endl;
	}
	return 0;
}
