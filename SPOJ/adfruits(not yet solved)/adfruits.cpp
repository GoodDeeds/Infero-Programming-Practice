//giving wrong answer why I don't know yet
#include<iostream>
#include<string>
#include<vector>
using namespace std;
string lcs(int **arr,int x,int y,string s1,string s2)
{
	for(int i=0;i<=x;i++)
	{
		for(int j=0;j<=y;j++)
		{
			if(i==0 || j==0)
			{
				arr[i][j]=0;
			}
			else if(s1[i-1]==s2[j-1])
			{
				arr[i][j]=arr[i-1][j-1]+1;
			}
			else
			{
				arr[i][j]=max(arr[i-1][j],arr[i][j-1]);
			}
		}
	}
	int i=x,j=y;
	int index=arr[x][y];
	string res="";
	for(int k=0;k<index;k++)
	{
		res+=" ";
	}
	
	while(i>0 && j>0)
	{
		if(s1[i-1]==s2[j-1])
		{
			res[index-1]=s1[i-1];
			i--;
			j--;
			index--;
		}
		else if(arr[i-1][j]>arr[i][j-1])
		{
			i--;
		}
		else
		{
			j--;
		}
	}
	return res;
}
int main()
{
	string inp1,inp2;
	while(cin>>inp1>>inp2)
	{
		int x=inp1.size();
		int y=inp2.size();	
		int **arr=new int*[x+1];
		for(int i=0;i<=x;i++)
		{
			arr[i]=new int[y+1];
		}
		string res=lcs(arr,x,y,inp1,inp2);
		int i,j,k,l;
		j=0;
		k=0;
		string temp,ans="";
		for(i=0;i<inp1.size() && j<res.size();)
		{
			while(i<inp1.size() && inp1[i]!=res[j])
			{
				temp+=inp1[i];
				i++;
				
			}
			//cout<<"t: "<<temp<<endl;
			while(i<inp1.size() && inp2[k]!=res[j])
			{
				k++;
			}
			if(i<inp1.size())
			{
				inp2=inp2.substr(0,k)+temp+inp2.substr(k);
				j++;
				k+=temp.size();
				temp="";
				i++;
			}	
			
		}
		//cout<<"i: "<<i<<" j: "<<j<<" k: "<<k<<endl;
		inp2=inp2.substr(0,k+1)+inp1.substr(i)+inp2.substr(k+1);
		cout<<inp2<<endl;
		
	}
	return 0;
}
