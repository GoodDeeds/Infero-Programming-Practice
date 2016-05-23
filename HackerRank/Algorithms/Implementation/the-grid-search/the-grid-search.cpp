#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
using namespace std;
int main()
{
	long long int t,R,C,r,c,i,j,k,l;
	cin>>t;
	for(i=0;i<t;i++)
	{
		cin>>R>>C;
		vector< vector<char> > arr(R, vector<char>(C));
		
		for(j=0;j<R;j++)
		{
			for(k=0;k<C;k++)
			{
				cin>>arr[j][k];
			}
		}
		cin>>r>>c;
		vector< vector<char> > subarr(R, vector<char>(C));
		
		for(j=0;j<r;j++)
		{
			for(k=0;k<c;k++)
			{
				cin>>subarr[j][k];
			}
		}
		int resflag=0;
		
	//	cout<<"a: "<<arr[0][0]<<endl;
		//cout<<"s: "<<subarr[0][0]<<endl;
		for(j=0;j<R-r+1;j++)
		{
			for(k=0;k<C-c+1;k++)
			{
				if(arr[j][k]==subarr[0][0])
				{
				//	cout<<"j: "<<j<<" k: "<<k<<endl;
					int flag=0;
					long long int x=0,y=0;
					for(x=0;x<r;x++)
					{
						for(y=0;y<c;y++)
						{
							if(subarr[x][y]!=arr[j+x][k+y])
							{
								flag=1;
								break;
							}
						}
						if(flag==1)
						{
							break;
						}
					}
					if(flag==0)
					{
						resflag=1;
						break;
					}
				}
			}
			if(resflag==1)
			{
				break;
			}
		}
		
		if(resflag==0)
		{
			cout<<"NO"<<endl;
		}
		else
		{
			cout<<"YES"<<endl;
		}
	}	
	
	return 0;
}
