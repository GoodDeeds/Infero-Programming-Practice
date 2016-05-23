#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
	int n,i,j,k,l;
	cin>>n;
	vector<string> arr(n);
	vector<string> res(n);
	for(i=0;i<n;i++)
	{
		cin>>arr[i];	
		res[i]=arr[i];
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i>0 && j>0 && i<(n-1) && j<(n-1) && arr[i][j]>arr[i-1][j] && arr[i][j]>arr[i+1][j] && arr[i][j]>arr[i][j-1] && arr[i][j]>arr[i][j+1])
			{
				res[i][j]='X';
			}
			else
			{
				res[i][j]=arr[i][j];
			}
			cout<<res[i][j];
		}
		cout<<endl;
		
	}
	
	return 0;
	
}
