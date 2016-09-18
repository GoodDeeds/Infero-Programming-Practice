#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	int sumval=(n*(n+1))/2;
	int t=m/sumval;
	m-=t*sumval;
	for(int i=1;i<=n;i++)
	{
		if(m>=i)
		{
			m-=i;
		}
		else
		{
			break;
		}
	}
	cout<<m<<endl;
	return 0;
}
