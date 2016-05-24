#include<iostream>
#include<string>
using namespace std;
const string numnames[]={"zero","one","two","three","four","five","six","seven","eight","nine","ten","eleven","twelve","thirteen","fourteen","fifteen",
"sixteen","seventeen","eighteen","nineteen","twenty","twenty one","twenty two","twenty three","twenty four","twenty five","twenty six","twenty seven","twenty eight","twenty nine"};
int main()
{
	int h,m;
	string res;
	cin>>h>>m;
	if(m==0)
	{
		res=numnames[h]+" o' clock";
	}
	else if(m==15)
	{
		res="quarter past "+numnames[h];
	}
	else if(m==30)
	{
		res="half past "+numnames[h];
	}
	else if(m==45)
	{
		res="quarter to "+numnames[h+1];
	}
	else if(m==1)
	{
		res=numnames[m]+" minute past "+numnames[h];
	}
	else if(m<30)
	{
		res=numnames[m]+" minutes past "+numnames[h];
	}
	else if(m==59)
	{
		res=numnames[60-m]+" minute to "+numnames[h+1];
	}
	else if(m>30)
	{
		res=numnames[60-m]+" minutes to "+numnames[h+1];
	}
	cout<<res<<endl;
	return 0;
}
