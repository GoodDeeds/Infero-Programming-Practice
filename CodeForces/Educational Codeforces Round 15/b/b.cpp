//Help from Chandra Kiran
#include<bits/stdc++.h>
using namespace std;
long long power(long long base, long long exp){
    long long ans = 1;
    while(exp>0){
        if(exp&1){
            ans *= base;
        }
        base *= base;
        exp>>=1;
    }
    return ans;
}
/*int main()
{
	long long n,i,j,k,count=0;
	cin>>n;
	vector<long long> arr;
	for(i=0;i<n;i++)
	{
		cin>>j;
		arr.push_back(j);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(pow(2,(long long)(log2(arr[i]+arr[j])))==(arr[i]+arr[j]))
			{
				count++;
			}
			
		}
	}
	cout<<count<<endl;
	return 0;
}*/
map<int,int> arr;
int main()
{
	long long n,i,j,k,val,max_val=-1;
	cin>>n;	
	for(i=0;i<n;i++)
	{
		cin>>val;
		arr[val]++;	
		if(val>max_val)
		{
			max_val=val;
		}
	}
	long long res=0;
	for(i=1;i<=max_val;i++)
	{
		long long val1=power(2,(long long)log2(i));
		if((long long)(log2(i))!=log2(i))
		{
			val1*=2;
		}
		long long diff=val1-i;
		for(j=diff;j<=max_val;j+=val1,val1*=2)
		{
			if(i==j)
			{
				res+=(arr[i]*(arr[i]-1))/2;
		//		cout<<"i: "<<i<<" arr: "<<arr[i]<<" r: "<<res<<endl;
			}			
			else if(i<j)
			{
				res+=arr[i]*arr[j];
		//		cout<<"i: "<<i<<" arr: "<<arr[i]<<" j: "<<j<<" arr: "<<arr[j]<<" r: "<<res<<endl;
			}
		}
	}
	cout<<res<<endl;
	return 0;
	
}
