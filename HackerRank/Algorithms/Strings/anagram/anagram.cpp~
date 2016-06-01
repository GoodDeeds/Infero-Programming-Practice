#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
	int t,i,j,k;
	string inp,s1,s2;
	cin>>t;
	for(i=0;i<t;i++)
	{
		cin>>inp;
		int di1[26],di2[26];
		for(j=0;j<26;j++)
		{
			di1[j]=di2[j]=0;
		}
		if(inp.size()%2==1)
		{
			cout<<"-1"<<endl;
			continue;
		}
		s1=inp.substr(0,(inp.size()/2));
		s2=inp.substr((inp.size()/2));
		sort(s1.begin(),s1.end());
		sort(s2.begin(),s2.end());
		//cout<<"s1: "<<s1<<" s2: "<<s2<<endl;
		int count=0;
		for(j=0;j<(inp.size()/2);j++)
		{
			di1[s1[j]-97]++;
			di2[s2[j]-97]++;
		}
		int val1=0,val2=0;
		for(j=0;j<26;j++)
		{
			if(di1[j]>di2[j])
			{
				val1+=(di1[j]-di2[j]);
			}
			
		}
		cout<<val1<<endl;
	}
	return 0;
}
