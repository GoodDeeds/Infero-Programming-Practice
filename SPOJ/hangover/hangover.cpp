#include<iostream>
using namespace std;
int main()
{
	long double n;
	int temp;
	cin>>n;
	//temp=100*n;
	//n=(long double)(temp)/(long double)(100.0);
	
	while(n!=0)
	{
		
		int i=2;
		long double sum=0,sum2=0;
		while(sum2<n)
		{
			sum+=(long double)(1/(long double)i);
			sum2=sum;
			//temp=100*sum2;
			//sum2=(long double)(temp)/100.0;
			i++;
			
		}
		
		cout<<i-2<<" card(s)"<<endl;
		cin>>n;
	}
	return 0;
}
