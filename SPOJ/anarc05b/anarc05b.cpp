#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int main()
{
	long long int n1,*v1,n2,*v2,i,j,k,l,*inter;
	cin>>n1;
	while(n1!=0)
	{
		vector<long long int> v1(n1);
		for(i=0;i<n1;i++)
		{
			cin>>v1[i];
		}
		cin>>n2;
		vector<long long int> v2(n2);
		for(i=0;i<n2;i++)
		{
			cin>>v2[i];
		}
		vector<long long int> inter(min(n1,n2));
		j=0;
		k=0;
		for(i=0;i<min(n1,n2) && j<n1 && k<n2;)
		{
			if(v1[j]<v2[k])
			{
				j++;				
			}
			else if(v1[j]>v2[k])
			{
				k++;
			}
			else if(v1[j]==v2[k])
			{
				inter[i]=v1[j];
				i++;
				j++;
				k++;
			}
		}
		long long int sum1=0,sum2=0,finsum=0;	
		l=0,j=0,k=0;
		//cout<<"I "<<i<<endl;
		while(l<i)
		{
			

			sum1=0;
			sum2=0;
			while(v1[j]<inter[l])
			{
				sum1+=v1[j];
				j++;
				//cout<<"Sum1 "<<sum1<<endl;
			}
			while(v2[k]<inter[l])
			{
				sum2+=v2[k];
				k++;
				//cout<<"Sum2 "<<sum2<<endl;
			}
			if(sum1>sum2)
			{
				finsum+=sum1;
				//cout<<"Choosing sum1 "<<sum1<<" "<<finsum<<endl;
			}
			else
			{
				finsum+=sum2;
			//	cout<<"Choosing sum2 "<<sum2<<" "<<finsum<<endl;
			}
			//finsum+=inter[l];
			
			l++;
		}
		sum1=sum2=0;
		while(j<n1)
		{
			sum1+=v1[j];
			j++;
		}
		while(k<n2)
		{
			sum2+=v2[k];
			k++;
		}
		if(sum1>sum2)
		{
			finsum+=sum1;
	//		cout<<"Choosing sum1 "<<sum1<<" "<<finsum<<endl;
		}
		else
		{
			finsum+=sum2;
		//	cout<<"Choosing sum2 "<<sum2<<" "<<finsum<<endl;
		}
		cout<<finsum<<endl;
		cin>>n1;
				
	}
	return 0;
}
