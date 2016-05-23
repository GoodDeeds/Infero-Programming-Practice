#include<iostream>
#include<string>
using namespace std;
int main()
{
	int n,k,i,j;
	string inp;
	cin>>n;
	cin>>inp;
	cin>>k;
	for(i=0;i<n;i++)
	{
		if(inp[i]>=65 && inp[i]<=90)
		{
			j=inp[i]-64;
			j=(j+k)%26;
			if(j==0)
			{
				j=26;
			}
			inp[i]=j+64;
		}
		else if(inp[i]>=97 && inp[i]<=122)
		{
			j=inp[i]-96;
			j=(j+k)%26;
			if(j==0)
			{
				j=26;
			}
			inp[i]=j+96;
		}
	}
	cout<<inp<<endl;
	return 0;
}
