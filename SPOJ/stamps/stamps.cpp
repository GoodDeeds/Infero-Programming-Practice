#include<iostream>
using namespace std;
void bubble_sort(int *arr,int size)
{
	for(int i=0;i<size-1;i++)
	{
		for(int j=0;j<size-i-1;j++)
		{
			if(arr[j]<arr[j+1])
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
	int t,diff,nf,*ns;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		int j;
		cin>>diff>>nf;
		ns=new int[nf];
		for(j=0;j<nf;j++)
		{
			cin>>ns[j];
		}
		bubble_sort(ns,nf);
		int sum=0;
		int flag=0;
		for(j=0;j<nf;j++)
		{
			sum+=ns[j];
			if(sum>=diff)
			{
				flag=1;
				break;
			}
		}
		if(flag==1)
		{
			cout<<"Scenario #"<<i+1<<":"<<endl;
			cout<<j+1<<endl<<endl;
		}
		else if(sum>=diff)
		{
			cout<<"Scenario #"<<i+1<<":"<<endl;
			cout<<j+1<<endl<<endl;
		}
		else
		{
			cout<<"Scenario #"<<i+1<<":"<<endl;
			cout<<"impossible"<<endl<<endl;	
		}
	}
	return 0;
}
