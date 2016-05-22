#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>


using namespace std;
int max(int a,int b,int c,int d)
{
	if(a>=b && a>=c && a>=d)
	{
		return a;
	}
	else if(b>=a && b>=c && b>=d)
	{
		return b;
	}
	else if(c>=a && c>=b && c>=d)
	{
		return c;
	}
	return d;
}

int main(){
    int arr[4],i,j,k,l;
    cin >> arr[0] >> arr[1] >> arr[2] >> arr[3];
    long long int count=0;
    sort(arr,arr+4);
    for(i=1;i<=arr[0];i++)
    {
    	for(j=i;j<=arr[1];j++)
    	{
    		for(k=j;k<=arr[2];k++)
    		{
    			for(l=k;l<=arr[3];l++)
    			{
    				if((i^j^k^l)!=0)
    				{
    					//cout<<i<<" "<<j<<" "<<k<<" "<<l<<endl;
    					count++;
    				}
    			}
    		}
    	}
    }
    cout<<count<<endl;
    return 0;
}

