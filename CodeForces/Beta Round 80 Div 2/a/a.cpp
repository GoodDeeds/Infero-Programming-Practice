#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	int arr[]={0,4,4,4,4,4,4,4,4,4,15,4,0,0,0,0};
	cin>>n;
	n-=10;
	if(n<0)
	{
		cout<<"0"<<endl;
		return 0;
	}
	cout<<arr[n]<<endl;
	return 0;
}
