#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,a,b,maxcap=0,currval=0;
	cin>>n;
	while(n--)
	{
		cin>>a>>b;
		currval-=a;
		currval+=b;
		if(maxcap<currval)
		{
			maxcap=currval;
		}
	}
	cout<<maxcap<<endl;
	return 0;
}
