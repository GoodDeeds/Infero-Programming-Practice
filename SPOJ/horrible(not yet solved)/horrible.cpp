//time limit exceeded

#include<iostream>
#include<vector>
using namespace std;
int main()
{
	long long int t,n,c,p,q,v,i,j,k,l,val;
	cin>>t;
	for(i=0;i<t;i++)
	{
		cin>>n>>c;
		vector<long long int> arr(n);
		for(j=0;j<c;j++)
		{
			cin>>val;
			if(val==0)
			{
				cin>>p>>q>>v;
				for(k=p-1;k<q;k++)
				{
					arr[k]+=v;
				}
			}
			else
			{
				cin>>p>>q;
				long long int sum=0;
				for(k=p-1;k<q;k++)
				{
					sum+=arr[k];
				}
				cout<<sum<<endl;
			}
		}
	}
	return 0;
}
