#include<bits/stdc++.h>
using namespace std;
int main()
{
	string a;
	long long k,i,j;
	cin>>a;
	cin>>k;
	i=a.size()-1;
	long long tempres=1;
	while(i>=0)
	{
		while(i>=0 && (a[i]-48)%5!=0)
		{
			a=a.substr(0,a.size()-1);
			i--;
		}
		if(i>=0)
		{
			
		}
		
	}
}
