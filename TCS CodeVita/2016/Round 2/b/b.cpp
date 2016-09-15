#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long num,i,count=0,flag=0;
	char col;
	cin>>num;
	for(i=0;i<num;i++)
	{
		cin>>col;
		if(col=='R')
		{
			count++;
			flag=0;
		}
		else if(col=='G' && flag==0)
		{
			flag=1;
			count++;
		}
	}
	count--;
	cout<<count<<endl;
	return 0;
}
