#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
#include<cmath>
using namespace std;
int main()
{
	int n,i,j,k,l,oddc=0,evenc=0,count=0;
	cin>>n;
	int *arr=new int[n];
	int *oddarr=new int[n];
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
		if(arr[i]%2==1)
		{
			oddarr[oddc]=i;
			oddc++;
		}
		else
		{
			evenc++;
		}
	}
	if(oddc%2==1)
	{
		cout<<"NO"<<endl;
	}
	else
	{
		for(i=0;i<(oddc-1);i+=2)
		{
			count+=(oddarr[i+1]-oddarr[i]);
		}
		cout<<(2*count)<<endl;
	}
	return 0;
}
