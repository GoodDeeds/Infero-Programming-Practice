#include<iostream>
#include<cmath>
using namespace std;
struct node
{
	long long int data;
	struct node *next;
}*start=NULL,*p,*tail=NULL;
typedef struct node nod;
int main()
{
	long long int n,i,j,size=0;
	int arr[1000],flag;
	cin>>n;
	for(i=2;i<n;i++)
	{
		flag=0;
		if((i%2==0 || i%3==0 || i%5==0 || i%7==0 || i%11==0 || i%13==0 ||i%17==0 ||i%19==0) && i!=2 && i!=3 && i!=5 && i!=7 && i!=11 && i!=13 && i!=17 && i!=19)
				{
					continue;
				}
		for(j=2;j<i;j++)
		{
			if(i%j==0)
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
		{
			p=new nod;
			p->data=i;
			p->next=NULL;
			if(start==NULL)
			{
				start=tail=p;
			}
			else
			{
				tail->next=p;
				tail=p;
			}		
		}
	}
	return 0;	
}
