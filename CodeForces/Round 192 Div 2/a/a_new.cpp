#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,r,c,count=0;
	string str;
	cin>>r>>c;
	int *rows=new int[r];
	int *cols=new int[c];
	vector<string> s;
	for(i=0;i<r;i++)
	{
		rows[i]=0;
	}
	for(i=0;i<c;i++)
	{
		cols[i]=0;
	}
	for(i=0;i<r;i++)
	{
		cin>>str;
		for(j=0;j<c;j++)
		{
			if(str[j]=='S')
			{
				rows[i]=1;
				cols[j]=1;
			}
		}
		s.push_back(str);
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(rows[i]!=1 || cols[j]!=1)
			{
				count++;
			}
		}
	}
	cout<<count<<endl;
	return 0;
}
