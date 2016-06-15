#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int main()
{
	int i,j,dict1[26]={0},dict2[26]={0},res=0;
	string a,b;
	cin>>a>>b;
	for(i=0;i<a.size();i++)
	{
		dict1[a[i]-97]++;
	}
	for(i=0;i<b.size();i++)
	{
		dict2[b[i]-97]++;
		
	}
	for(i=0;i<26;i++)
	{
		res+=abs(dict1[i]-dict2[i]);
	}
	cout<<res<<endl;
	return 0;
}
