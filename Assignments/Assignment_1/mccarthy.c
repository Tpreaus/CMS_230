/**
*  Theodore Preaus CMS-230
*
*  Use a recursive method to show McCarthy's 91 function
*/ 

#include <stdio.h>

int mccarthy(int n) {
  if (n > 100) {
    return (n - 10);
  }
  if (n <= 100) {
    return mccarthy(mccarthy( n + 11));
    }
  return 0;
}

int main(int argc, char* argv[]) {
printf("%d\n", mccarthy(1));
printf("%d\n", mccarthy(99));
printf("%d\n", mccarthy(101));
printf("%d\n", mccarthy(111));
}
