#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n,a,b,i,j,more,less,quot,count=0;
	cin>>n;
	while(n--)
	{
		count=0;
		cin>>a>>b;
		more=max(a,b);
		less=min(a,b);
		while(more!=0 && less!=0)
		{
			swap(more,less);
			quot=more/less;
		//	cout<<"q: "<<quot<<" m: "<<more<<" l: "<<less<<endl;
			more-=(quot*less);
			count+=quot;
			
		}
		cout<<count<<endl;
	}
	return 0;
}
