#include<iostream>
#include<string>
#include<stdlib.h>
#include<math.h>
using namespace std;
void check(string &c, string &j)
{
	for(int k=0;k<c.size();k++)
	{
		if(c[k]=='?')
		{
			for(int i=0;i<10;i++)
			{
				c[k]=i;
				j[k]
			}
		}
	}
}
int main()
{
	int t;
	string c,j,c2,j2;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		cin>>c>>j;
		c2=c;
		j2=j;
		
		if(j[0]=='?' && j[0]!=c[0])
		{
			j[0]=c[0];
		}
		if(c[0]=='?' && j[0]!=c[0])
		{
			c[0]=j[0];
		}
		
		for(int k=1;k<c.size();k++)
		{
			
			if(c[k]!=j[k] && c[k]=='?')
			{
				if(stoi(c.substr(0,k))>stoi(j.substr(0,k)))
				{
					c[k]='0';
				}
				if(stoi(c.substr(0,k))<stoi(j.substr(0,k)))
				{
					c[k]='9';
				}
				if(stoi(c.substr(0,k))==stoi(j.substr(0,k)))
				{
					c[k]=j[k];
				}
				
			}
			if(c[k]!=j[k] && j[k]=='?')
			{
				if(stoi(c.substr(0,k))>stoi(j.substr(0,k)))
				{
					j[k]='9';
				}
				if(stoi(c.substr(0,k))<stoi(j.substr(0,k)))
				{
					j[k]='0';
				}
				if(stoi(c.substr(0,k))==stoi(j.substr(0,k)))
				{
					j[k]=c[k];
				}
			}
			
		}
		for(int k=0;k<c.size();k++)
		{
			
		}		
		
			cout<<"Case #"<<i+1<<": "<<c<<" "<<j<<endl;
	
		
	}
	return 0;
}
