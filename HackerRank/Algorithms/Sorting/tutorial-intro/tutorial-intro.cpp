#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int v,n,i,j;
	cin>>v>>n;
	vector<int> arr(n);
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
		if(arr[i]==v)
		{
			cout<<i<<endl;
			break;
		}
	}
	return 0;
}
