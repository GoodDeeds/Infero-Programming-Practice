#include<iostream>
#include<string>
using namespace std;
class PriorityQueue
{
	public:
		int findAnnoyance(String S,int a[]);
};
int PriorityQueue::findAnnoyance(string inp, int arr[])
{
	
	int n,i;
	int res=0;
	
	n=inp.size();
	/*int *arr=new int[n];*/
	int *cumu=new int[n];
	for(i=0;i<n;i++)
	{
		cumu[i]=0;
	}
	cumu[n-1]=0;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
		
	}
	for(i=(n-2);i>=0;i--)
	{
		if(inp[i+1]=='b')
		{
			cumu[i]=cumu[i+1]+1;
		}
		else
		{
			cumu[i]=cumu[i+1];
		}
		
	}
	for(i=0;i<n;i++)
	{
		res+=(cumu[i]*arr[i]);
	}
	return res;
}

