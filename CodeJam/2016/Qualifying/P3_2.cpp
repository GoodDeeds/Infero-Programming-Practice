#include<iostream>
#include<cmath>
using namespace std;
int isprime(int &val)
{
	for(int i=2;i<=sqrt(val);i++)
	{
		if(val%i==0)
			return 0;
	}
	return 1;
}
void conv_bin(int val,int arr[], int &size)
{
	for(int i=size-1;i>=0;i--)
	{
		arr[i]=val%2;
		val/=2;
	}
}
int conv_base(int arr[], int &size, int &base)
{
	int sum=0;
	for(int i=size-1;i>=0;i--)
	{
		sum=sum+(base^(size-i-1)*arr[i]%3);
	}
	sum%=3;
	return sum;
}
int find_div(int &val)
{
	for(int i=2;i<sqrt(val);i++)
	{
		if(val%i==0)
			return i;
	}
}

int main()
{
	int t,n,j,counter=0;
	int *arr;
	int hold[9];
	cin>>t>>j>>n;
	arr=new int[j];
	cout<<"Case #1:"<<endl;
	for(int k=pow(2,j-1)+1;k<=pow(2,j)-1 && counter<n;k+=2)
	{
		int flag=0;
		cout<<k<<" "<<isprime(k)<<endl;
		if(isprime(k)==1)
		{
			continue;
		}
		conv_bin(k,arr,j);
 		for(int c=2;c<=6;c+=2)
		{
			int sum=conv_base(arr,j,c);
			if(sum%3!=0)
			{
				flag=1;
				break;
			}
			
		}
		if(flag==1)
		{
			continue;
		}		
		for(int i=0;i<j;i++)
		{
			cout<<arr[i];
		}		
		cout<<" ";
		for(int i=0;i<9;i++)
		{
			if(i%2==1)
			{
				cout<<"2"<<" ";
			}
			else
			{	
				cout<<"3"<<" ";
			}	
		}	
		cout<<endl;
		counter++; 
	}
    		
	return 0;
}
