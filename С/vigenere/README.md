# Vigenère
In this problem set, you're asked to implement a program that encrypts messages using the Vigenère cipher.

The Vigenère cipher is a method of encrypting alphabetic text by using a series of different Caesar ciphers based on the letters of a keyword. It is a polyalphabetic substitution cipher.

## Requirements:
Your program must accept a single command-line argument: a keyword, k, composed entirely of alphabetical characters.
If your program is executed without any command-line arguments or with more than one, it should print an error message and return 1.
Your program should then prompt the user to input plaintext.
Using the keyword, encrypt the plaintext using the Vigenère cipher, preserving the case of each letter (i.e., lowercase letters should remain lowercase, and uppercase letters should remain uppercase).
Non-alphabetical characters in the plaintext should not be changed and should not use any letter from the keyword for encryption.
Print the resulting ciphertext.

## Example:
$ ./vigenere ABC
plaintext:  hello, world
ciphertext: hfnlp, yosnd

In this example, the keyword "ABC" implies a Caesar cipher shift of A = 0, B = 1, and C = 2. Thus, the first letter "h" remains "h" (0 shift), "e" becomes "f" (+1 shift), and so on.