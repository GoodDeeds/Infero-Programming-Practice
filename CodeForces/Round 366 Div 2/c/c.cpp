	#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n,q,i,j,k,totnote=0,type,val,maxt=-1,currt;
	cin>>n>>q;
	long long *note=new long long[n];
	list< pair<long long,int> > lis;
	list< pair<long long,int> >::iterator it;
//	list<int>::iterator markit;
	lis.clear();
	for(i=0;i<n;i++)
	{
		note[i]=0;
	}
	for(i=0;i<q;i++)
	{
		cin>>type>>val;
		if(type==1)
		{
			note[val-1]++;
			
			lis.push_back(make_pair(val,1));
			totnote++;
			cout<<totnote<<endl;
		}
		else if(type==2)
		{
			totnote-=note[val-1];
			note[val-1]=0;
			cout<<totnote<<endl;
			it=find_if(lis.begin(),lis.end(),[val](pair<long long,int> const &valu) { return valu.first==val;});
			while(it!=lis.end())
			{
				(*it).second=0;
			//	cout<<"c0: "<<(*it).first<<endl;
				advance(it,1);
				if(it==lis.end())
				{
					break;
				}
				it=find_if(it,lis.end(),[val](pair<long long,int> const &valu){return valu.first==val;});
			//	cout<<"it: "<<(*it).first<<endl;
			}
		}
		else if(type==3)
		{
			
			/*if(val>maxt && maxt!=-1)
			{
				currt=val-maxt;
				it=lis.begin();
				advance(it,maxt);
				maxt=val;
				for(j=0;j<currt;j++)
				{
					if((*it).second==1)
					{
						note[(*it).first-1]--;
						totnote--;
					}
				/*	lis.erase(it);
					it=lis.begin();*/
				/*}
				
				
			}
			else
			{
				currt=val;
				maxt=val;
				it=lis.begin();
				for(j=0;j<currt;j++)
				{
					if((*it).second==1)
					{
						note[(*it).first-1]--;
						totnote--;
					}
				/*	lis.erase(it);
					it=lis.begin();*/
				/*}
			}*/
			it=lis.begin();
			for(j=0;j<val;j++)
			{
			//	cout<<"A "<<(*it).second<<endl;
				if((*it).second==1)
				{
				//	cout<<"B"<<endl;
					note[(*it).first-1]--;
					totnote--;
				}
				++it;
				
			}
			cout<<totnote<<endl;
			
		}
		/*cout<<"L :"<<endl;
		for(it=lis.begin();it!=lis.end();++it)
		{
			cout<<(*it).first<<" "<<(*it).second<<endl;
		}
		cout<<endl;*/
	}
	return 0;
}
