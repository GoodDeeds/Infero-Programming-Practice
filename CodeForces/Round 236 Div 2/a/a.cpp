#include<bits/stdc++.h>
using namespace std;
int main()
{
	string inp;
	int i,j,k,count=0;
	int dict[26]={0};
	cin>>inp;
	for(i=0;i<inp.size();i++)
	{
		dict[inp[i]-'a']++;
	}
	for(i=0;i<26;i++)
	{
		if(dict[i]>0)
		{
			count++;
		}
	}
	if(count%2==0)
	{
		cout<<"CHAT WITH HER!"<<endl;
	}
	else
	{
		cout<<"IGNORE HIM!"<<endl;
	}
	return 0;
}
