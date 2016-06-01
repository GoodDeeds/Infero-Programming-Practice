#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int mintoll(int **arr,int startindex,int size,int tim,int *res)
{
	int result;
	if(startindex==(size-1))
	{
		return 0;
	}
	if(res[startindex]!=-1)
	{
		return res[startindex];
	}
	
	for(int i=startindex+1;i<size;i++)
	{
		if(tim)
		result=min(arr[startindex][i]+mintoll(arr,i,size,res))
	}
}
