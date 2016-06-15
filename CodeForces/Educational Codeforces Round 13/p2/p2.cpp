#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long y,i,j,k,temp,tempy;
	cin>>y;
	temp=0;
	tempy=y;
	while(true)
	{
		if((tempy%4==0 && tempy%100!=0)||(tempy%400==0))
		{
			temp+=2;
			tempy++;
			temp%=7;
		}
		else
		{
			temp++;
			temp%=7;
			tempy++;
		}
		//cout<<"t: "<<temp<<endl;
		if(temp==0)
		{
			if(((y%4==0 && y%100!=0)||(y%400==0))&&((tempy%4==0 && tempy%100!=0)||(tempy%400==0)))
			{
				
				cout<<tempy<<endl;
				break;
			}
			else if(((y%4!=0 || y%100==0)&&(y%400!=0))&&((tempy%4!=0 || tempy%100==0)&&(tempy%400!=0)))
			{
				
				cout<<tempy<<endl;
				break;
			}
		}
	}
	return 0;
}
