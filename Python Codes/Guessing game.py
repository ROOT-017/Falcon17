secret_num= 6
guess_limit = 3
trail= 0
while trail < guess_limit:
    guess= int(input("Guest number : "))
    trail+=1
    if guess ==secret_num:
     print("You win😀")
     break

else:
          print("Sorry, you lose😢")
