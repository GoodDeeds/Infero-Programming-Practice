#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int main()
{
	int t,i,j;
	string inp;
	cin>>t;
	for(i=0;i<t;i++)
	{
		cin>>inp;
		int flag=0;
		for(j=1;j<=(inp.size()/2);j++)
		{
			if(abs(inp[j]-inp[j-1])!=abs(inp[inp.size()-j-1]-inp[inp.size()-j]))
			{
				cout<<"Not Funny"<<endl;
				flag=1;
				break;
			}
		}
		if(flag==0)
		{
			cout<<"Funny"<<endl;
		}
	}
	return 0;
}
