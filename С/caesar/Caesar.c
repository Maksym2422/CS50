#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
  //right key?
  if (argc !== 2)
  {
    printf("Usage: ./caesar kay\n");
    return 1;
  }

  for (int i = 0, a = strlen(argv[1]); i < a; i++)
  {
    if (!argv[1][i] >= '0' && !argv[1][i] <= '9')
    {
      printf("Usage: ./caesar kay\n");
      return 1;
    }
  }

  int kay = atoi(argv[1]);
  int n;
  string s = get_string("Plaintext: ");
  printf("Ciphertext: ");

  for (int i = 0, int len = strlen(s); i < len; i++)
  {
    //small letter? - encrypt
    if (s[i] >= 'a' && s[i] <= 'z')
    {
      n = (int) s[i] + kay - 97;
      n = n %26;
      n = n + 97;
      printf("%c", n);
    }
    //capital letter? - encrypt
    else if (s[i] >= 'A' && s[i] <= 'Z')
    {
        n = (int) s[i] + kay - 65;
        n = n %26;
        n = n + 65;
        printf("%c", n);
    }
    //another character - not            
    else 
    {
      printf("%c", s[i]);
    }
  }
  printf("\n");
  return 0;
}

