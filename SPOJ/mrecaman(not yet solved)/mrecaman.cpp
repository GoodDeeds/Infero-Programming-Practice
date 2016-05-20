#include<iostream>
#include<malloc.h>
#include<vector>
using namespace std;
int *arr=(int*)malloc(sizeof(int)*500001);
/*int a(int m)
{
	if(m==0)
	{
		arr[0]=0;
		return 0;
	}
	if(arr[m]!=-1)
	{
		return arr[m];
	}
	else
	{
		int temp=a(m-1);
		if(temp>m)
		{
			int flag=0;
			for(int j=0;j<m;j++)
			{
				if((temp-m)==a(j))
				{
					flag=1;
					break;
				}
			}
			if(flag==0)
			{
				arr[m]=temp-m;
				return arr[m];
			}	
			else
			{
				arr[m]=temp+m;
				return arr[m];
			}
		}
		else
		{
			arr[m]=temp+m;
			return arr[m];
		}
	}
}*/
int a(int m)
{
	if(m==0)
	{
		arr[m]=0;
		return arr[m];
	}
	if(arr[m]!=-1)
	{
		return arr[m];
	}
	if((arr[m-1]-m)>0)
	{
		int flag=0;
		for(int j=m-1;j>=0;j--)
		{
			if((arr[m-1]-m)==arr[j])
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
		{
			arr[m]=arr[m-1]-m;
		}
		else
		{
			arr[m]=arr[m-1]+m;
		}
	}
	else
	{
		arr[m]=arr[m-1]+m;
	}
	return arr[m];
}
int main()
{
	for(int i=0;i<500001;i++)
	{
		arr[i]=-1;
	}
	arr[0]=0;
	int k;
	//int l=a(4000);
	cin>>k;
	while(k!=-1)
	{
		int j;
		int x=k-1;
		while(arr[x]==-1)
		{
			x--;
			
		}
		for(int z=x+1;z<k;z++)
		{
			a(z);
		}
		j=a(k);
		cout<<j<<endl;
		cin>>k;
	}
	
	return 0;
	
}

