#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int main()
{
	long long t,i,j,k,l;
	string s1,s2;
	cin>>t;
	for(i=0;i<t;i++)
	{
		cin>>s1>>s2;
		int flago=0,flagz=0;
		long long zerodisc=0,onedisc=0;
		for(j=0;j<s1.size();j++)
		{
			if(flagz==0 && s1[j]=='0')
			{
				flagz=1;
			}
			if(flago==0 && s1[j]=='1')
			{
				flago=1;
			}
			if(s1[j]=='0' && s2[j]=='1')
			{
				zerodisc++;
			}
			else if(s1[j]=='1' && s2[j]=='0')
			{
				onedisc++;
			}
		}
		if((flago==0 || flagz==0) && (onedisc>0 || zerodisc>0))
		{
			cout<<"Unlucky Chef"<<endl;
		
		}
		else
		{
			cout<<"Lucky Chef"<<endl<<max(zerodisc,onedisc)<<endl;
		}
	}
}
