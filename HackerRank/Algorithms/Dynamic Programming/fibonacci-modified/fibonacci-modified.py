lis=raw_input()
li=lis.split(' ')
t1=int(li[0])
t2=int(li[1])
n=int(li[2])
res=0
l=[t1,t2]
for i in xrange(2,n):
	l.append(l[i-2]+l[i-1]*l[i-1])
print l[n-1]
