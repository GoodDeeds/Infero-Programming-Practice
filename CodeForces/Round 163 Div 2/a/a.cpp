#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,count=0,res=0;
	cin>>n;
	string str;
	cin>>str;
	for(int i=0;i<n;i++)
	{
		count=0;
		while(i<n && str[i+1]==str[i])
		{
			count++;
			i++;
		}
		res+=count;
	}
	cout<<res<<endl;
	return 0;
}
