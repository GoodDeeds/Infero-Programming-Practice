#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k,i,j,val,sum=0;
	vector<int> height;
	vector<int> sizes;
	cin>>n;
	for(j=0;j<n;j++)
	{
		sum=0;
		height.clear();
		sizes.clear();
		cin>>k;
		for(i=0;i<k;i++)
		{
			cin>>val;
			height.push_back(val);
		}
		for(i=0;i<k;i++)
		{
			cin>>val;
			sizes.push_back(val);
		}
		sort(height.begin(),height.end());
		sort(sizes.begin(),sizes.end());
		for(i=0;i<k;i++)
		{
			sum+=abs(height[i]-sizes[i]);
		}
		cout<<"Case "<<j+1<<": "<<sum<<endl;
	}
	return 0;
}
