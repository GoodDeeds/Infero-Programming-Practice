from math import *
n=(long)(raw_input())

lis=raw_input()
li=lis.split()
for i in xrange(0,n):
	li[i]=(long)(li[i])
q=(long)(raw_input())
for i in xrange(0,q):
	val=raw_input()
	lisval=val.split()
	for j in xrange(0,len(lisval)):
		lisval[j]=(long)(lisval[j])
	
	if(lisval[0]==1):
		
		li[lisval[1]-1]=lisval[2]
	elif(lisval[0]==2):
		
		res=1
		for j in xrange(0,n,lisval[1]):
			res*=li[j]
		temp=log10(res)
		frac=temp-floor(temp)
		ans1=10**(frac+1e-10)
		ans=(int)(ans1)
		res%=(1000000007)
		print "%d"%(ans),
		
		print "%d"%(res)
		

