#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
{
	long long int n,k,i,j,l;
	cin>>n>>k;
	vector<long long int> arr(n);
	vector<long long int> coun(k);
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
		arr[i]%=k;
		
	}
	for(i=0;i<k;i++)
	{
		coun[i]=0;
	}
	sort(arr.begin(),arr.end());
	j=0;
	l=n-1;
	int flag=0;
	for(i=0;i<n;i++)
	{
		coun[arr[i]]++;
	}
	
	long long int totc=0;
	
	for(i=1;i<(((long double)(k))/2.00);i++)
	{
		totc+=(max(coun[i],coun[k-i]));
	}
	if(k%2==0 && coun[k/2]>0)
	{
		totc++;
	}
	if(coun[0]>0)
	{
		totc++;		
	}
	/*while(j<=l && j<n && arr[j]==0)
	{
		flag=1;
		j++;
	}
	
	long long int lval,rval,lc,rc,totc=0;
	if(flag==1)
	{
		totc++;
	}
	while(j<=l)
	{
		
		while(j<=l && arr[l]>(k-arr[j]))
		{
			l--;
		}
		if(j<=l && (arr[j]+arr[l])==k)
		{
			lval=arr[j];
			rval=arr[l];
			lc=rc=0;
			while(arr[j]==lval)
			{
				lc++;
				j++;
			}		
			while(arr[l]==rval)
			{
				rc++;
				l--;
			}	
			totc+=max(lc,rc);
		}
		else
		{
			while(j<=l && (arr[j]+arr[l]<k))
			{
				j++;
			}
		}
		
		
	}*/
	cout<<totc<<endl;
	return 0;
	
}
