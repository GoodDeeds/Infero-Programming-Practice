#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int d1;
    int m1;
    int y1;
    cin >> d1 >> m1 >> y1;
    int d2;
    int m2;
    int y2;
    cin >> d2 >> m2 >> y2;
    int diffd=d1-d2;
    int diffm=m1-m2;
    int diffy=y1-y2;
    if(diffy<0)
    {
    	cout<<"0"<<endl;
    }
    else if(diffy>0)
    {
    	cout<<"10000"<<endl;
    }
    else
    {
    	if(diffm<0)
    	{
    		cout<<"0"<<endl;
    	}
    	else if(diffm>0)
    	{
    		cout<<500*diffm<<endl;
    	}
    	else
    	{
    		if(diffd<=0)
    		{
    			cout<<"0"<<endl;
    		}
    		else if(diffd>0)
    		{
    			cout<<15*diffd;
    		}
    	}
    }
    return 0;
}

