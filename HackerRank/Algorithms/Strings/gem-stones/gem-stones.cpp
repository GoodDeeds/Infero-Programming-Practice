#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
	int n,i,j,k,dict[26];
	string inp;
	cin>>n;
	for(i=0;i<26;i++)
	{
		dict[i]=0;
	}
	for(i=0;i<n;i++)
	{
		cin>>inp;
		sort(inp.begin(),inp.end());
		
		j=0;
		
	
		while(j<inp.size())
		{
			
			
			dict[inp[j]-97]++;
			while(j<inp.size() && inp[j]==inp[j+1])
			{
				j++;
				
			}
			j++;
		}
		
	}
	int count=0;
	for(i=0;i<26;i++)
	{
		if(dict[i]==n)
		{
			
			count++;
		}
	}
	cout<<count<<endl;
	return 0;
}
