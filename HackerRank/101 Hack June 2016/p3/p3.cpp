#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n,q,k,i,val;
	cin>>n>>q>>k;
	//long long *arr=new long long[n];
	vector<long long> arr;
	arr.empty();
	for(i=0;i<n;i++)
	{
		cin>>val;
		arr.push_back(val);
	}
	long long lmin=n+1,rmax=-1;
	long long *l=new long long[q];
	long long *r=new long long[q];
	i=0;
	while(i<q)
	{
		cin>>l[i]>>r[i];
		if(l[i]<=k && r[i]>=k)
		{
			if(l[i]<lmin)
			{
				lmin=l[i];
			}
			if(r[i]>rmax)
			{
				rmax=r[i];
			}
		}
		//sort(arr.begin()+l,arr.begin()+r+1);
		i++;
		
	}
	for(i=0;i<q;i++)
	{
		if((l[i]<lmin && r[i]<lmin) || (l[i]>rmax && r[i]>rmax))
		{
			continue;
		}
		sort(arr.begin()+l[i],arr.begin()+r[i]+1);
	}
	/*for(i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;*/
	cout<<arr[k]<<endl;
	return 0;
}
