//Remove this line - Score 255
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s;
	int i=0,j,k=1;
	for(;i<10;i++)
	{
		cin>>s;
		k=1;
		for(j=0;j<s.size();j++)
		{
			if(s[j]=='L' || s[j]=='F' || s[j]=='T' || s[j]=='D')
				k*=2;
		}
		cout<<k<<endl;
	}
}
