#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	long a,d,*att,*def;
	cin>>a>>d;
	while(a!=0 && d!=0)
	{
		att=new long[a];
		def=new long[d];
		for(long i=0;i<a;i++)
		{
			cin>>att[i];
		}
		for(long i=0;i<d;i++)
		{
			cin>>def[i];
			
		}
		sort(att,att+a);
		sort(def,def+d);
	/*	for(long i=0;i<2;i++)
		{
			cout<<att[i]<<" "<<def[d]<<endl;
		}*/
		if(att[0]<def[1])
		{
			cout<<"Y"<<endl;
		}
		else
		{
			cout<<"N"<<endl;
		}
		cin>>a>>d;
	}
	return 0;
}
