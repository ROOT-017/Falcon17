import os
os.remove("C:/Users/NKWETACHA TERENCE/Documents/Python Codes/terence.docx")

f = open("C:/Users/NKWETACHA TERENCE/Documents/Python Codes/terence.docx", "r")
print(f.read())
f.close()

f = open("tere.txt", "w", "r")
f.write("Hey guys I'm a Youtuber")
f.close()

f = open("tere.txt", "r")
print(f.read())
f.close()

f = open("C", "x")
f.write("This is created using python on VS code ")
f = open("C:/Users/NKWETACHA TERENCE/Documents/Python Codes/terence.docx", "a")
f.write("This is created using python on VS code....")
f = open("C:/Users/NKWETACHA TERENCE/Documents/Python Codes/terence.docx", "r")
print(f.read())
f.close()
