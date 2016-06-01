#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int main()
{
	int t,i,j;
	string inp;
	cin>>t;
	for(i=0;i<t;i++)
	{
		long long diff,count=0;
		cin>>inp;
		for(j=0;j<(inp.size()/2);j++)
		{
			diff=abs(inp[j]-inp[inp.size()-j-1]);
			count+=diff;
		}
		cout<<count<<endl;
	}
	return 0;
}
