#include<bits/stdc++.h>
using namespace std;
int main()
{
	string inp;
	int i,j,k,b,t;
	string a;
	string d="";
	cin>>inp;
	a=inp[0];
	t=2;
	
	while(inp[t]!='e')
	{
		d+=inp[t];
		t++;
	}
	b=stoi(inp.substr(t+1));
	if(b==0)
	{
		
		
		cout<<(a+"."+d)<<endl;
		
		return 0;
	}
	if(a=="0" && d=="0")
	{
		cout<<"0"<<endl;
		return 0;
	}
	string temp=a+d;
	if(temp.size()<(b+1))
	{
		int diff=b+1-temp.size();
		for(i=0;i<diff;i++)
		{
			temp+="0";
		}
		while(temp[0]=='0')
		{
			temp=temp.substr(1);
		}
		cout<<temp<<endl;
		return 0;
	}
	if(temp.size()==(b+1))
	{
		while(temp[0]=='0')
		{
			temp=temp.substr(1);
		}
		cout<<temp<<endl;
		return 0;
	}
	string res=temp.substr(0,b+1)+"."+temp.substr(b+1);
	while(res[0]=='0' && res[1]!='.')
	{
		res=res.substr(1);
	}
	cout<<res<<endl;
	return 0;
	
	
	
}
