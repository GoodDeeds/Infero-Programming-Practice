#include<bits/stdc++.h>
using namespace std;
class Dubs
{
	public:
		long long count(long long L,long long R)
		{
			long long temp1=L;
			long long temp2=R;
			int *larr=new int[13];
			int *rarr=new int[13];
			int i=12;
			long long res=0;
			while(temp1>0)
			{
				larr[i]=temp1%10;
				temp1/=10;
				i--;
			}
			i=12;
			while(temp2>0)
			{
				rarr[i]=temp2%10;
				temp2/=10;
				i--;
			}
			if(larr[11]<larr[12])
			{
				if((L+10*(larr[12]-larr[11]))>R)
				{
					return 0;
				}
				else
				{
					L=L+10*(larr[12]-larr[11]);
					res+=(larr[12]-larr[11]);
					larr[11]=larr[12];
					
				}
			}
			else if(larr[11]>larr[12])
			{
				if((L+(larr[11]-larr[12]))>R)
				{
					return 0;
				}
				else
				{
					L=(L+(larr[11]-larr[12]));
				//	cout<<"L: "<<L<<endl;
					larr[12]=larr[11];
					
				}
			}
			else
			{
				res++;
			}
			/*if(rarr[11]<rarr[12])
			{
				if((R-(rarr[12]-rarr[11]))<L)
				{
					return 0;
				}
				else
				{
					R=R-(rarr[12]-rarr[11]);
					rarr[11]=rarr[12];
					
				}
			}
			else if(rarr[11]>rarr[12])
			{
				if((R-10*(rarr[11]-rarr[12]))<L)
				{
					return 0;
				}
				else
				{
					R=(R-10*(rarr[11]-rarr[12]));
					
					cout<<"R: "<<R<<endl;
					rarr[12]=rarr[11];
					
				}
			}*/
			int powcount=0,flag=0;
		//	long long res=0;
			
			for(i=11;i>=0;i--)
			{
				if((rarr[i]-flag)>=larr[i])
				{
					
						res+=(pow(10,powcount)*(rarr[i]-flag-larr[i]));
					//	cout<<"ra: "<<rarr[i]<<" la: "<<larr[i]<<endl;
						flag=0;
					
				}
				else
				{
					
						res+=(pow(10,powcount)*(10+rarr[i]-larr[i]));
						flag=1;
					
				}
			//	cout<<"r: "<<res<<endl;
				powcount++;
			}
			return res;
			
		}
};
int main()
{
	long long l,r;
	cin>>l>>r;
	Dubs o1;
	long long res=o1.count(l,r);
	cout<<res<<endl;
	return 0;
}
