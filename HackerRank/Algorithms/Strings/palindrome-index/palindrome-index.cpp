#include<iostream>
#include<string>
using namespace std;
int main()
{
	int t,i,j,k;
	string inp;
	cin>>t;
	for(i=0;i<t;i++)
	{
		cin>>inp;
		int flag=0;
		string temp;
		for(j=0;j<(inp.size()/2);j++)
		{
			/*if(inp.size()>2 && inp[j]!=inp[inp.size()-j-1])
			{
				if( inp[j]==inp[inp.size()-j-2])
				{
					cout<<(inp.size()-j-1)<<endl;
				}
				else if(inp[j+1]==inp[inp.size()-j-1])
				{
					cout<<j<<endl;
				}
				flag=1;
				break;
			}
			else if(inp.size()<=2 && inp[j]!=inp[inp.size()-j-1])
			{
				cout<<j<<endl;
				flag=1;
				break;
			}*/
			if(inp[j]!=inp[inp.size()-j-1])
			{
				temp=inp.substr(0,j)+inp.substr(j+1);
				flag=0;
				for(k=0;k<(temp.size()/2);k++)
				{
					if(temp[k]!=temp[temp.size()-k-1])
					{
						flag=1;
						break;
					}
				}
				if(flag==0)
				{
					cout<<j<<endl;
				}
				else
				{
					cout<<(inp.size()-j-1)<<endl;
				}
				flag=1;
				break;
			}
		}
		if(flag==0)
		{
			cout<<"-1"<<endl;
		}
	}
	return 0;
}
