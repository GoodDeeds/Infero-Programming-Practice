#include<iostream>
using namespace std;
int main()
{
	int t;
	int n;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		cin>>n;
		int num,den;
		int j=1;
		while(((j*(j+1))/2)<n)
		{
			j++;
		}
		int diff=((j*(j+1)/2)-n);
		if(j%2==1)
		{
			num=1+diff;
			den=j-diff;
		}
		else
		{
			num=j-diff;
			den=1+diff;
			
		}
		cout<<"TERM "<<n<<" IS "<<num<<"/"<<den<<endl;
	}
	return 0;
}
