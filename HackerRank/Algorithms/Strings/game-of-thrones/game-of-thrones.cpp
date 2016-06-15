#include<iostream>
#include<string>
using namespace std;
int main()
{
	string inp;
	cin>>inp;
	int i;
	int dict[26]={0};
	for(i=0;i<inp.size();i++)
	{
		dict[inp[i]-97]++;
	}
	int flag=0,resflag=0;
	for(i=0;i<26;i++)
	{
		if(dict[i]%2==1 && flag==0)
		{
			flag=1;
		}
		else if(dict[i]%2==1 && flag==1)
		{
			resflag=1;
			break;
		}
	}
	if(resflag==0)
	{
		cout<<"YES"<<endl;
	}
	else
	{
		cout<<"NO"<<endl;
	}
	return 0;
}
