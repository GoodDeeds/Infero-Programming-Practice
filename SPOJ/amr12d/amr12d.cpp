#include<iostream>
#include<algorithm>
#include<string>
#include<iterator>

using namespace std;
string revers(string s)
{
	string temp="";
	for(long long int i=s.size()-1;i>=0;i--)
	{
		temp+=s[i];
	}
	return temp;
}
int main()
{
	string inp;
	long long int t,i,j,k,l;
	cin>>t;
	for(i=0;i<t;i++)
	{
		cin>>inp;
		string arr[10][10],revarr[100],finarr[100];
		for(j=0;j<inp.size();j++)
		{
			
			for(k=j;k<inp.size();k++)
			{
				arr[j][k]="";
			}
		}
		for(j=0;j<inp.size();j++)
		{
			
			for(k=j;k<inp.size();k++)
			{
				if(k==j)
				{
					arr[j][k]=inp[j];
				}
				else
				{
					arr[j][k]=arr[j][k-1]+inp[k];
				}
				//cout<<arr[j][k]<<" ";
			}
		}
		l=0;
		
		for(j=0;j<inp.size();j++)
		{
			
			for(k=j;k<inp.size();k++)
			{
				revarr[l]=revers(arr[j][k]);
				finarr[l]=arr[j][k];
				
			//	cout<<"rev: "<<revarr[l]<<" fin: "<<finarr[l]<<endl;
				l++;
				//cout<<arr[j][k]<<" ";
			}
		}
		sort(finarr,finarr+((inp.size()*(inp.size()+1))/2));
		sort(revarr,revarr+((inp.size()*(inp.size()+1))/2));
		int flag=0;
		for(j=0;j<(inp.size()*(inp.size()+1))/2;j++)
		{
			
			if(finarr[j]!=revarr[j])
			{
				cout<<"NO"<<endl;
				flag=1;
				break;
			}
		}
		if(flag==0)
		{
			cout<<"YES"<<endl;
		}
		//cout<<endl;
	}
	return 0;
}
