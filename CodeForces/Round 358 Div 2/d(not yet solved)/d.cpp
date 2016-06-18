#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n,m,k,i,j,l;
	string s,t;
	cin>>n>>m>>k;
	cin>>s>>t;
	vector<long long> lengths;
	lengths.empty();
	while(true)
	{	
		long long maxl=-1,maxi=-1,maxj=-1,ct=0;
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{	
				if(s[i]==t[j])
				{
					ct=0;
					while((i+ct)<n && (j+ct)<m && s[i+ct]==t[j+ct])
					{
						ct++;
					}
					if(maxl<ct)
					{
						maxl=ct;
						maxi=i;
						maxj=j;
					}
					j+=ct;
				}
			}
		}
		if(maxl!=-1)
		{
			lengths.push_back(maxl);
			if((maxj+maxl)<n)
				s=s.substr(maxi+maxl);
			else
				break;
			if((maxj+maxl)<m)
				t=t.substr(maxj+maxl);
			else
				break;
		}
		else
		{	
			break;
		}
	}
	long long sum=0;	
	sort(lengths.begin(),lengths.end());
	for(i=lengths.size()-1;i>=max((long long)lengths.size()-k,(long long)0);i--)
	{
		sum+=lengths[i];
	}
	cout<<sum<<endl;
	return 0;
}
