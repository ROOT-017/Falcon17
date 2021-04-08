from Functions import find_max, find_min

numb = [205, 35, 5, 14, 75, 100, 124, 19, 78, 13,
        1, 15, 48, 46, 78, 19, 79, 72, 35, 49, 82, 17]

num = int((input("Enter either 0 or 1 >")))

if num == 0:
    find_max(numb)
    print("Largest Num: " f'{find_max(numb)}')

elif num == 1:
    find_min(numb)
    print("Smallest Num: " f'{find_min(numb)}')

else:
    print("GoodBye!😉")
