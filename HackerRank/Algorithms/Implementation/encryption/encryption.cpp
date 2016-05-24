#include<iostream>
#include<string>
#include<vector>
#include<cmath>
using namespace std;
int main()
{
	string inp;
	long long int i,j,k,l,fsqrtl,csqrtl,numofr,numofc;
	cin>>inp;
	l=inp.size();
	fsqrtl=floor(sqrt(l));
	csqrtl=ceil(sqrt(l));
	for(numofr=fsqrtl;numofr<=csqrtl;numofr++)
	{
		for(numofc=numofr;numofc<=csqrtl;numofc++)
		{
			if((numofc*numofr)>=l)
			{
				break;
			}
		}
	}
	for(i=0;i<numofc;i++)
	{
		for(j=0;j<numofr;j++)
		{
			if((i+(numofc*j))<inp.size())
			cout<<inp[i+numofc*j];
		}
		cout<<" ";
	}
	cout<<endl;
	return 0;
	
	
}
