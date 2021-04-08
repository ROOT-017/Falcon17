from array import *

a=array('d',[])

print("Enter the number of elemt you wish to insert in your array")
size= int(input(">"))

for i in size:
    a.append(int(input('>')))
   

print(a)
