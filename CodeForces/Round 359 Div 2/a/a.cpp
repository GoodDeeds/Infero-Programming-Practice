#include<bits/stdc++.h>

using namespace std;
int main()
{
	long long n,x,i,j,k,sum=0,val,distc=0;
	string symb;
	cin>>n>>x;
	sum=x;
	while(n--)
	{
		cin>>symb>>val;
		if(symb=="+")
		{
			sum+=val;
		}
		else
		{
			if(val<=sum)
			{
				sum-=val;
			}
			else
			{
				distc++;
			}
		}
	}
	cout<<sum<<" "<<distc<<endl;
	return 0;
}
