#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,t,lastg=-1;
	cin>>n>>t;
	string s;
	cin>>s;
	int temp;
	for(int i=n-1;i>=0;i--)
	{
		if(s[i]=='G')
		{
			lastg=i;
			break;
		}
	}
	if(lastg==-1 || lastg==0)
	{
		cout<<s<<endl;
		return 0;
	}
	for(int i=lastg-1;i>=0;i--)
	{
		if(s[i]=='B')
		{
			if((i+t)<n && s[i+t]=='G')
			{
				temp=s[i];
				s[i]=s[i+t];
				s[i+t]=temp;
				if()
			}
			
		}
	}
}
