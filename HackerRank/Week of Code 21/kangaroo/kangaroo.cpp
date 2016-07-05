#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long x1,v1,x2,v2;
	cin>>x1>>v1>>x2>>v2;
	long long diffx=x2-x1;
	long long diffy=v1-v2;
	/*if(diffy==0 && diffx==0)
	{
		cout<<"YES"<<endl;
	}*/
	if(diffy<=0)
	{
		cout<<"NO"<<endl;
	}
	else if(diffx%diffy==0)
	{
		cout<<"YES"<<endl;
	}
	else
	{
		cout<<"NO"<<endl;
	}
	return 0;
}
