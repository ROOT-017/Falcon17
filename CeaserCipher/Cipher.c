//Implementation of Ceaser cipher
//Run and enter the text to be encrpted and the key you like the plaintext to be encrypted preferably from 1 to 26 capitalised plaintext is better
/*example:
plaintext:RUN DUDE WE'RE ARE BEING FOLLOWED
key:8
ciphertext:ZCV LCLM EM'ZM IZM JMQVO NWTTWEML*/
#include <stdio.h>

int main()
{
    char message[10000], ch;
    int key, i;

    printf("Enter text to be encrypted: ");
    gets(message);
    printf("Enter the enrytion key: ");
    scanf("%d", &key);

    for (i = 0; message[i] != '\0'; i++)
    {
        ch = message[i];
        if (ch >= 'a' && ch <= 'z')
        {
            ch = ch + key;
            if (ch > 'z')
            {
                ch = ch - 'z' + 'a' - 1;
            }
            message[i] = ch;
        }
        else if (ch >= 'A' && ch <= 'Z')
        {
            ch = ch + key;
            if (ch > 'Z')
            {
                ch = ch - 'Z' + 'A' - 1;
            }
            message[i] = ch;
        }
    }
    printf("Encryted message: %s", message);
    return 0;
}
/*...................................................*/