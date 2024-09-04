#include <cs50.h>
#include <stdio.h>

int main(void) {
  int h;
  do {
    int h = get_int("Hight?\n");
  } while (h < 1 || h > 8);

  //a pyramid with the desired height
  for (int i = 0; i < h; i++) {
    //the number of spaces
    for (int j = h - 1 - i; j > 0; j--){
      printf(" ");
    }

    //the number of hashes
    for (int k = 0; k <= i; k++) {
      printf("#");
    }

    printf("\n");
  }
  return 0;
}