/** 
*  Theodore Preaus
*  
*  Calculate the min of 3 doubles using no built-in functions
*/
#include <stdio.h>

double tripleMin(double s, double r, double t){
  
  double min_num;

  if (s < r) {
    if (s < t) {
      return min_num = s;
    }
  }
  if (r < s) {
    if (r < t) {
     return min_num = r;
    }
  }
  if (t < r) {
    if (t < s) {
      return min_num = t;
    }
  }
  return s;
}

int main(int argc, char* argv[]) {

  double m = tripleMin(1, 2, 3);
  printf("%f\n", m);

  m = tripleMin(2, -1, 3);
  printf("%f\n", m);

  m = tripleMin(3, 3, 3);
  printf("%f\n", m);
}
