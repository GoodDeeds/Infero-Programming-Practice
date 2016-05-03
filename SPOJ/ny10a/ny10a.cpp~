#include<iostream>
#include<cmath>
using namespace std;
int convbintodec(int a,int b,int c)
{
	int res=pow(2,2)*a+pow(2,1)*b+c;
	return res;
}
int main()
{
	int t,num;
	string seq;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		cin>>num>>seq;
		int arr[40],res[8];
		for(int j=0;j<8;j++)
		{
			res[j]=0;
		}
		for(int j=0;j<40;j++)
		{
			if(seq[j]=='H')
			{
				arr[j]=1;
			}
			else
			{
				arr[j]=0;
			}
		}
		for(int j=0;j<38;j++)
		{
			res[convbintodec(arr[j],arr[j+1],arr[j+2])]++;			
		}
		cout<<num<<" ";
		for(int j=0;j<8;j++)
		{
			cout<<res[j]<<" ";
		}
		cout<<endl;
	}
	return 0;	
}
