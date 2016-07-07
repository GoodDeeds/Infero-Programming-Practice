#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,j,k;
	string str;
	cin>>n;
	cin>>str;
	/*int flagt=0,flagl=0,flagr=0,flagb=0,flagzero=0,flagone=0,flagtwo=0,flagthree=0;
	for(i=0;i<n;i++)
	{
		if(str[i]<='3' && str[i]>'0')
		{
			flagt=1;
		}
		if((str[i]-48)%3==0 && str[i]!='0')
		{
			flagr=1;
		}
		if(str[i]=='1' || str[i]=='4' || str[i]=='7')
		{
			flagl=1;
		}
		if((str[i]>='7' && str[i]<='9') || str[i]=='0')
		{
			flagb=1;
		}
		if(str[i]=='0')
		{
			flagzero=1;
		}
		if(str[i]=='1')
		{
			flagone=1;
		}
		if(str[i]=='2')
		{
			flagtwo=1;
		}
		if(str[i]=='3')
		{
			flagthree=1;
		}
	}
	if(flagzero==1)
	{
		if(flagone==1 || flagtwo==1 || flagthree==1)
		{
			cout<<"YES"<<endl;
		}
	}
	else if(flagl!=flagr || flagt!=flagb || str=="258" || str=="456")
	{
		cout<<"NO"<<endl;
	}
	else
	{
		cout<<"YES"<<endl;
	}*/
	int flag[10]={0};
	for(i=0;i<n;i++)
	{
		flag[str[i]-48]=1;
	}
	if((flag[1]==1 && flag[9]==1) || (flag[3]==1 && flag[7]==1) || (flag[0]==1 && (flag[1]==1 || flag[2]==1 || flag[3]==1)))
	{
		cout<<"YES"<<endl;
		
	}
	else
	{
		cout<<"NO"<<endl;
	}
	return 0;
}
