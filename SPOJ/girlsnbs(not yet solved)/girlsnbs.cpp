#include<iostream>
using namespace std;
int g,b,*arr;
int min(int x,int y)
{
	if(x<y)
	{
		return x;
	}
	return y;
}
void placb(int g1, int b1)
{
	placb(g1/2);
	placb(g1-g1/2);
		
}
int main()
{
	
	cin>>g>>b;
	arr=new int[g+b];
	while(g!=-1 && b!=-1)
	{
		//if(g<=b)
		//{
			//while(g!=0)
			//{
				//g--;
				//b--;
			//}
			//cout<<b+1<<endl;
		//}
		//else
		//{
			//while(b!=0)
			//{
				//b--;
				//g--;
			//}
			//cout<<g+1<<endl;
		//}
		if(b>g)
		{
			g=b+g;
			b=g-b;
			g=g-b;
		}
		placb(g,b);
		cin>>g>>b;
		
		
	}
	return 0;
}
