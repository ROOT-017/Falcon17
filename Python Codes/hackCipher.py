# Simple code to hack ceaser cipher encrption
# By ROOT
message = "pmü umv"
LETTERS = 'ABCDEFGHIJKLMNOPQRSTUVWXYZ'
for key in range(len(LETTERS)):
    translated = ''
    for symbol in message:
        if symbol in LETTERS:
            num = LETTERS.find(symbol)
            num = num - key
            if num < 0:
                num = num + len(LETTERS)
            translated = translated + LETTERS[num]
            print(translated)
        else:
            translated = translated + symbol
            # print(translated)
# print('Hacking key #%s: %s' % (key, translated))
