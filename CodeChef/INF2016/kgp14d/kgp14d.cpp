#include<bits/stdc++.h>
using namespace std;
struct data
{
	int dur,train,diff;
};
bool sortf(data a, data b)
{
	if(a.dur<b.dur)
	{
		return true;
	}
	else if(a.dur==b.dur)
	{
		return (a.train>b.train);
	}
	return false;
}
int main()
{
	int n,k,i,j,val;
	
	cin>>n;
	for(j=0;j<n;j++)
	{
		cin>>k;
		data obj;
		vector<data> arr;
		int *du=new int[k];
		int *tr=new int[k];
		int *dif=new int[k];
		for(i=0;i<k;i++)
		{
			cin>>du[i];
			
		}
		for(i=0;i<k;i++)
		{
			cin>>tr[i];
			dif[i]=tr[i]-du[i];
			obj.dur=du[i];
			obj.train=tr[i];
			obj.diff=dif[i];
			arr.push_back(obj);
		}
		/*for(i=0;i<k;i++)
		{
			cout<<arr[i].dur<<" ";
		}
		cout<<endl;*/
		sort(arr.begin(),arr.end(),sortf);
		/*for(i=0;i<k;i++)
		{
			cout<<arr[i].dur<<" "<<arr[i].train<<" "<<arr[i].diff<<endl;
		}
		cout<<endl;*/
		int count=0,offset=0;
		for(i=0;i<arr.size();)
		{
			if(arr[i].train==-1)
			{
				arr.erase(arr.begin()+i);
				continue;
			}
			else
			{
				if((arr[i].train-offset-arr[i].dur)>=30)
				{
					offset+=arr[i].dur;
					i++;
				}	
				else
				{
		//			cout<<"i: "<<i<<" "<<arr[i].train<<endl;
					count++;
					i++;
				}
			}
		}
		cout<<"Case "<<j+1<<": "<<count<<endl;
	}
	return 0;
}
