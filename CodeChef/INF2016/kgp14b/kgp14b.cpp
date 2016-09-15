#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long n,p,q,i,j,k;
	string s1,s2;
	cin>>n;
	for(k=0;k<n;k++)
	{
		cin>>p>>q;
		cin>>s1>>s2;
		long long **lcs=new long long*[p+1];
		for(i=0;i<=p;i++)
		{
			lcs[i]=new long long[q+1];
			for(j=0;j<=q;j++)
			{
				lcs[i][j]=0;
			}
			
		}
		for(i=p;i>=0;i--)
		{
			for(j=q;j>=0;j--)
			{ 	
				if(i==p || j==q)
				{
					lcs[i][j]=0;
				}
				else if(s1[i]==s2[j])
				{
					lcs[i][j]=1+lcs[i+1][j+1];
				}
				else
				{
					lcs[i][j]=max(lcs[i+1][j],lcs[i][j+1]);
				}
			}
		}
	
		long long res=min(abs(lcs[0][0]-p),abs(lcs[0][0]-q));
		cout<<"Case "<<k+1<<": "<<res+max(p,q)<<endl;
	}
	return 0;
}
