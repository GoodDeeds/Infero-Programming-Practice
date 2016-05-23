#include<iostream>
#include<string>
using namespace std;
int main()
{
	string inp;
	long long int t,n,i,j,k,l,count=0;
	cin>>t;
	for(i=0;i<t;i++)
	{
		cin>>n;
		count=0;
		inp=to_string(n);
		for(j=0;j<inp.size();j++)
		{
			k=inp[j]-48;
			if(k!=0 && n%k==0)
			{
				count++;	
			}
		}
		cout<<count<<endl;
		
	}
	return 0;
}
