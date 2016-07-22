#include<bits/stdc++.h>
using namespace std;
int main()
{
	string inp;
	cin>>inp;
	int i,j,k;
	int flag=0;
	for(i=0;i<inp.size();i++)
	{
		if(inp[i]=='A' || inp[i]=='H' || inp[i]=='I' || inp[i]=='M' || inp[i]=='O' || inp[i]=='o' || inp[i]=='T' || 
		inp[i]=='U' || inp[i]=='V' || inp[i]=='v' || inp[i]=='W' || inp[i]=='w' || inp[i]=='X' || inp[i]=='x' ||
		inp[i]=='Y')
		{
			if(inp[inp.size()-i-1]!=inp[i])
			{
				flag=1;
				break;
			}
		}
		else if((inp[i]=='b' && inp[inp.size()-i-1]=='d') || (inp[i]=='d' && inp[inp.size()-i-1]=='b'))
		{
			
		}
		else if((inp[i]=='p' && inp[inp.size()-i-1]=='q') || (inp[i]=='q' && inp[inp.size()-i-1]=='p'))
		{
			
		}
		else
		{
			flag=1;
			break;
		}
	}
	if(flag==0)
	{
		cout<<"TAK"<<endl;
	}
	else
	{
		cout<<"NIE"<<endl;
	}
	return 0;
}
