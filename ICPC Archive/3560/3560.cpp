#include<bits/stdc++.h>
using namespace std;
long long convtert(long long num)
{
	long long val;
	string res="";
	char temp;
/*	if(num%3==0 && num!=0)
	{
		res=1;
	}*/
	/*while(num%3==0 && num!=0)
	{
		res*=10;
		num/=3;
	}*/
	while(num>0)
	{
		val=num%3;
		temp='0'+val;
		res=temp+res;
		num/=3;
	}
	return stoi(res);
}
int main()
{
	long long t,i,j,k,d,m,y;
	string months[]={"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};
	string dat,temp;
	cin>>t;
//	cout<<"t: "<<t<<endl;
	int flag=0;
	while(t--)
	{
		cin>>dat;
		flag=0;
	//	cout<<"d: "<<dat<<endl;
		if(dat.size()==9)
		{
			for(i=0;i<dat.size();i++)
			{
				if((i==6 || i==2) && dat[i]!='-')
				{
					flag=1;
					break;
				}
				if((i==0 || i==1 || i==7 || i==8) && (dat[i]>57 || dat[i]<48))
				{
					flag=1;
					break;
				}
			}
		//	cout<<"f: "<<flag<<endl;
			if(flag==1)
			{
				cout<<"?"<<endl;
				continue;
			}
			temp=dat.substr(3,3);
			flag=1;
			for(j=0;j<12;j++)
			{
				if(months[j]==temp)
				{
					m=j+1;
			//		cout<<"mo: "<<m<<endl;
					flag=0;
					break;
				}
			}
		//	cout<<"f2: "<<flag<<endl;
			if(flag==1)
			{
				cout<<"?"<<endl;
				continue;
			}
			d=convtert(stoi(dat.substr(0,2)));
			m=convtert(m);
			y=convtert(stoi(dat.substr(7,2)));
			cout<<d<<"-"<<m<<"-"<<y<<endl;
		}
		else if(dat.size()==10)
		{
			for(i=0;i<dat.size();i++)
			{
				if((i==2 || i==5) && dat[i]!='-')
				{
					flag=1;
					break;
				}
				if((i==0 || i==1 || i==3 || i==4 || i==6 || i==7 || i==8 || i==9) && (dat[i]>57 || dat[i]<48))
				{
					flag=1;
					break;
				}
			}
			if(flag==1)
			{
				cout<<"?"<<endl;
				continue;
			}
			d=convtert(stoi(dat.substr(0,2)));
			m=convtert(stoi(dat.substr(3,2)));
			y=convtert(stoi(dat.substr(6,4)));
			cout<<d<<"-"<<m<<"-"<<y<<endl;
		}
		else if(dat.size()==11)
		{
			for(i=0;i<dat.size();i++)
			{
				if((i==6 || i==2) && dat[i]!='-')
				{
					flag=1;
					break;
				}
				if((i==0 || i==1 || i==7 || i==8 || i==9 || i==10) && (dat[i]>57 || dat[i]<48))
				{
					flag=1;
					break;
				}
			}
			if(flag==1)
			{
				cout<<"?"<<endl;
				continue;
			}
			temp=dat.substr(3,3);
			flag=1;
			for(j=0;j<12;j++)
			{
				if(months[j]==temp)
				{
					m=j+1;
					flag=0;
					break;
				}
			}
			if(flag==1)
			{
				cout<<"?"<<endl;
				continue;
			}
			d=convtert(stoi(dat.substr(0,2)));
			m=convtert(m);
			y=convtert(stoi(dat.substr(7,4)));
			cout<<d<<"-"<<m<<"-"<<y<<endl;
		}
		else if(dat.size()==8)
		{
			for(i=0;i<dat.size();i++)
			{
				if((i==5 || i==2) && dat[i]!='-')
				{
					flag=1;
					break;
				}
				if((i==0 || i==1 || i==3 || i==4 || i==6 || i==7) && (dat[i]>57 || dat[i]<48))
				{
					flag=1;
					break;
				}
			}
			if(flag==1)
			{
				cout<<"?"<<endl;
				continue;
			}
			d=convtert(stoi(dat.substr(0,2)));
			m=convtert(stoi(dat.substr(3,2)));
			y=convtert(stoi(dat.substr(6,2)));
			cout<<d<<"-"<<m<<"-"<<y<<endl;
		}
		else
		{
			cout<<"?"<<endl;
			continue;
		}
	}
	return 0;
}
