#include<iostream>
#include<string>
#include<stdlib.h>
using namespace std;
int main()
{
	int t;
	string c,j;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		cin>>c>>j;
		if(c[0]=='?' && c[0]==j[0])
		{
			if(c.size()!=1 && c[1]!='?' && j[1]!='?' && (c[1]=='5'||c[1]=='6'||c[1]=='7'||c[1]=='8'||c[1]=='9') && (j[1]=='0'||j[1]=='1'||j[1]=='2'||j[1]=='3'||j[1]=='4'))
			{
				c[0]='0';
				j[0]='1';
			}
			else if(c.size()!=1 && c[1]!='?' && j[1]!='?' && (j[1]=='5'||j[1]=='6'||j[1]=='7'||j[1]=='8'||j[1]=='9') && (c[1]=='0'||c[1]=='1'||c[1]=='2'||c[1]=='3'||c[1]=='4'))
			{
				c[0]='1';
				j[0]='0';
			}
			else
			{
				c[0]='0';
				j[0]='0';
			}
			
		}
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
			if(c[k]==j[k] && c[k]=='?')
			{
				if(stoi(c.substr(0,k))>stoi(j.substr(0,k)))
				{
					c[k]='0';
					j[k]='9';
				}
				if(stoi(c.substr(0,k))<stoi(j.substr(0,k)))
				{
					c[k]='9';
					j[k]='0';
				}
				if(stoi(c.substr(0,k))==stoi(j.substr(0,k)))
				{
					if(k!=c.size()-1 && c[k+1]!='?' && j[k+1]!='?' && (c[k+1]=='5'||c[k+1]=='6'||c[k+1]=='7'||c[k+1]=='8'||c[k+1]=='9') && (j[k+1]=='0'||j[k+1]=='1'||j[k+1]=='2'||j[k+1]=='3'||j[k+1]=='4'))
					{
						c[k]='0';
						j[k]='1';
					}
					else if(k!=c.size()-1 && c[k+1]!='?' && (j[k+1]=='5'||j[k+1]=='6'||j[k+1]=='7'||j[k+1]=='8'||j[k+1]=='9') && (c[k+1]=='0'||c[k+1]=='1'||c[k+1]=='2'||c[k+1]=='3'||c[k+1]=='4'))
					{
						c[k]='1';
						j[k]='0';
					}
					else
					{
						c[k]='0';
						j[k]='0';
					}
					
				}
			}
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
		cout<<"Case #"<<i+1<<": "<<c<<" "<<j<<endl;
		
	}
	return 0;
}
