#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	long long int n,i,j,k,l,curtime=1;
	cin>>n;
	vector<long long int> t(n);
	vector<long long int> d(n);
	for(i=0;i<n;i++)
	{
		cin>>t[i]>>d[i];
	}
	for(j=0;j<n;j++)
	{
		long long int mintime=2000001;
		for(i=0;i<n;i++)
		{
			if((t[i]+d[i])>curtime && (t[i]+d[i])<mintime)
			{
				mintime=t[i]+d[i];
			}
		}
		for(i=0;i<n;i++)
		{
			if((t[i]+d[i])==mintime)
			{
				cout<<i+1<<" ";
				curtime=t[i]+d[i];
			}
		}
		
	}	
	//cout<<endl<<curtime<<endl;
	return 0;
		
}
