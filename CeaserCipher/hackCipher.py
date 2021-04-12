# Simple code to hack ceaser cipher encrption
# Brute force attack on ciphertext showin all the possible key combination from 0 to 25 if plain text was capitalized
# By ROOT...
# Hacking key is 8
message = "ZCV LCLM EM'ZM IZM JMQVO NWTTWEML"
ALPA = 'ABCDEFGHIJKLMNOPQRSTUVWXYZ'
for key in range(len(ALPA)):
    translated = ''
    for symbol in message:
        if symbol in ALPA:
            num = ALPA.find(symbol)
            num = num - key
            if num < 0:
                num = num + len(ALPA)
            translated = translated + ALPA[num]

            print('Hacking key #%s: %s' % (key, translated))
        else:
            translated = translated + symbol
            print('Hacking key #%s: %s' % (key, translated))
