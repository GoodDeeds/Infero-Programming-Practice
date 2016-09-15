#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n,i,j,k,val,count=0;
	cin>>n;
	int flag=0,flag2=0;
	while(n--)
	{
		cin>>val;
		if(val==1)
		{
			count++;
			flag=1;
			flag2=1;
		}
		else if(flag==1)
		{
			count++;
			flag=0;
		}
		if(n==0 && flag==0 && flag2==1)
		{
			count--;
		}
	}
	cout<<count<<endl;
	return 0;
}
