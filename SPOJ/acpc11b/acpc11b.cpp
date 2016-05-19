#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>
using namespace std;
int main()
{
	long long int t,n1,n2,*v1,*v2,i,j,k,l;
	cin>>t;
	for(i=0;i<t;i++)
	{
		cin>>n1;
		v1=new long long int[n1];
		for(j=0;j<n1;j++)
		{
			cin>>v1[j];
		}
		cin>>n2;
		v2=new long long int[n2];
		for(j=0;j<n2;j++)
		{
			cin>>v2[j];
		}
		sort(v1,v1+n1);
		sort(v2,v2+n2);
		long long int mindif=1000000,dif=1000000;
		k=0;
		l=0;
		while(k<n1 && l<n2)
		{
			if(v1[k]<v2[l])
			{
				while(k<n1 && l<n2 && v1[k]<v2[l])
				{
					k++;
				}	
				dif=min(abs(v1[k-1]-v2[l]),abs(v1[k]-v2[l]));
			}	
			if(mindif>dif)
			{
				mindif=dif;
			}
			if(k<n1 && l<n2 && v1[k]>v2[l])
			{
				while(v1[k]>v2[l])
				{
					l++;
				}	
				dif=min(abs(v1[k]-v2[l-1]),abs(v1[k]-v2[l]));
			}	
			if(mindif>dif)
			{
				mindif=dif;
			}
		//	cout<<"dif: "<<dif<<endl;		
			if(v1[k]==v2[l])
			{
				mindif=0;
			//	cout<<"BP1"<<endl;
				break;
			}
			if(mindif==0)
			{
			//	cout<<"BP2"<<endl;
				break;
			}
			
		}	
		cout<<mindif<<endl;
	}
	delete v1;
	delete v2;
	return 0;
}
