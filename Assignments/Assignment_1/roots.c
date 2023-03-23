/** 
*  Theodore Preaus CMS-230
*
*  Use the Babylonian method to accurately find the square root of a double
*/
#include <stdio.h> 
#define TOL .0001

double root(double n, double x) {
  // Start with a large diff for the first iteration
double diff = 100.0;
double oldX;
while (diff > TOL || diff < -TOL) {
  // Save the current value of x
  oldX = x;

  x = .5 * (x + n / x);
  
  // Update diff
  diff = (oldX - x);
  }
  return x;
}

int main(int arcg, char* argv[]) {

  printf("%.4f\n", root(2, 20));
  return 0;
}
