from math import sqrt
n = int(input("maximal number? "))
for a in range(1, n+1):
    for b in range(a, n):
        n_square = a**2 + b**2
        c = int(sqrt(n_square))
        if ((c**2-n_square) == 0):
            print(a, b, c)
