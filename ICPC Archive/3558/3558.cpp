#include<bits/stdc++.h>
using namespace std;
long long convbin(long long *arr, long long size, long long num)
{
	long long i,val,count=0;
	for(i=0;i<size;i++)
	{
		arr[i]=0;
		
	}
	i=size-1;
	while(num>0)
	{
		val=num%2;
		if(val==1)
		{
			count++;
		}
		arr[i]=val;
		num/=2;
		i--;
	}
	return count;
}
int main()
{
	long long t,i,j,numofone,val1,val2,n;
	long long *arr;
	string inp,str1,str2;
	vector< pair<long long, long long> >res;
	long long max_val=-1;
	res.clear();
	cin>>t;
	while(t--)
	{
		cin>>inp;
		n=inp.size();
		res.clear();
		max_val=-1;
		arr=new long long[n];
		for(i=0;i<pow(2,n-1);i++)
		{
			str1="";
			str2="";
			numofone=convbin(arr,n,i);
			if(numofone!=(n/2))
			{
				continue;
			}
			for(j=0;j<n;j++)
			{
				if(arr[j]==0)
				{
					str1+=inp[j];
				}
				else
				{
					str2+=inp[j];
				}
			}
			sort(str1.begin(),str1.end());
			reverse(str1.begin(),str1.end());
			sort(str2.begin(),str2.end());
			reverse(str2.begin(),str2.end());
			val1=stoi(str1);
			val2=stoi(str2);
			if(val1*val2>max_val)
			{
				max_val=val1*val2;
				res.clear();
				res.push_back(make_pair(val1,val2));
			}
			else if(val1*val2==max_val)
			{
				res.push_back(make_pair(val1,val2));
			}
			
		}
		sort(res.begin(),res.end());
		i=0;
	//	cout<<"rs: "<<res.size()<<endl;
		while(i<res.size())
		{
		//	cout<<"si: "<<res.size()<<endl;
			cout<<res[i].first<<" * "<<res[i].second<<" = "<<max_val<<endl;
			if(i<res.size()-1 && res[i].first==res[i+1].first && res[i].second==res[i+1].second)
			{
			//	cout<<"A"<<endl;
				while(i<res.size()-1 && res[i].first==res[i+1].first && res[i].second==res[i+1].second)
				{
				//	cout<<"re: "<<res[i+1].first<<" "<<res[i+1].second<<endl;
					res.erase(res.begin()+i+1);
				//	cout<<"B"<<endl;
					
				}
				i++;
			}
			else
			{
				i++;
			}
			
			
		}
		
	}
	return 0;
}
