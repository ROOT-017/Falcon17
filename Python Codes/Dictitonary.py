dictionary = {
    ":(": "😢",
    ":)": "😀"
}
output = ""
message = input(">")
word = message.split(' ')
for i in word:
    output += dictionary.get(i, i) + " "

print(output)
