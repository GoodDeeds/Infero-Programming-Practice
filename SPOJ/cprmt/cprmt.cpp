#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
	string str1,str2,val="";
	long long int i,j,k;
	while(cin>>str1>>str2)
	{
		val="";
		sort(str1.begin(),str1.end());
		sort(str2.begin(),str2.end());
		i=j=0;
		while(str1.size()>0 && str2.size()>0)
		{
			if(str1[0]<str2[0])
			{
				str1=str1.substr(1);
			}
			else if(str1[0]>str2[0])
			{
				str2=str2.substr(1);
			}
			else if(str1[0]==str2[0])
			{
				val+=str1[0];
				str1=str1.substr(1);
				str2=str2.substr(1);
			}
		}
		cout<<val<<endl;
	}
	return 0;
}
