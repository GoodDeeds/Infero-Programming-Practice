#include<bits/stdc++.h>
using namespace std;
void convbin(char ch,long long arr[])
{
	//cout<<"ch: "<<ch<<endl;
	for(int j=0;j<4;j++)
	{
		arr[j]=0;
	}
	int num,i=3;
	if(ch<='9')
	{
		num=ch-48;
	//	cout<<"n: "<<num<<endl;
		while(num>0)
		{
			arr[i]=num%2;
			num/=2;
			i--;
			
		}
	}
	else
	{
		num=ch-55;
	//	cout<<"n: "<<num<<endl;
		i=3;
		while(num>0)
		{
			arr[i]=num%2;
			num/=2;
			i--;
		}
	
	}
}
char convhex(long long arr[])
{
	int sum=0,i;
	char ch;
	for(i=0;i<4;i++)
	{
		sum+=(pow(2,4-i-1)*arr[i]);
	}
	if(sum<=9)
	{
		ch=sum+48;
	}
	else
	{
		ch=sum+55;
	}
	return ch;
	
}
int main()
{
	long long q,i,j,arra[4],arrb[4],arrc[4];
	long long k;	
	string a,b,c;
	cin>>q;
	while(q--)
	{
		cin>>k;
		cin>>a>>b>>c;
		if(a.size()<b.size())
		{
			a=string(b.size()-a.size(),'0')+a;
		}
		else if(b.size()<a.size())
		{
			b=string(a.size()-b.size(),'0')+b;
		}
		if(c.size()<a.size())
		{
			c=string(a.size()-c.size(),'0')+c;
		}
		else if(a.size()<c.size())
		{
			a=string(c.size()-a.size(),'0')+a;
			b=string(c.size()-a.size(),'0')+b;			
		}
	//	cout<<"a: "<<a<<endl<<"b: "<<b<<endl<<"c: "<<c<<endl;
		int flag=0;
		for(i=0;i<a.size();i++)
		{
			convbin(a[i],arra);
			convbin(b[i],arrb);
			convbin(c[i],arrc);
		/*	for(j=0;j<4;j++)
			{
				cout<<arra[j];
			}
			cout<<endl;
			for(j=0;j<4;j++)
			{
				cout<<arrb[j];
			}
			cout<<endl;
			for(j=0;j<4;j++)
			{
				cout<<arrc[j];
			}
			cout<<endl;*/
			for(j=0;j<4;j++)
			{
				if(arrc[j]==0)
				{
					
					if(arra[j]==1 && arrb[j]==0)
					{
						arra[j]=0;
						k--;
					}
					else if(arra[j]==0 && arrb[j]==1)
					{
						arrb[j]=0;
						k--;
					}
					else if(arra[j]==1 && arrb[j]==1)
					{
						arra[j]=0;
						arrb[j]=0;
						k-=2;
					}
					
				}
				else
				{
					if(arra[j]==0 && arrb[j]==0)
					{
						k--;
						arrb[j]=1;
					}
					
					
				}
			}
			if(k<0)
			{
				flag=1;
				break;
			}
			a[i]=convhex(arra);
			b[i]=convhex(arrb);
	//		cout<<"a: "<<a<<endl<<"b: "<<b<<endl;
			
			
		}
		for(i=0;i<a.size() && k>0;i++)
		{
			convbin(a[i],arra);
			convbin(b[i],arrb);
			for(j=0;j<4 && k>0;j++)
			{
				if(arra[j]==1 && arrb[j]==1)
				{
					arra[j]=0;
					k--;
				}
			}
			a[i]=convhex(arra);
			b[i]=convhex(arrb);
		}
		if(flag==0)
		{
			i=0;
			while(i<(a.size()-1) && a[i]=='0')
			{
				i++;
			}
			a=a.substr(i);
			i=0;
			while(i<(b.size()-1) && b[i]=='0')
			{
				i++;
			}
			b=b.substr(i);
			cout<<a<<endl<<b<<endl;
		}
		else
		{
			cout<<"-1"<<endl;
		}
	//	cout<<"k: "<<k<<endl;
		
	}
	return 0;
}
