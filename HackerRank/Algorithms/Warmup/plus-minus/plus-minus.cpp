#include<iostream>
#include<cmath>
#include<vector>
#include<iomanip>
using namespace std;
int main()
{
	long long int n,count=0,cp=0,cm=0,cz=0,i,j,k;
	long double fp,fm,fz;
	cin>>n;
	vector<long long int> a(n);
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		if(a[i]>0)
			cp++;
		else if(a[i]<0)
			cm++;
		else
			cz++;
		
	}
	count=n;
	fp=((long double)(cp))/count;
	fm=((long double)(cm))/count;
	fz=((long double)(cz))/count;
	cout<<fixed;
	cout<<setprecision(6)<<fp<<endl<<fm<<endl<<fz<<endl;
	return 0;
	
}
