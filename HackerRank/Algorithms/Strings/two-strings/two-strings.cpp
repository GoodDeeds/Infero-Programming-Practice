#include<iostream>
#include<string>
using namespace std;
int main()
{
	int t,i,j,k;
	cin>>t;
	while(t--)
	{
		string a,b;
		cin>>a>>b;
		int dict1[26]={0},dict2[26]={0};
		for(i=0;i<a.size();i++)
		{
			dict1[a[i]-97]++;
		}
		for(i=0;i<b.size();i++)
		{
			dict2[b[i]-97]++;
		}
		int flag=0;
		for(i=0;i<26;i++)
		{
			if(dict1[i]>0 && dict2[i]>0)
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
		{
			cout<<"NO"<<endl;
		}
		else
		{
			cout<<"YES"<<endl;
		}
	}
	return 0;
}
