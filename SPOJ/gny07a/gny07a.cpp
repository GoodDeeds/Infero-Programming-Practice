#include<iostream>
#include<string>
using namespace std;
int main()
{
	int t,n,i;
	string m;	
	cin>>t;
	for(i=0;i<t;i++)
	{
		cin>>n;
		cin>>m;
		m=m.substr(0,n-1)+m.substr(n);
		cout<<i+1<<" "<<m<<endl;
	}
	return 0;
}
