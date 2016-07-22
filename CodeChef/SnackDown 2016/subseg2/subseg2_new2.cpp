#include<iostream>
#include<cmath>
using namespace std;
void merge(int *arr,int *secarr,int low,int mid,int high)
{
	int firstp,mergep,secp,k;
	int *b=new int[high-low+1];
	int *b2=new int[high-low+1];
	firstp=low;
	mergep=0;
	secp=mid+1;
 	while((firstp<=mid) && (secp<=high))
 	{	
  		if(arr[firstp]<arr[secp])
  		{	
   			b[mergep]=arr[firstp];
   			b2[mergep]=secarr[firstp];
   			firstp++;
  		}
  		else if(arr[firstp]>arr[secp])
  		{	
  			b[mergep]=arr[secp];
  			b2[mergep]=secarr[secp];
   			secp++;
 		}
 		else
 		{
 			if(secarr[firstp]<=secarr[secp])
 			{
 				b[mergep]=arr[firstp];
   				b2[mergep]=secarr[firstp];
   				firstp++;
 			}
 			else
 			{
 				b[mergep]=arr[secp];
  				b2[mergep]=secarr[secp];
   				secp++;
 			}
 		}
  		mergep++;
 	}
 	while(firstp<=mid)
 	{
 		b[mergep]=arr[firstp];
 		b2[mergep]=secarr[firstp];
 		mergep++;
 		firstp++;
 	}
	while(secp<=high)
	{
		b[mergep]=arr[secp];
		b2[mergep]=secarr[secp];
		mergep++;
		secp++;
	}
 	for(k=low;k<=high;k++) 
 	{
 		arr[k]=b[k];
 		secarr[k]=b2[k];
 	}
 	
}
void mergesort(int *arr,int *secarr,int low,int high)
{
	int mid;
 	if(low<high)
 	{
  		mid=(low+high)/2;
  		mergesort(arr,secarr,low,mid);
  		mergesort(arr,secarr,mid+1,high);
  		merge(arr,secarr,low,mid,high);
 	}
}

int main()
{
	int n,q,i,j,k,l,curt=1;
	cin>>n>>q;
	int *cs=new int[n]; 
	int *ce=new int[n];	

	int qs,qe;
	for(i=0;i<n;i++)
	{
		cin>>cs[i]>>ce[i];
	//	stat[i]=0;
	}
	mergesort(ce,cs,0,n-1);
	for(i=0;i<q;i++)
	{
		cin>>qs>>qe;
		curt=qs;
		/*for(j=0;j<n;j++)
		{
			stat[j]=0;
		}*/
		int minend=1000001;
		int numc=0;
		int counter=0;
		int flag=0;
		/*do{
			minend=1000001;
			flag=0;
			for(j=0;j<n;j++)
			{
				if(stat[j]==0 &&  cs[j]>=curt && ce[j]<minend)
				{
					minend=ce[j]; 
					counter=j;	
					flag=1;
				}
			}
			if(minend<=qe[i])
			{
				numc++;
				curt=minend;
				stat[counter]=1;
			}	
		}while(minend<=qe[i] && flag==1);*/
		int point=0;
		while(point<n && ce[point]<=qe)
		{
			while(point<n && ce[point]<=qe && cs[point]<curt)
			{
				point++;
			}
			if(point<n && ce[point]<=qe)
			{
				curt=ce[point];
				numc++;
				point++;
			}
		}
	
		cout<<numc<<endl;
	}
	return 0;
	
	
}
