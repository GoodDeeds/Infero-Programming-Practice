#include<iostream>
using namespace std;
int main()
{
	int oo=-1,oe=-1;
	long long t,n,r,c,x,i;
	cin>>t;
	while(t--)
	{
		cin>>n;
	//	cout<<"n: "<<n<<endl;
		oo=oe=-1;
		int flag=0;
		while(n--)
		{
			cin>>r>>c>>x;
			if(r%2==0 && c%2==0 && x%2==0)
			{
				if(oo==-1)
				{
					oo=0;
				}
				else if(oo==1)
				{
					flag=1;
					
				}
			}
			else if(r%2==0 && c%2==0 && x%2==1)
			{
				
				if(oo==-1)
				{
					oo=1;
				}
				else if(oo==0)
				{
					flag=1;
					
				}
			}
			else if(r%2==0 && c%2==1 && x%2==0)
			{
				if(oe==-1)
				{
					oe=0;
				}
				else if(oe==1)
				{
					flag=1;
					
				}
			}
			else if(r%2==0 && c%2==1 && x%2==1)
			{
				if(oe==-1)
				{
					oe=1;
				}
				else if(oe==0)
				{
					flag=1;
					
				}
			}
			else if(r%2==1 && c%2==0 && x%2==0)
			{
				if(oe==-1)
				{
					oe=0;
				}
				else if(oe==1)
				{
					flag=1;
					
				}
			}
			else if(r%2==1 && c%2==0 && x%2==1)
			{
				if(oe==-1)
				{
					oe=1;
				}
				else if(oe==0)
				{
					flag=1;
					
				}
			}
			else if(r%2==1 && c%2==1 && x%2==0)
			{
				if(oo==-1)
				{
					oo=0;
				}
				else if(oo==1)
				{
					flag=1;
					
				}
			}
			else if(r%2==1 && c%2==1 && x%2==1)
			{
				if(oo==-1)
				{
					oo=1;
				}
				else if(oo==0)
				{
					flag=1;
					
				}
			}
			//cout<<"oo: "<<oo<<" oe: "<<oe<<endl;
		}
		//cout<<"oo: "<<oo<<" oe: "<<oe<<endl;
		if(flag==0 && oo!=oe)
		{
			cout<<"Yes"<<endl;
		}
		else
		{
			cout<<"No"<<endl;
		}
	}
	return 0;
}
