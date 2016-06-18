#include<bits/stdc++.h>
#define MOD 1000000007
#define num1 1234567
#define num2 123456
#define num3 1234
using namespace std;
int main()
{
	long long n,c=0,i,j,k,val,lisc=0;
	vector<long long> arr;
	string *comm=new string[1000001];
	long long *vals=new long long[1000001];
	arr.empty();
	string inp;
	cin>>n;
	while(n--)
	{
		cin>>inp;
		
		if(inp=="insert")
		{
			cin>>val;
			
			i=0;
			for(i=0;i<c;i++)
			{
				if(arr[i]>=val)
				{
					break;
				}
			}
			arr.insert(arr.begin()+i,val);
			c++;
			//cout<<inp<<" "<<val<<endl;
		}
		else if(inp=="removeMin")
		{
			
			if(c==0)
			{
				comm[lisc]="insert";
				vals[lisc]=1;
				lisc++;
				//cout<<"insert 1"<<endl;
			}
			else
			{
				arr.erase(arr.begin());
				c--;
			}
			//cout<<inp<<endl;
		}
		else if(inp=="getMin")
		{
			cin>>val;
			
			if(c==0)
			{
				//cout<<"insert "<<val<<endl;
				comm[lisc]="insert";
				vals[lisc]=val;
				lisc++;
				arr.insert(arr.begin(),val);
				c++;
			}
			else
			{
				while(c>0 && arr[0]<val)
				{
					arr.erase(arr.begin());
					c--;
				//	cout<<"removeMin"<<endl;
					comm[lisc]="removeMin";
					lisc++;
				}
				if(c!=0 && arr[0]==val)
				{
					
				}
				else
				{
					arr.insert(arr.begin(),val);
					c++;
					comm[lisc]="insert";
					vals[lisc]=val;
					lisc++;
				}
				
				//cout<<"insert "<<val<<endl;
				
				
			}
			//cout<<inp<<" "<<val<<endl;
		}
		comm[lisc]=inp;
		if(inp!="removeMin")
		{
			vals[lisc]=val;
		}
		lisc++;
		
	}
	cout<<lisc<<endl;
	for(j=0;j<lisc;j++)
	{
		cout<<comm[j]<<" ";
		if(comm[j]!="removeMin")
		{
			cout<<vals[j]<<endl;
		}
		else
		{
			cout<<endl;
		}
	}
	return 0;
}
