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
long long s(long long num)
{
	long long res=0,temp;
	while(num>0)
	{
		temp=num%10;
		res+=temp;
		num/=10;
	}
	return res;
}
/*int main()
{
	long long a,b,c,n=0,i,j,k,modu,temp,quot,val1;
	cin>>a>>b>>c;
	vector<long long> arr;
	arr.clear();
	if(c>=0)
	{
		modu=c%b;	
	}
	else
	{
		temp=-c;
		if(temp%b!=0)
		{
			quot=temp/b;
			quot++;
		}
		else
		{
			quot=temp/b;
		}
		val1=quot*b-temp;
		modu=val1%b;
	}
	if(modu<0)
	{
		modu=-modu;
	}
	if(modu==0)
	{
		modu=b;
	}
	long long upval=b*power(72,a)+c;
	for(i=modu;i<upval;i+=b)
	{
		if(i==(b*power(s(i),a)+c))
		{
			n++;
			arr.push_back(i);
		}
	}
	cout<<n<<endl;
	for(i=0;i<arr.size();i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	return 0;
}*/
int main()
{
	long long a,b,c,i,j,k,val;
	vector<long long> arr;
	arr.clear();
	cin>>a>>b>>c;
	for(i=0;i<=81;i++)
	{
		val=b*power(i,a)+c;	
		
		if(s(val)==i && val>0 && val<1000000000)
		{
			arr.push_back(val);
		}
	}
	sort(arr.begin(),arr.end());
	cout<<arr.size()<<endl;
	for(i=0;i<arr.size();i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	return 0;
}
