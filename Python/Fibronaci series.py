print("Enter a positive number:")
num = int(input(">"))
fid = 0

for i in range(0, num):
    fid +=i

print(f"Fibronaci of {num} is {fid}")
