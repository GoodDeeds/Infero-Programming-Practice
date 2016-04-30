#include<iostream>
using namespace std;
int main()
{
	int t,x,y;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		cin>>x>>y;
		if(x==y && x%2==0)
		{
			cout<<x+y<<endl;
		}
		else if(x==y && x%2==1)
		{
			cout<<x+y-1<<endl;
			
		}
		else if(x==(y+2) && x%2==0)
		{
			cout<<x+y<<endl;
		}
		else if(x==(y+2) && x%2==1)
		{
			cout<<x+y-1<<endl;
		}
		else
		{
			cout<<"No Number"<<endl;
		}
		
	}
	return 0;
}
