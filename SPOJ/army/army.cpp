#include<iostream>
#include<algorithm>
using namespace std;
void bubble_sort(int *arr,int size)
{
	for(int i=0;i<size-1;i++)
	{
		for(int j=0;j<size-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				int t=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=t;
			}
		}
	}
}
int main()
{
	int t,ng,nm,*g,*m;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		cin>>ng>>nm;
		g=new int[ng];
		m=new int[nm];
		for(int j=0;j<ng;j++)
		{
			cin>>g[j];
		}
		for(int j=0;j<nm;j++)
		{
			cin>>m[j];
		}
		sort(g,g+ng);
		sort(m,m+nm);
		int i1=0;
		int i2=0;
		while(i1<ng && i2<nm)
		{
			if(g[i1]<m[i2])
			{
				i1++;
			}
			else
			{
				i2++;
			}
		}
		if(i1==ng)
		{
			cout<<"MechaGodzilla"<<endl;
		}
		else if(i2==nm)
		{
			cout<<"Godzilla"<<endl;
		}
					
	}
	return 0;
}
