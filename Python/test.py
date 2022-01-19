
def test(n,j):
    if n == 1:
        print(n)
        j=j+1
    else:
        for i in range(n*n):
            test(n-1,j)
    print("J:",j)
    
    
j = 0
num = int(input("Enter the value of n: "))
test(num,j)
