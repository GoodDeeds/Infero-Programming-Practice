//Solution 1 - in comments, giving wrong answer from judge
//Solution 2 - outside comments, giving time limit exceeded
#include<iostream>
#include<vector>
using namespace std;
int main()
{
	long long int n,k,i,j,l,max;
	cin>>n;
	vector<long long int> arr(n);
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cin>>k;
	for(i=0;i<n-k+1;i++)
	{
		max=0;
		for(j=i;j<i+k;j++)
		{
			if(max<arr[j])
			{
				max=arr[j];
			}
		}
		cout<<max<<" ";
		
	}
	/*for(i=0;i<n-k+1;)
	{
		max=0;
		for(j=i;j<i+k;j++)
		{
			if(max<arr[j])
			{
				max=arr[j];
			}
		}
		for(j=i+k-1;j>=i;j--)
		{
			if(arr[j]==max)
			{
				for(l=0;l<min(j-i+1,n-j);l++)
				{
					if(arr[j+l]>max)
					{
						max=arr[j+l];
					}
					//cout<<"i: "<<i<<" j: "<<j<<" l: "<<l<<endl;
					cout<<max<<" ";
				}
				i+=(j-i+1);
				
				break;
			}
		}
	}*/
	return 0;	
}
