/**
*  Theodore Preaus CMS-230
*
*  Program that uses function binet to take int n and return the corresponding Fibonacci number
*/ 

#include <stdio.h>
#include <math.h>

int binet(int n) {
  double phi = (1 + sqrt(5)) / 2;
  double negphi = (1 - sqrt(5)) / 2;
  
  double n_num = (1 / sqrt(5)) * ((pow(phi, n)) - (pow(negphi, n)));
  
  return n_num;
}

int main(int argc, char* argv[]) {

  for (int f = 0; f < 20; f++) {
    printf("%d\n", binet(f));
  }
  return 0;
}
