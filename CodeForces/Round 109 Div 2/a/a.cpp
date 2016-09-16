#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,min_val,max_val,val,count=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>val;
		if(i==0)
		{
			min_val=max_val=val;
		}
		else
		{
			if(val<min_val)
			{
				min_val=val;
				count++;
			}
			else if(val>max_val)
			{
				max_val=val;
				count++;
			}
		}
	}
	cout<<count<<endl;
	return 0;
}
