#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n1,n2,n3,i,j,k,h1=0,h2=0,h3=0;
	cin>>n1>>n2>>n3;
	long long *arr1=new long long[n1];
	long long *arr2=new long long[n2];
	long long *arr3=new long long[n3];
	for(i=0;i<n1;i++)
	{
		cin>>arr1[i];
		h1+=arr1[i];
	}
	for(i=0;i<n2;i++)
	{
		cin>>arr2[i];
		h2+=arr2[i];
	}
	for(i=0;i<n3;i++)
	{
		cin>>arr3[i];
		h3+=arr3[i];
	}
	long long ct1=0,ct2=0,ct3=0;
	while(h1>0 || h2>0 || h3>0)
	{
		if(h1==h2 && h1==h3)
		{
			break;
		}
		if(h1>=h2 && h1>=h3)
		{
			h1-=arr1[ct1];
			ct1++;
		}
		else if(h2>=h1 && h2>=h3)
		{
			h2-=arr2[ct2];
			ct2++;
		}
		else if(h3>=h1 && h3>=h2)
		{
			h3-=arr3[ct3];
			ct3++;
		}
	}
	cout<<h1<<endl;
	return 0;
}
