# повністю робоча

from cs50 import get_string
from sys import argv
import sys

if len(argv) == 2:
    key = int(argv[1])

    plaintext = get_string("plaintext: ")

    # масив з цифровими значеннями літер тексту
    unicodetext = []
    for c in plaintext:
        char = ord(c)
        unicodetext.append(char)

    # масив з зашифрованими цифровими значеннями літер тексту
    cipherunicodetext = []
    for c in unicodetext:

        # формуля для
        if c < 91 and c > 64:
            n = (c - 64 + key) % 26
            n = 64 + n
            cipherunicodetext.append(n)
        elif c < 123 and c > 96:
            n = (c - 96 + key) % 26
            n = 96 + n
            cipherunicodetext.append(n)
        else:
            cipherunicodetext.append(c)


    # масив літер зашифрованого тексту
    ciphertext = []
    for c in cipherunicodetext:
        char = chr(c)
        ciphertext.append(char)
        
    # вивід зашифрованого тексту
    print("ciphertext: ", end = "")
    
    for c in ciphertext:
        print(c, end = "")
    print()
else:
    print("Usage: python caesar.py k")
    sys.exit(1)