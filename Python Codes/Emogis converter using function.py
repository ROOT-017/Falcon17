def emogis(parameter):

    dictionary ={
        ":(":"😢",
        ":)":"😀"
    }
    output=""
    word = message.split(' ')
   
    for i in word:
         output+= dictionary.get(i,i) + " "
    return output


message =input(">")
emogis(message)
print(emogis(message))