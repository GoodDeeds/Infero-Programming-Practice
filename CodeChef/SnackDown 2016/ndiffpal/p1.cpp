#include<iostream>
#include<string>
using namespace std;
int main()
{
	long long t,n,i,j,k;
	cin>>t;
	while(t--)
	{
		cin>>n;
		string res="";
		for(i=0;i<n;i++)
		{
			if(i%3==0)
			{
				res+='a';
			}
			else if(i%3==1)
			{
				res+='b';
			}
			else
			{
				res+='c';
			}
		}
		cout<<res<<endl;
	}
	return 0;
}
