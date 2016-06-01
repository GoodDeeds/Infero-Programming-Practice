#include<iostream>
#include<vector>
#include<string>
#include<cmath>
using namespace std;
int main()
{
	long long int t,n,i,j,k,l;
	string inp;
	cin>>t;
	for(i=0;i<t;i++)
	{
		cin>>n;
		cin>>inp;
		long long int oddbcount=0,evenbcount=0,res;
		for(j=0;j<inp.size();j++)
		{
			if(j%2==0 && inp[j]=='B')
			{
				evenbcount++;
			}
			else if(j%2==1 && inp[j]=='B')
			{
				oddbcount++;
			}
		}
		res=n-max(oddbcount,evenbcount);
		cout<<res<<endl;
	}
	return 0;
}
