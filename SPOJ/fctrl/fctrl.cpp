#include<iostream>
using namespace std;
int main()
{
	int t,n,res=0;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		cin>>n;
		res=0;
		while(n!=0)
		{
			res+=(n/5);
			n/=5;
			
		}
		cout<<res<<endl;
	}
	return 0;
}
