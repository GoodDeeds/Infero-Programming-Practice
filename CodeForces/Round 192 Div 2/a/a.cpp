#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double
#define pb push_back
#define F first
#define S second
#define flt(i,low,high) for(long long i=low;i<high;i++)
#define fgt(i,low,high) for(long long i=high;i>low;i--)
#define fle(i,low,high) for(long long i=low;i<=high;i++)
#define fge(i,low,high) for(long long i=low;i>=high;i--)
#define sci(n) scanf("%d",&n)
#define scll(n) scanf("%l64d",&n)
#define scl(n) scanf("%ld",&n)
#define scf(n) scanf("%f",&n)
#define scd(n) scanf("%lf",&n)
#define scld(n) scanf("%llf", &n)
#define scc(n) scanf("%c",&n)
#define scs(n) scanf("%s",n)
#define mp make_pair
#define sortf(arr) sort(arr.begin(),arr.end())
#define vecti vector<int>
#define vectl vector<long>
#define vectll vector<long long>
#define vectf vector<float>
#define vectd vector<double>
#define vectld vector<long double>
#define vectc vector<char>
#define vects vector<string>
#define vect2i vector< vector<int> >
#define vect2l vector< vector<long> >
#define vect2ll vector< vector<long long> >
#define vect2f vector< vector<float> >
#define vect2d vector< vector<double> >
#define vect2ld vector< vector<long double> >
#define vect2c vector< vector<char> >
#define vect2s vector< vector<string> >

void printarr(long long *arr, long long n)
{
	flt(i,0,n)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

int main()
{
	int r,c;
	char val;
	int *cols=new int[c];
	int *rows=new int[r];
	vectc temp;
	flt(i,0,r)
	{
		rows[i]=0;
	}
	flt(i,0,c)
	{
		cols[i]=0;
	}	
	sci(r);
	sci(c);
	vect2c arr;
//	cout<<"r: "<<r<<" c: "<<c<<endl;
	
	flt(i,0,r)
	{
		temp.clear();
		scc(val);
		flt(j,0,c)
		{
			scc(val);
			temp.pb(val);
			if(val=='S')
			{
			//	cout<<"i: "<<i<<" j: "<<j<<" v: "<<val<<endl;
				rows[i]=1;
				cols[j]=1;
			}
		}
		arr.pb(temp);
	}
	ll count=0;
	flt(i,0,r)
	{
		flt(j,0,c)
		{
			if(rows[i]!=1 || cols[j]!=1)
			{
				count++;
			}
		}
	}
	cout<<count<<endl;
	return 0;
}
