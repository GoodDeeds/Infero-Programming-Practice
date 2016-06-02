#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	long long int t,m,n,i,j,k,l;
	cin>>t;
	for(i=0;i<t;i++)
	{
		cin>>m>>n;
		vector<long long int> c(n);
		for(j=0;j<n;j++)
		{
			cin>>c[j];
		}
		for(j=0;j<n;j++)
		{
			for(k=j+1;k<n;k++)
			{
				if(c[j]+c[k]==m)
				{
					cout<<j+1<<" "<<k+1<<endl;
					break;
				}
			}
		}
		
	}
	return 0;
}
