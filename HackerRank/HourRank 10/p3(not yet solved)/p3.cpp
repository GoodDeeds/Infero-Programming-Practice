#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long t,l,a,n,d,i,j,k,temp1;
	cin>>t;
	while(t--)
	{
		cin>>l>>a>>n>>d;
		if(d==1)
		{
			cout<<(l*a)<<endl;
			continue;
		}
		if(n%(d-1)==0)
		{
			temp1=(n/(d-1))-1;
		}
		else
		{
			temp1=n/(d-1);
		}
		long long temp2=l/temp1;
		//cout<<"t: "<<temp1<<endl;
		long long temp3=temp2;
		long long tsum=0;
		i=a;
		if(temp2>a)
		{
			cout<<"SAD"<<endl;
			continue;
		}
		while(temp2--)
		{
			tsum+=(temp1*i);
			i--;
		}
		//cout<<tsum<<endl;
		temp3=l-temp1*temp3;
		if(temp3>0 && i<1)
		{
			cout<<"SAD"<<endl;
			continue;
		}
		tsum+=(temp3*i);
		cout<<tsum<<endl;
	}
	return 0;
}
