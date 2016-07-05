#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n,d,i,j,k;
	cin>>n>>d;
	string *oppo=new string[d];
	for(i=0;i<d;i++)
	{
		cin>>oppo[i];
	}
	int flag=0;
	long long maxcons=0,cons=0;
	for(i=0;i<d;i++)
	{
		flag=0;
		for(j=0;j<n;j++)
		{
			if(oppo[i][j]=='0')
			{
				flag=1;
				break;
			}
		}
		if(flag==1)
		{
			cons++;
		}
		else
		{
			if(cons>maxcons)
			{
				maxcons=cons;
			}
			cons=0;
			
			
		}
	}
	if(cons>maxcons)
	{
		maxcons=cons;
	}
	cout<<maxcons<<endl;
	return 0;
}
