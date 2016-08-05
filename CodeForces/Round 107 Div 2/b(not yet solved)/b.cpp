#include<bits/stdc++.h>
using namespace std;
class book
{
	public:
	string name;
	long long num,tcount,pcount,gcount;
	book()
	{
		tcount=pcount=gcount=0;
	}
};
bool sortp(book a, book b)
{
	if(a.pcount>b.pcount)
	{
		return true;
	}
	return false;
}
bool sortt(book a, book b)
{
	if(a.tcount>b.tcount)
	{
		return true;
	}
	return false;
}
bool sortg(book a, book b)
{
	if(a.gcount>b.gcount)
	{
		return true;
	}
	return false;
}
int main()
{
	long long n,i,j,k;
	string phnum;
	book obj;
	cin>>n;
	vector<book> phonebook;
	phonebook.clear();
	for(i=0;i<n;i++)
	{
		cin>>obj.num;
		cin>>obj.name;
		obj.tcount=obj.pcount=obj.gcount=0;
		for(j=0;j<obj.num;j++)
		{
			
			cin>>phnum;
			if(phnum[0]==phnum[1] && phnum[1]==phnum[3] && phnum[3]==phnum[4] && phnum[4]==phnum[6] && phnum[6]==phnum[7])
			{
				obj.tcount++;
			}
			else if(phnum[0]>phnum[1] && phnum[1]>phnum[3] && phnum[3]>phnum[4] && phnum[4]>phnum[6] && phnum[6]>phnum[7])
			{
				obj.pcount++;
			}
			else
			{
				obj.gcount++;
			}
		}
		phonebook.push_back(obj);
	}
	sort(phonebook.begin(),phonebook.end(),sortt);
	cout<<"If you want to call a taxi, you should call: ";
	cout<<phonebook[0].name;
	cout<<endl<<phonebook[0].tcount<<endl;
	for(i=1;i<n;i++)
	{
		if(phonebook[i].tcount!=phonebook[0].tcount)
		{
			break;
		}
		cout<<", "<<phonebook[i].name;
	}
	cout<<"."<<endl;
	sort(phonebook.begin(),phonebook.end(),sortp);
	cout<<"If you want to order a pizza, you should call: ";
	cout<<phonebook[0].name;
	cout<<endl<<phonebook[0].tcount<<endl;
	for(i=1;i<n;i++)
	{
		if(phonebook[i].pcount!=phonebook[0].pcount)
		{
			break;
		}
		cout<<", "<<phonebook[i].name;
	}
	cout<<"."<<endl;
	sort(phonebook.begin(),phonebook.end(),sortg);
	cout<<"If you want to go to a cafe with a wonderful girl, you should call: ";
	cout<<phonebook[0].name;
	cout<<endl<<phonebook[0].tcount<<endl;
	for(i=1;i<n;i++)
	{
		if(phonebook[i].gcount!=phonebook[0].gcount)
		{
			break;
		}
		cout<<", "<<phonebook[i].name;
	}
	cout<<"."<<endl;	
	return 0;
}
