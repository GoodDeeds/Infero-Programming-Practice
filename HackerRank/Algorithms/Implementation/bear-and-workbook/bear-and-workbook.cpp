//Any faster method?
#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int main()
{
	long long int n,k,i,j,l,count=0,curpage=1,lb,ub;
	cin>>n>>k;		
	vector<long long int> t(n);
	for(i=0;i<n;i++)
	{
		cin>>t[i];
		j=(long long int)(t[i]/k);
		if(t[i]%k!=0)
		{
			j++;
		}
		lb=1;
		ub=k;
		for(l=0;l<j;l++)
		{
			if(curpage+l>=lb && curpage+l<=min(ub,t[i]))
			{
				count++;
			}
			lb+=k;
			ub+=k;
			
		}
		curpage+=j;
	}
	cout<<count<<endl;
	return 0;
	
}
