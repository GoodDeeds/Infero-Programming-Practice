#include <fstream>
#include <iostream>
#include <string>
#include <math.h>
#include <set>
#include <vector>
#include <map>
#include <queue>
#include <stdio.h>
#include <stack>
#include <algorithm>
#include <list>
#include <ctime>
#include <memory.h>
#include <assert.h>
#include <stdlib.h>
#include <cmath>

#define eps 1e-9
#define bs 1000000007
#define bsize 512
#define loop(i,start,end) for(int i=start;i<end;i++)
#define MOD 1000000007
#define modulus 1
using namespace std;
#define ll long long


int main()
{
	long long int t,b,m,i,j,**arr,k,*wtr;
	cin>>t;
	for(i=0;i<t;i++)
	{
		cin>>b>>m;
		*arr=new long long int[b];
		wtr=new long long int[b];
		for(j=0;j<b;j++)
		{
			arr[b]=new long long int[b];
		}
		for(j=0;j<b;j++)
		{
			for(k=0;k<b;k++)
			{
				arr[j][k]=0;
			}
		}
		cout<<"Case #"<<i+1<<": ";
		if(m<b)
		{
			cout<<"POSSIBLE"<<endl;
			arr[0][b-1]=1;
			m--;
			j=0;
			k=1;
			while(m>0)
			{
				arr[0][k]=1;
				arr[k][b-1]=1;
				m--;
				j++;
				k++;
			}
			for(j=0;j<b;j++)
			{
				for(k=0;k<b;k++)
				{
					cout<<arr[j][k];
				}
				cout<<endl;
			}
		}
		else
		{
			arr[0][b-1]=1;
			m--;
			j=0;
			k=1;
			while(m>0)
			{
				arr[0][k]=1;
				arr[k][b-1]=1;
				m--;
				j++;
				k++;
			}
			for(j=0j<b;j++)
			{
				for(k=0;k<b;k++)
				{
					if(arr[j][k]==1)
					{
						wtr[k]++;
						
					}
				}
			}			
			
		}
	}

	return 0;
}

