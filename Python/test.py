##Test py
def test(n,j):
    j=j+1
    if n == 1:
      
        print(n,j)
        
    else:
        for i in range(pow(2,n)):
            print(">",i)
            test(n-1,j)
   ## print("J:",j)
j = 0
num = int(input("Enter the value of n: "))
test(num,j)
