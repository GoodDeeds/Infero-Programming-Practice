#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	long long int t,x,y,z,b,w,i,j,k,l,sum=0;
	cin>>t;
	for(i=0;i<t;i++)
	{
		sum=0;
		cin>>b>>w>>x>>y>>z;
		//cout<<"x: "<<x<<" y: "<<y<<" z: "<<z<<endl;
		sum+=(b*min(x,(y+z)));
		sum+=(w*min(y,(x+z)));
		cout<<sum<<endl;
	}
	return 0;
}
