#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	long long int c,n,i,j,k,l;
	cin>>c;
	for(i=0;i<c;i++)
	{
		int flag=0;
		cin>>n;
		if(pow((long long int)(sqrt(n)),2)==n)
		{
			cout<<"Yes"<<endl;
			continue;
		}
		for(j=1;j<=sqrt(n/2);j++)
		{
			k=n-pow(j,2);
			if(pow((long long int)(sqrt(k)),2)==k)
			{
				cout<<"Yes"<<endl;
				flag=1;
				break;
			}
		}
		if(flag==0)
		{
			cout<<"No"<<endl;
		}
	}
	return 0;
}
