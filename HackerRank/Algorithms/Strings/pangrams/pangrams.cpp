#include<iostream>
#include<string>
using namespace std;
int main()
{
	string inp;
	getline(cin,inp);
	int arr[26];
	for(int i=0;i<26;i++)
	{
		arr[i]=0;
	}
	for(int i=0;i<inp.size();i++)
	{
		if(inp[i]>=97 && inp[i]<=122)
		{
			arr[inp[i]-97]++;
		}
		else if(inp[i]>=65 && inp[i]<=90)
		{
			arr[inp[i]-65]++;
		}
	}
	int flag=0;
	for(int i=0;i<26;i++)
	{
		if(arr[i]==0)
		{
			cout<<"not pangram"<<endl;
			flag=1;
			break;
		}
	}
	if(flag==0)
	{
		cout<<"pangram"<<endl;
	}
	return 0;
}
