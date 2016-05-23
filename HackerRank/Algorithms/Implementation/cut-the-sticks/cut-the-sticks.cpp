#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
	long long int n,i,j,k,l;
	cin>>n;
	vector<long long int> a(n);
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a.begin(),a.end());
	j=0;
	while(j<n)
	{
		l=a[j];
		for(i=j;i<n;i++)
		{
			a[i]-=l;
			//cout<<"i: "<<i<<"a: "<<a[i]<<endl;
		}
		cout<<n-j<<endl;
		while(j<n && a[j]==0)
		{
			j++;
		}
		
	
		
	}
	return 0;
}
