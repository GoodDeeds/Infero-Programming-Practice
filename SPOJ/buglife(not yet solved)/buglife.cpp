#include<iostream>
#include<vector>
using namespace std;
int main()
{
	long long int t,nb,ni,*li1,*li2,i,j,k,l,arr1[2000],arr2[2000];
	cin>>t;
	for(i=0;i<t;i++)
	{
		int flag=0;
		for(j=0;j<2000;j++)
		{
			arr1[j]=arr2[j]=0;
		}
		cin>>nb>>ni;
		vector<long long int> li1(ni);
		vector<long long int> li2(ni);
		for(j=0;j<ni;j++)
		{
			cin>>li1[j]>>li2[j];
			/*if(arr1[li1[j]-1]==0 && arr2[li1[j]-1]==0)
			{
				if(arr1[li2[j]-1]==1)
				{
					arr2[li1[j]-1]=1;
				}
				else if(arr2[li2[j]-1]==1)
				{
					arr1[li1[j]-1]=1;
				}
				else
				{
					arr1[li1[j]-1]=1;
					arr2[li2[j]-1]=1;
				}
			}
			else if(arr1[li2[j]-1]==0 && arr2[li2[j]-1]==0)
			{
				if(arr1[li1[j]-1]==1)
				{
					arr2[li2[j]-1]=1;
				}
				else if(arr2[li1[j]-1]==1)
				{
					arr1[li2[j]-1]=1;
				}
				else
				{
					arr1[li1[j]-1]=1;
					arr2[li2[j]-1]=1;
				}
			}
			else if((arr1[li1[j]-1]==1 && arr2[li2[j]-1]==1) || (arr1[li2[j]-1]==1 && arr2[li1[j]-1]==1))
			{}
			else if((arr1[li1[j]-1]==1 && arr1[li2[j]-1]==1) || (arr2[li2[j]-1]==1 && arr2[li1[j]-1]==1))
			{
				flag=1;
				
			}*/
		}
		/*if(flag==0)
		{
			cout<<"Scenario #"<<i+1<<":"<<endl<<"No suspicious bugs found!"<<endl;
		}
		else
		{
			cout<<"Scenario #"<<i+1<<":"<<endl<<"Suspicious bugs found!"<<endl;
		}*/
	}
	return 0;
}
