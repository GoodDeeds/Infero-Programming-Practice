#include<iostream>
using namespace std;
void bubble(long *a, int size,int ore)
{
	int temp;
	for(int i=0;i<size-1;i++)
	{
		for(int j=0;j<size-i-1;j++)
		{
			if((a[j]>a[j+1] && ore==1)||(a[j]<a[j+1] && ore==2))
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
}
int main()
{
	int t,*n;
	cin>>t;
	n=new int[t];
	for(int i=0;i<t;i++)
	{
		cin>>n[i];
		long *f,*s;
		f=new long[n[i]];
		s=new long[n[i]];
		for(int j=0;j<n[i];j++)
		{
			cin>>f[j];
		}
		for(int j=0;j<n[i];j++)
		{
			cin>>s[j];
		}
		bubble(f,n[i],1);
		bubble(s,n[i],2);
		long sum=0;
		for(int j=0;j<n[i];j++)
		{
			sum+=f[j]*s[j];
		}
		cout<<"Case #"<<i+1<<": "<<sum<<endl;
	}
	return 0;
}
