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


int main(){
    int a[3];
   
    cin >> a[0] >> a[1] >> a[2];
    int b[3];
    
    cin >> b[0] >> b[1] >> b[2];
    int ali=0,bob=0;
    for(int i=0;i<3;i++)
    {
    	if(a[i]>b[i])
    	{
    		ali++;
    	}
    	else if(a[i]<b[i])
    	{
    		bob++;
    	}
    }
    cout<<ali<<" "<<bob<<endl;
    return 0;
}

