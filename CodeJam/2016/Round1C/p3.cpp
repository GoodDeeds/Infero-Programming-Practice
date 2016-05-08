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
long long int x;
void disp(long long int arr[6][6])
{
	long long int i,j;
	for(i=0;i<x;i++)
	{
		for(j=0;j<x;j++)
		{
			cout<<arr[i][j];
		}
		cout<<endl;
	}
}
int main()
{
	long long int t,b,m,i,j,arr[6][6],k,*wtr;
	cin>>t;
	for(i=0;i<t;i++)
	{
		cin>>b>>m;
		x=b;
		
		
		for(j=0;j<b;j++)
		{
			for(k=0;k<b;k++)
			{
				arr[j][k]=0;
			}
		}
		cout<<"Case #"<<i+1<<": ";
		if(b==2)
		{
			if(m==1)
			{
				arr[0][1]=1;
				cout<<"POSSIBLE"<<endl;
				disp(arr);
			}
			else
			{
				cout<<"IMPOSSIBLE"<<endl;
			}
		}
		if(b==3)
		{
			if(m==1)
			{
				arr[0][2]=1;
				cout<<"POSSIBLE"<<endl;
				disp(arr);
			}
			else if(m==2)
			{
				arr[0][1]=1;
				arr[0][2]=1;
				arr[1][2]=1;
				cout<<"POSSIBLE"<<endl;
				disp(arr);
				
			}
			else
			{
				cout<<"IMPOSSIBLE"<<endl;
			}
		}
		if(b==4)
		{
			if(m==1)
			{
				arr[0][3]=1;
				cout<<"POSSIBLE"<<endl;
				disp(arr);
			}
			else if(m==2)
			{
				arr[0][3]=1;
				arr[0][1]=1;
				arr[1][3]=1;
				cout<<"POSSIBLE"<<endl;
				disp(arr);
			}
			else if(m==3)
			{
				arr[0][3]=1;
				arr[0][1]=1;
				arr[1][3]=1;
				arr[0][2]=1;
				arr[2][3]=1;
				cout<<"POSSIBLE"<<endl;
				disp(arr);
			}
			else if(m==4)
			{
				arr[0][3]=1;
				arr[0][1]=1;
				arr[1][3]=1;
				arr[0][2]=1;
				arr[2][3]=1;
				arr[1][2]=1;
				cout<<"POSSIBLE"<<endl;
				disp(arr);
			}
			else
			{
				cout<<"IMPOSSIBLE"<<endl;
			}
		}
		if(b==5)
		{
			if(m==1)
			{
				arr[0][4]=1;
				cout<<"POSSIBLE"<<endl;
				disp(arr);
			}
			else if(m==2)
			{
				arr[0][4]=1;
				arr[0][1]=1;
				arr[1][4]=1;
				cout<<"POSSIBLE"<<endl;
				disp(arr);
			}
			else if(m==3)
			{
				arr[0][4]=1;
				arr[0][1]=1;
				arr[1][4]=1;
				arr[0][2]=1;
				arr[2][4]=1;
				cout<<"POSSIBLE"<<endl;
				disp(arr);
			}
			else if(m==4)
			{
				arr[0][4]=1;
				arr[0][1]=1;
				arr[1][4]=1;
				arr[0][2]=1;
				arr[2][4]=1;
				arr[0][3]=1;
				arr[3][4]=1;
				cout<<"POSSIBLE"<<endl;
				disp(arr);
			}
			else if(m==5)
			{
				arr[0][4]=1;
				arr[0][1]=1;
				arr[1][4]=1;
				arr[0][2]=1;
				arr[2][4]=1;
				arr[0][3]=1;
				arr[3][4]=1;
				arr[2][3]=1;
				cout<<"POSSIBLE"<<endl;
				disp(arr);
			}
			else if(m==6)
			{
				arr[0][4]=1;
				arr[0][1]=1;
				arr[1][4]=1;
				arr[0][2]=1;
				arr[2][4]=1;
				arr[0][3]=1;
				arr[3][4]=1;
				arr[1][2]=1;
				arr[1][3]=1;
				cout<<"POSSIBLE"<<endl;
				disp(arr);
			}
			else if(m==8)
			{
				arr[0][4]=1;
				arr[0][1]=1;
				arr[1][4]=1;
				arr[0][2]=1;
				arr[2][4]=1;
				arr[0][3]=1;
				arr[3][4]=1;
				arr[1][2]=1;
				arr[1][3]=1;
				arr[2][3]=1;
				cout<<"POSSIBLE"<<endl;
				disp(arr);	
			}
			else
			{
				cout<<"IMPOSSIBLE"<<endl;
			}
		}
		if(b==6)
		{
			if(m==1)
			{
				arr[0][5]=1;
				cout<<"POSSIBLE"<<endl;
				disp(arr);	
			}
			else if(m==2)
			{
				arr[0][5]=1;
				arr[0][1]=1;
				arr[1][5]=1;
				cout<<"POSSIBLE"<<endl;
				disp(arr);	
			}
			else if(m==3)
			{
				arr[0][5]=1;
				arr[0][1]=1;
				arr[1][5]=1;
				arr[0][2]=1;
				arr[2][5]=1;
				cout<<"POSSIBLE"<<endl;
				disp(arr);	
			}
			else if(m==4)
			{
				arr[0][5]=1;
				arr[0][1]=1;
				arr[1][5]=1;
				arr[0][2]=1;
				arr[2][5]=1;
				arr[0][3]=1;
				arr[3][5]=1;
				cout<<"POSSIBLE"<<endl;
				disp(arr);	
			}
			else if(m==5)
			{
				arr[0][5]=1;
				arr[0][1]=1;
				arr[1][5]=1;
				arr[0][2]=1;
				arr[2][5]=1;
				arr[0][3]=1;
				arr[3][5]=1;
				arr[0][4]=1;
				arr[4][5]=1;
				cout<<"POSSIBLE"<<endl;
				disp(arr);	
			}
			else if(m==6)
			{
				arr[0][5]=1;
				arr[0][1]=1;
				arr[1][5]=1;
				arr[0][2]=1;
				arr[2][5]=1;
				arr[0][3]=1;
				arr[3][5]=1;
				arr[0][4]=1;
				arr[4][5]=1;
				arr[3][4]=1;
				cout<<"POSSIBLE"<<endl;
				disp(arr);	
			}
			else if(m==7)
			{
				arr[0][5]=1;
				arr[0][1]=1;
				arr[1][5]=1;
				arr[0][2]=1;
				arr[2][5]=1;
				arr[0][3]=1;
				arr[3][5]=1;
				arr[0][4]=1;
				arr[4][5]=1;
				arr[2][3]=1;
				arr[2][4]=1;
				cout<<"POSSIBLE"<<endl;
				disp(arr);	
			}
			else if(m==8)
			{
				arr[0][5]=1;
				arr[0][1]=1;
				arr[1][5]=1;
				arr[0][2]=1;
				arr[2][5]=1;
				arr[0][3]=1;
				arr[3][5]=1;
				arr[0][4]=1;
				arr[4][5]=1;
				arr[1][2]=1;
				arr[1][3]=1;
				arr[1][4]=1;
				cout<<"POSSIBLE"<<endl;
				disp(arr);	
			}
			else if(m==9)
			{
				arr[0][5]=1;
				arr[0][1]=1;
				arr[1][5]=1;
				arr[0][2]=1;
				arr[2][5]=1;
				arr[0][3]=1;
				arr[3][5]=1;
				arr[0][4]=1;
				arr[4][5]=1;
				arr[3][4]=1;
				arr[2][3]=1;
				arr[2][4]=1;
				cout<<"POSSIBLE"<<endl;
				disp(arr);	
			}
			else if(m==10)
			{
				arr[0][5]=1;
				arr[0][1]=1;
				arr[1][5]=1;
				arr[0][2]=1;
				arr[2][5]=1;
				arr[0][3]=1;
				arr[3][5]=1;
				arr[0][4]=1;
				arr[4][5]=1;
				arr[1][2]=1;
				arr[1][3]=1;
				arr[1][4]=1;
				arr[3][4]=1;
				cout<<"POSSIBLE"<<endl;
				disp(arr);	
			}
			else if(m==11)
			{
				arr[0][5]=1;
				arr[0][1]=1;
				arr[1][5]=1;
				arr[0][2]=1;
				arr[2][5]=1;
				arr[0][3]=1;
				arr[3][5]=1;
				arr[0][4]=1;
				arr[4][5]=1;
				arr[1][2]=1;
				arr[1][3]=1;
				arr[1][4]=1;
				arr[3][4]=1;
				arr[2][3]=1;
				arr[2][4]=1;
				cout<<"POSSIBLE"<<endl;
				disp(arr);		
			}
			else
			{
				cout<<"IMPOSSIBLE"<<endl;
			}
		}
		
		
	}
	return 0;
}

