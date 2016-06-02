#include<iostream>
#include<string>
using namespace std;
int main()
{
	string inp,res="";
	long long i;
	while(getline(cin,inp))
	{
		res="";
		for(i=0;i<inp.size();i++)
		{
			if(inp[i]!=' ')
			{
				res=inp[i]+res;
			}
			else
			{
				cout<<res<<" ";
				res="";
			}
		}
		cout<<res<<endl;
	}
	return 0;
}
