#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
	int l;
	cin>>l;
	while(l!=0)
	{
		double res=((double)pow(l,2)*M_1_PI)/2.0;
		cout<<std::fixed;
		cout<<std::setprecision(2);
		cout<<res<<endl;
		
		cin>>l;
	}
	return 0;
	
}
