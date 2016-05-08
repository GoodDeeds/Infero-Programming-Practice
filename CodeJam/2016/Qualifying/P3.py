from math import *
def isprime(val):
	for i in range(2,sqrt(val)+1,1):
		if(val%i==0):
			return 0
	return 1

def conv_bin(val,arr,size):

	for i in range(size-1,-1,-1):
		arr[i]=val%2
		val/=2
	

def conv_base(arr, size, base):

	sum=0;
	for i in range(size-1,-1,-1):
	
		sum+=(base**(size-i-1))*arr[i]
	
	return sum

def: find_div(val):

	for i in range(2,sqrt(val),1):
	
		if(val%i==0):
			return i
	

t,n,j,counter=0;
hold[9];
cin>>t>>j>>n;
	arr=new long[j];
	cout<<"Case #1:"<<endl;
	for(long k=pow(2,j-1)+1;k<=pow(2,j)-1 && counter<n;k+=2)
	{
		long flag=0;
		if(isprime(k)==1)
		{
			continue;
		}
		conv_bin(k,arr,j);
 		for(long c=2;c<=10;c++)
		{
			long sum=conv_base(arr,j,c);
			if(isprime(sum)==1)
			{
				flag=1;
				break;
			}
			hold[c-2]=find_div(sum);
		}
		if(flag==1)
		{
			continue;
		}		
		for(long i=0;i<j;i++)
		{
			cout<<arr[i];
		}		
		cout<<" ";
		for(long i=0;i<9;i++)
		{
			cout<<hold[i]<<" ";
		}		
		cout<<endl;
		counter++; 
	}
    		
	return 0;
}
