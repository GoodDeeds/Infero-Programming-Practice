#include<iostream>
#include<cmath>
using namespace std;
/*static long long arr[1000000001]={0};
int main()
{
	long long t,k,i,j,l,count=1;
	cin>>t;
	for(i=0;i<t;i++)
	{
		cin>>k;
		if(k!=1 && arr[k]!=0)
		{
			cout<<arr[k]<<endl;
			continue;
			
		}
		else if(k==1)
		{
			cout<<arr[k]<<endl;
			continue;
		}
		int flag=0;
		for(j=arr[count]+1;count<k;)
		{
			l=j;
			flag=0;
			while(l>0)
			{
				if(l%2==1)
				{
					flag=1;
					break;
				}
				l=l/10;
			}
			if(flag==0)
			{
				count++;
				arr[count]=j;
			}
			j++;
		}
		cout<<arr[count]<<endl;
	}
}*/
int main()
{
	long long t,k,i,j,l,count=1,base,num,temp;
	cin>>t;
	for(i=0;i<t;i++)
	{
		cin>>k;
		k--;
		base=(long long)floor(((long double)log(k))/log(5));
		num=0;
		while(k>0)
		{
			temp=k/(long long)(pow(5,base));
			k-=(temp*pow(5,base));
			num+=(pow(10,base)*temp*2);
			base--;
			
			
			
		}
		
		cout<<num<<endl;
	
	}	
	return 0;
}
