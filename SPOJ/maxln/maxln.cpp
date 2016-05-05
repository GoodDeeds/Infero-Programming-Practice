#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
	long long int t;
	double r;
	cin>>t;
	for(long long int i=0;i<t;i++)
	{
		cin>>r;
		cout<<fixed;
		cout<<"Case "<<i+1<<": ";
		cout<<setprecision(2)<<(4*pow(r,2)+1/4.00)<<endl;
	}
	return 0;
}
