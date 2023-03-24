/**
 * Theodore Preaus CMS-230
 * 
 * Validating Benford's Law for Census data
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {

  // Open the file
  FILE *f = fopen("co-est2021-alldata.csv", "r");

  // Check the return code
  if (f == NULL) {
    perror("fopen");
    exit(1);
  }

  // Declare character buffer
  char buf[1024];

  int firstLine = 1;


  float totalLines = 0;
  int counts[10];

  for (int i = 0; i < 10; i++){
    counts[i] = 0;
  }
  
  // Loop over the remaining lines that have data
  while (fgets(buf, sizeof(buf), f) != NULL) {

    // Skip the first line that contains the field names
    if (firstLine) {
      firstLine = 0;
      continue;
    }
    // Use strtok to get the first value
    char *token;
    token = strtok (buf, ",");
    
    // Get the 10th token
    for (int i = 0; i < 9; i++) {
    token = strtok(NULL, ",");
      if (i == 8) {
        char firstDigit = *token;

        int value = firstDigit - '0';

        counts[value] = counts[value] + 1;
      }
    }
    totalLines++;
  }

for (int i = 0; i < 10; i++) {
  float fraction = counts[i] / totalLines;
  printf("Fraction of leading %d's = %f\n", i, fraction);
}
}
// Use this file to implement the program that reads
// Census data and compares the distribution of population
// digits to Benford's Law
