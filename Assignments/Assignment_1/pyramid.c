/**
*  Theodore Preaus CMS-230
*
*  Print a pyramid of n levels 
*/

#include <stdio.h>

int pyramid(int n) {
  int numSpaces, numStars;
  
  for (int r = 0; r < n; r ++) {
    numSpaces = (n - 1) - 1 * (r);
    numStars = 1 + (r * 2);
    for (int sp = 0; sp < numSpaces; sp++) {
      printf(" ");
    }
    for (int st = 0; st < numStars; st++) {
      printf("*");
    }
    printf("\n");
  }
  return 0;
}

int hollow(int n) {
  int numSpaces, secondSpace;
  
  for (int r = 0; r < n; r ++) {
    numSpaces = (n - 1) - 1 * (r);
    secondSpace = -1 + (r * 2);
    for (int sp = 0; sp < numSpaces; sp++) {
      printf(" ");
    }
    printf("*");
    if (r < n - 1) {
     for (int space = 0; space < secondSpace; space++) {
       printf(" ");
     }
    }
    if (r == n - 1) {
      for (int str = 0; str < ((n * 2) - 3); str ++) {
        printf("*");
      }
    }
    if (r >= 1) {
      printf("*");
    }
    printf("\n");
  }
  return 0;
}

int main(int argc, char* argv[]) {
  
  pyramid(10);
  hollow(10);

  return 0;  
}
