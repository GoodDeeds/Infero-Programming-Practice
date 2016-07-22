#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
long long int numremove(long long int dict[],int beg,int end,long long int k,long long int arr[][26])
{
	if(beg==end)
	{
		arr[beg][end]=0;
		return 0;
	}
	if((dict[end]-dict[beg])<=k)
	{
		arr[beg][end]=0;
		return 0;
	}
	if(arr[beg][end]!=-1)
	{
		return arr[beg][end];
	}
	long long int result=min((1+numremove(dict,beg+1,end,k,arr)),(1+numremove(dict,beg,end-1,k,arr)));
	arr[beg][end]=result;
	return result;
}
int main()
{
	string w;
	long long int t,k,i,j,l,dict[26];
	cin>>t;
	for(i=0;i<t;i++)
	{
		for(j=0;j<26;j++)
		{
			dict[j]=0;
		}
		cin>>w;
		cin>>k;
		for(j=0;j<w.size();j++)
		{
			dict[w[j]-97]++;
		}
	
		sort(dict,dict+26);
		
		l=0;
		while(dict[l]==0)
		{
			l++;
		}
		long long int arr[26][26];
		for(j=0;j<26;j++)
		{
			for(int x=0;x<26;x++)
			{
				arr[j][x]=-1;
			}
		}
		long long int res=numremove(dict,l,25,k,arr);
		cout<<res<<endl;
	}
	return 0;
}
