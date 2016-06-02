#include<iostream>
#include<string>
using namespace std;
int main()
{
	int parity=0,i,j;
	string inp;
	while(getline(cin,inp))
	{
		for(i=0;i<inp.size();i++)
		{
			if(inp[i]=='\"')
			{
				if(parity==0)
				{
					inp[i]='`';
					inp=inp.substr(0,i)+'`'+inp.substr(i);
					
				}
				else
				{
					inp[i]='\'';
					inp=inp.substr(0,i)+'\''+inp.substr(i);
				}
				parity++;
				parity%=2;
			}
		}
		cout<<inp<<endl;
	}
	return 0;
}
