#include<bits/stdc++.h>
using namespace std;
int main()
{
	string inp;
	long long i,j,k,sum=0;
	vector<long long> arr;
	arr.clear();
	sum++;
	for(i=1;i<inp.size();i++)
	{
		if(inp[i]==inp[i-1])
		{
			sum++;
		}
		else
		{
			arr.push_back(sum);
			sum=1;
		}
	}
	arr.push_back(sum);
	j=0;
	for(i=0;i<inp.size();)
	{
		if(i<arr[j])
		{
			
			i++;
		}
		else
		{
			j++;
		}
	}
}
