#include<iostream>
#include<string>
using namespace std;
int main()
{
	string inp,temp="";
	int h,stat;
	cin>>inp;
	temp+=inp[0];
	temp+=inp[1];
	h=stoi(temp);
	if(inp[8]=='A')
	{
		if(h==12)
		{
			inp[0]=inp[1]='0';
		}
		inp=inp.substr(0,8);
	}
	else
	{
		if(h!=12)
		{
			h+=12;
			temp=to_string(h);
			inp=temp+inp.substr(2,6);
		}
		else
		{
			inp=inp.substr(0,8);
		}
	}
	cout<<inp<<endl;
	return 0;
	
}
