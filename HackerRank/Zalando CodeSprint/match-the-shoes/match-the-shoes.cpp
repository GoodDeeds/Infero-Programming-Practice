#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	long long k,m,n,i,j;
	cin>>k>>m>>n;
	long long *arr=new long long[n];
	long long *dict=new long long[m];
	for(i=0;i<m;i++)
	{
		dict[i]=0;
	}
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
		dict[arr[i]]++;
	}
	for(i=0;i<k;i++)
	{
		long long maxel=-1;
		for(j=0;j<m;j++)
		{
			if(dict[j]>maxel)
			{
				maxel=dict[j];
			}
		}
		for(j=0;j<m;j++)
		{
			if(dict[j]==maxel)
			{
				cout<<j<<endl;
				dict[j]=-1;
				break;
			}
		}
	}		
	return 0;
}
