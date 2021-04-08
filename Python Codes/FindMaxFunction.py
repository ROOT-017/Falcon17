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
