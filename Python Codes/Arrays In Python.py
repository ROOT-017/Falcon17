from array import *

b=array('d',[1,2,4,8,.5,6,5])
print("b=",b)
b.append(2.8)
print("b=",b)
l=len(b)
print("lenth",l)
print("Pop=",b.pop(-2))
print("b=",b)
l=len(b)
print("lenth",l)

c=array('d',[1,2,4,8,.5,5,5])
c.insert(2,3.5)
print("c=",c)
c.remove(8)
print("remove=",c)
x=len(c)
print("lenth",x)

d=array('d',[1,2,4,8,.5,5,5])
d.extend([3.4,.87,9.4])
print("d=",d)
y=len(d)
print("lenth",y)

r=array('d',[15.2,6.5])
r=d+c
print("array:",r)
print("lenth",len(r))

m=array('d',[00.0,1,2,4,8,.5,9.5,5])
print("xxx",m[:-1])
