#include<iostream>
#include<vector>
#include<cmath>	
using namespace std;
int main()
{
	long long int n,i,j,lsum=0,rsum=0,diff;
	cin>>n;
	vector< vector<long long int> > a(n,vector<long long int>(n));
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>a[i][j];
			if(i==j)
			{
				lsum+=a[i][j];
			}
			if((i+j)==(n-1))
			{
				rsum+=a[i][j];
			}
		}
	}
	diff=abs(lsum-rsum);
	cout<<diff<<endl;
	return 0;
}
