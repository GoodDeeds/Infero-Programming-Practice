#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	unsigned long t,a,b;
	cin>>t;
	for(unsigned long i=0;i<t;i++)
	{
		cin>>a>>b;
		unsigned long effexp=b%4;
		if(effexp==0 && b!=0) 
		{
			effexp=4;
		}
		unsigned long slastdig=pow(a,effexp);
		unsigned long lastdig=slastdig%10;
		cout<<lastdig<<endl;
	}
	return 0;
}
