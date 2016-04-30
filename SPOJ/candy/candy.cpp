#include<iostream>
using namespace std;
int main()
{
	int t,*n;
	cin>>t;
	while(t!=-1)
	{
		n=new int[t];
		int sum=0;
		for(int i=0;i<t;i++)
		{
			cin>>n[i];
			sum+=n[i];
		}
		int avg=sum/t;
		if(sum%t!=0)
		{
			cout<<-1<<endl;
		}
		else
		{
			int steps=0;
			for(int i=0;i<t;i++)
			{
				if(avg-n[i]>0)
				{
					steps+=(avg-n[i]);
				}
			}
			cout<<steps<<endl;
		}
		cin>>t;
	} 
	return 0;
}
