#include<bits/stdc++.h>
using namespace std;
int main()
{
	unsigned long long m,n,i,j,k,count=0;
	char ch;
	cin>>m>>n;
	vector< vector<char> > mat;
	vector<char> row;
	mat.clear();
	row.clear();
	for(i=0;i<m;i++)
	{
		row.clear();
		for(j=0;j<n;j++)
		{
			cin>>ch;
			row.push_back(ch);
		}
		mat.push_back(row);
	}
	string s;
	cin>>s;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(mat[i][j]==s[0])
			{
				k=0;
				while(k<s.size() && (j+k)<n && mat[i][j+k]==s[k])
				{
					k++;
					
				}
				if(k==s.size())
				{
					count++;
				}
			}
		}
	}
	if(s.size()==1)
	{
		cout<<count<<endl;
		return 0;
	}
//	cout<<"c: "<<count<<endl;
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(mat[j][i]==s[0])
			{
				k=0;
				while(k<s.size() && (j+k)<m && mat[j+k][i]==s[k])
				{
					k++;
					
				}
				if(k==s.size())
				{
					count++;
				}
			}
		}
	}
//	cout<<"c: "<<count<<endl;
	for(long long cnt=n-1;cnt>=0;cnt--)
	{
		for(i=cnt,j=0;i<m && j<n;i++,j++)
		{
			if(mat[i][j]==s[0])
			{
				k=0;
				while(k<s.size() && (i+k)<m && (j+k)<n && mat[i+k][j+k]==s[k])
				{
					k++;
					
				}
				if(k==s.size())
				{
					count++;
				}
			}
		}
		
	}
//	cout<<"c: "<<count<<endl;
	for(unsigned long long cnt=1;cnt<m;cnt++)
	{
		for(i=0,j=cnt;i<m && j<n;i++,j++)
		{
			if(mat[i][j]==s[0])
			{
				k=0;
				while(k<s.size() && (i+k)<m && (j+k)<n && mat[i+k][j+k]==s[k])
				{
					k++;
					
				}
				if(k==s.size())
				{
					count++;
				}
			}	
		}
	}
	cout<<count<<endl;
	return 0;
}
