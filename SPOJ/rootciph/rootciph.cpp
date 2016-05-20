#include<iostream>
#include<stdio.h>
#include<cmath>
using namespace std;
int main()
{
	long long int t,a,b,c,i,j,k,l;
	scanf("%lld",&t);
	for(i=0;i<t;i++)
	{
		scanf("%lld%lld%lld",&a,&b,&c);
		j=pow(a,2)-2*b;
		printf("%lld\n",j);
	}
	return 0;
}
