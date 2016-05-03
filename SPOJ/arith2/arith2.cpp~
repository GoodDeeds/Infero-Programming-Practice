#include<iostream>
using namespace std;
int main()
{
	long long int t;
	cin>>t;
	for(long long int i=0;i<t;i++)
	{
		long long int num,prevnum;
	
		char oper=' ';
		char curoper=' ';
		cin>>num>>oper;
		long long int res=num;
		
		while(oper!='=')
		{
			if(curoper=='+')
			{
				res+=num;
			}
			else if(curoper=='-')
			{
				res-=num;
			}
			else if(curoper=='*')
			{
				res*=num;
			}
			else if(curoper=='/')
			{
				res/=num;
			}
			curoper=oper;
			cin>>num>>oper;
    	}	
    	if(curoper=='+')
			{
				res+=num;
			}
			else if(curoper=='-')
			{
				res-=num;
			}
			else if(curoper=='*')
			{
				res*=num;
			}
			else if(curoper=='/')
			{
				res/=num;
			}
		cout<<res<<endl;
	}	
	return 0;
}
