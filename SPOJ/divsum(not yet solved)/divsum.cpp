#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	long long int t,n,i,j,sum;
	cin>>t;
	for(i=0;i<t;i++)
	{
		cin>>n;
		sum=0;
		for(j=1;j<sqrt(n);j++)
		{
			if(n%j==0)
			{
				sum+=j;
				sum+=n/j;
			}
		}
		if(pow(sqrt(n),2)==n)
		{
			
			sum+=sqrt(n);
		}
		//cout<<"POW "<<pow(sqrt(n),2)<<endl;
		sum-=n;
		cout<<sum<<endl;
		
	}
	return 0;
}
