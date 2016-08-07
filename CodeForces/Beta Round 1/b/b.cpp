#include<bits/stdc++.h>
using namespace std;
long long power(long long base, long long exp){
    long long ans = 1;
    while(exp>0){
        if(exp&1){
            ans *= base;
        }
        base *= base;
        exp>>=1;
    }
    return ans;
}
int main()
{
	long long n,i,j,k,rown,coln,val;
	string inp,colres;
	cin>>n;
	char addc;
	while(n--)
	{
		cin>>inp;
		
		if(inp[0]=='R' && inp[1]<65 && inp.find('C')!=-1)
		{
			for(i=1;inp[i]!='C';i++);
			rown=stoi(inp.substr(1,i-1));
			coln=stoi(inp.substr(i+1));
			colres="";
			long long flag=0;
			while(coln>0)
			{
				flag=0;
				val=coln%26;
				if(val==0)
				{
					val=26;
					flag=1;
				}
				addc=(val-1)+'A';
				colres=addc+colres;
				coln/=26;
				if(flag==1)
				{
					coln--;
				}
			}
			cout<<colres<<rown<<endl;
		}
		else
		{
			for(i=0;inp[i]>=65;i++);
			colres=inp.substr(0,i);
			rown=stoi(inp.substr(i));
			coln=0;
			for(i=colres.size()-1;i>=0;i--)
			{
				coln+=((power(26,colres.size()-1-i))*(colres[i]-64));
			}
			cout<<"R"<<rown<<"C"<<coln<<endl;
		}
	}
	return 0;
}
