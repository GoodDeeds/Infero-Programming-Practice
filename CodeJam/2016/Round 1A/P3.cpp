#include<iostream>
#include<malloc.h>
using namespace std;
struct node
{
	int val;
	struct node* next;
} *start,*tail;
typedef struct node nod;
int main()
{
	start=NULL;
	tail=NULL;
	int t;
	int n;
	int *arr;
	cin>>t;
	int length=0;
	int ctr=0;
	int maxl=0;
	for(int i=0;i<t;i++)
	{
		cin>>n;
		arr=(int*)malloc(sizeof(int)*n);
		for(int j=0;j<n;j++)
		{
			cin>>arr[j];
		}
		maxl=0;
		for(int k=0;k<n;k++)
		{
			int j;
			
			ctr=0;
			length=0;
			nod *q=new nod;
			q->val=k+1;
			q->next=NULL;
			start=tail=q;
			length++;
			j=k;
			while(ctr<=n)
			{
				
				nod *q= new nod;
				q->val=arr[j];
				
				q->next=NULL;
				tail->next=q;
				tail=q;
				j=arr[j]-1;
				length++;
				ctr++;
				if(arr[j]==(k+1))
				{
					if(maxl<length)
					{
						maxl=length;
					}
					cout<<"J: "<<j<<" k: "<<k<<" "<<length<<" "<<maxl<<endl;
					break;
				}
					
		
			}
			
		}	
		cout<<"Case #"<<i+1<<": "<<maxl<<endl;	
	}
	return 0;
}
