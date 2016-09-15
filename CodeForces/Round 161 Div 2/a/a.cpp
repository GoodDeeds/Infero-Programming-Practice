#include<bits/stdc++.h>
using namespace std;
int main()
{
	int val,res=0;
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
			cin>>val;
			if(val==1)
			{
				res+=abs(i-2);
				res+=abs(j-2);
			}
		}		
	}
	cout<<res<<endl;
	return 0;
}
