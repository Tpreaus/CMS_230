/** 
*  Theodore Preaus CMS-230
*
*  Make a program that outputs n stairs
*/
#include <stdio.h>

int stairs(int n) {
  for (int r = 1; r <= n; r++){
    for(int s = 1; s <= r; s++){
      printf("#");
      }
  
  printf("\n");
  }
  return 0;
}

int main(int argc, char* argv[]) {
  stairs(10);
  return 0;
}
