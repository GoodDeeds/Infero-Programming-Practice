#include<bits/stdc++.h>
using namespace std;
int main()
{
	string n;
	cin>>n;
	string num=n;
	reverse(n.begin(),n.end());
	num=num+n;
	cout<<num<<endl;
	return 0;
}
