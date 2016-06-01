#include<iostream>
#include<string>
using namespace std;
int main()
{
	string inp;
	int i,j,t;
	cin>>t;
	for(i=0;i<t;i++)
	{
		cin>>inp;
		int count=0;
		int flag=0;
		for(j=0;j<inp.size();)
		{
			flag=0;
			while((j+1)<inp.size() && inp[j]==inp[j+1])
			{
				//inp=inp.substr(0,j+1)+inp.substr(j+2);
				count++;
				flag=1;
				j++;
			}
			if(flag==0)
			{
				j++;
			}
		}
		cout<<count<<endl;
	}
	return 0;
	
}
