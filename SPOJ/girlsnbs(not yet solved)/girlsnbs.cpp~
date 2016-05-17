#include<iostream>
using namespace std;
int min(int x,int y)
{
	if(x<y)
	{
		return x;
	}
	return y;
}
int main()
{
	int g,b;
	cin>>g>>b;
	while(g!=-1 && b!=-1)
	{
		if(g<=b)
		{
			while(g!=0)
			{
				g--;
				b--;
			}
			cout<<b+1<<endl;
		}
		else
		{
			while(b!=0)
			{
				b--;
				g--;
			}
			cout<<g+1<<endl;
		}
		cin>>g>>b;
		
		
	}
	return 0;
}
