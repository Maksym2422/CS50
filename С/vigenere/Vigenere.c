#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    //right number of words?
    if (argc != 2)
    {
        printf("Usage: ./vigenere kayword\n");
        return 1;
    }

    //right kayword?
    int keyLength = strlen(argv[1]);
    int key[keyLength]; 
    for (int i = 0; i < keyLength; i++)
    {
        if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
        {
            key[i] = (int) argv[1][i] - 97;
        }
        else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
        {
            key[i] = (int) argv[1][i] - 65;
        }
        else
        {
            printf("Usage: ./vigenere kayword\n");
            return 1;
        }
    }

    //get plaintext
    string plaintext = get_string("plaintext: ");
    
    //encryption
    printf("ciphertext: ");
    int j = 0;
    for (int i = 0, l = strlen(plaintext), n = 0; i < l; i++)
    {
        //for small letters
        if (plaintext[i] >= 'a' && plaintext[i] <= 'z')
        {
            n = (int) plaintext[i];
            n = n + key[j] - 96;
            n = n % 26;
            n = n + 96;
            j++;
            printf("%c", n);
        }

        //for capital letters
        else if (plaintext[i] >= 'A' && plaintext[i] <= 'Z')
        {
            n = (int) plaintext[i];
            n = n + key[j] - 65;
            n = n % 26;
            n = n + 65;
            j++;
            printf("%c", n);
        }

        //for another characters         
        else 
        {
            printf("%c", plaintext[i]);
        }
        if (j == keyLength)
        {
            j = 0;
        }
    }
    printf("\n");
    return 0;    
}