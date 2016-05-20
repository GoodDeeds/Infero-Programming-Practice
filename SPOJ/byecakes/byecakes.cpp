#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	long long int ing[4][2],i,j,k;
	cin>>ing[0][0]>>ing[1][0]>>ing[2][0]>>ing[3][0]>>ing[0][1]>>ing[1][1]>>ing[2][1]>>ing[3][1];
	while(ing[0][0]!=-1)
	{
		long double maxq=0,q=0;
		for(i=0;i<4;i++)
		{
			q=((long double)(ing[i][0]))/ing[i][1];
			if(q>maxq)
			{
				maxq=q;
			}
		}
		maxq=ceil(maxq);
		for(i=0;i<4;i++)
		{
			long long int temp=maxq*ing[i][1]-ing[i][0];
			cout<<temp<<" ";
		}
		cout<<endl;
		cin>>ing[0][0]>>ing[1][0]>>ing[2][0]>>ing[3][0]>>ing[0][1]>>ing[1][1]>>ing[2][1]>>ing[3][1];
	}
	return 0;
}
