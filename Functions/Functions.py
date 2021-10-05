# Function to return the hightest and lowest interger in a list
# Maximium function
def find_max(numbers):
    largest = numbers[0]

    for i in numbers:
        if i > largest:
            largest = i
    return largest


# Minimium function
def find_min(numbers):
    min = numbers[0]

    for i in numbers:
        if i < min:
            min = i
    return min

#Function to return return an number raise to it exponent
def Power(x,y):
    Power = 1
    for i in range(0,y):
        Power = Power*x
    print(f"Ans: {Power}")
    
#Function to return a word in a dictionary.
def select(lang ,xDict):
    
    for i in xDict:
            if  i.lower() == lang.lower():
                print(xDict[i])
                break
    if  i.lower() == lang.lower():
        return
    else:
        print("Word Not Found In Catalog")