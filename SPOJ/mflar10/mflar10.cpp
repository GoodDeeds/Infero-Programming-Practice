#include<iostream>
#include<string>
using namespace std;
int main()
{
	string inp;
	int j;
	getline(cin,inp);
	while(inp!="*")
	{
		//if(inp[0]==' ')
		//{
			//j=0;
			//while(inp[j]==' ')
			//{
				//j++;
			//}
		//}
		//cout<<"inp: "<<inp<<endl;
		char ch=inp[0];
		//cout<<"ch: "<<ch<<" j: "<<j<<endl;
		if(ch>=65 && ch<=90)
		{
			int flag=0;
			for(j=1;j<inp.size();j++)
			{
				if(inp[j]==' ')
				{
					if(ch!=inp[j+1] && ch!=inp[j+1]-32)
					{
						flag=1;
						break;
					}
				}
			}
			if(flag==0)
			{
				cout<<"Y"<<endl;
			}
			else
			{
				cout<<"N"<<endl;
			}
		}
		else if(ch>=97 && ch<=122)
		{
			int flag=0;
			for(j=1;j<inp.size();j++)
			{
				if(inp[j]==' ')
				{
					if(ch!=inp[j+1] && ch!=inp[j+1]+32)
					{
						flag=1;
						break;
					}
				}
			}
			if(flag==0)
			{
				cout<<"Y"<<endl;
			}
			else
			{
				cout<<"N"<<endl;
			}
		}
		getline(cin,inp);
	}
	return 0;
}
