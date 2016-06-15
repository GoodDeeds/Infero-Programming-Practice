#include<bits/stdc++.h>
#define MOD 1000000007
using namespace std;
int main()
{
	long long a,b,n,x,i,j,k,res=0,temp;
	time_t begin,end;
	begin=clock();
	cin>>a>>b>>n>>x;
	//res=x;
	res=0;
	i=1;
	temp=b;
	while(i<=n)
	{
		/*res*=a;
		res%=MOD;
		res+=b;
		res%=MOD;
		i++;*/
		temp%=MOD;
		if(temp==0)
		{
			break;
		}
		res+=temp;
		res%=MOD;
		temp*=a;
		i++;
	}
	cout<<"r: "<<res<<endl;
	/*temp/=b;
	temp*=x;
	temp%=MOD;
	res+=temp;
	res%=MOD;*/
	temp=x;
	for(i=0;i<n;i++)
	{
		temp*=a;
		temp%=MOD;
	}
	res+=temp;
	res%=MOD;
	cout<<res<<endl;
	end=clock();
	cout<<((double)(end-begin))/CLOCKS_PER_SEC;
	return 0;
}
