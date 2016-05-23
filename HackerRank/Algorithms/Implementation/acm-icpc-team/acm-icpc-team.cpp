#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
	int n,m,i,j,k,l,count=0;
	cin>>n>>m;
	vector<string> arr(n);
	vector<int> numoft(m+1);
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
		
	}
	for(i=0;i<m+1;i++)
	{
		numoft[i]=0;
	}
	for(i=0;i<n;i++)
	{
		for(j=i;j<n;j++)
		{
			count=0;
			for(k=0;k<m;k++)
			{
				if(arr[i][k]=='1' || arr[j][k]=='1')
				{
					count++;
				}
			}
			numoft[count]++;
		}
	}
	for(i=m;i>=0;i--)
	{
		if(numoft[i]!=0)
		{
			cout<<i<<endl<<numoft[i]<<endl;
			break;
		}
	}
	return 0;
}
