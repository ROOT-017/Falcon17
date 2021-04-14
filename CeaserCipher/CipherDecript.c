//Decryption Of Ceaser Cipher
//run and enter cipher text or encripted text to decrypt
/*
Example
ciphertext:ZCV LCLM EM'ZM IZM JMQVO NWTTWEML
key:8
Plaintext:RUN DUDE WE'RE ARE BEING FOLLOWED...*/
//CIPHER TEXT MUST BE ALL IN UPPERCASE
#include <stdio.h>

int main()
{
    char message[1000], ch;
    int key, i;

    printf("Enter text to be decrypted: ");
    gets(message);
    printf("Enter the derytion key: ");
    scanf("%d", &key);

    for (i = 0; message[i] != '\0'; i++)
    {
        ch = message[i];
        if (ch >= 'a' && ch <= 'z')
        {
            ch = ch - key;
            if (ch < 'a')
            {
                ch = ch + 'z' - 'a' + 1;
            }
            message[i] = ch;
        }
        else if (ch >= 'A' && ch <= 'Z')
        {
            ch = ch - key;
            if (ch < 'A')
            {
                ch = ch + 'Z' - 'A' + 1;
            }
            message[i] = ch;
        }
    }
    printf("Decryted message: %s", message);
    return 0;
}