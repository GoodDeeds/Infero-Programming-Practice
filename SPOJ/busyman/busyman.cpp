#include<iostream>

using namespace std;
int main()
{
	long long int t,noa,*m,*n,curt,i,j,k,l;
	cin>>t;
	for(i=0;i<t;i++)
	{
		cin>>noa;
		m=new long long int[noa];
		n=new long long int[noa];
		for(j=0;j<noa;j++)
		{
			cin>>m[j]>>n[j];
		}
		curt=0;
		long long int et=100001,count=0;
		while(true)
		{
			
			int flag=0;
			et=100001;
			for(j=0;j<noa;j++)
			{
				if(m[j]>=curt)
				{
					flag=1;
					if(n[j]<et)
					{
						et=n[j];
					}
				}
			}
			if(flag==0)
			{
				break;
			}
			count++;
			curt=et;
			//cout<<"c: "<<curt<<endl;
		}
		cout<<count<<endl;
	}
	return 0;
		
}
