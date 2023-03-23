/**
*  Theodore Preaus CMS-230
*
*  Program to create and fill Magic squares
*/

#include <stdio.h>

int main(int argc, char * argv[]) {
  
  // Get the square size and check to make sure its odd
  int n;
  printf("Please enter the size of the square: ");
  scanf("%d", &n);
  if (n % 2 == 0) {
    printf("Please enter an odd Number!");
    scanf("%d", &n);
  }

  // Initialize the 2d Array of n size
  int square[n][n];

  // Create row and col for position tracking
  // Start in the top middle
  int row = 0;
  int col = n / 2;
  int oldRow, oldCol;

  // Fill Array with 0
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      square[i][j] = 0;
    }
  }

  // Main loop to fill in Square
  for (int i = 1; i < n * n + 1; i++) {
    // Place value at location
    square[row][col] = i;
    
    oldRow = row;
    oldCol = col;
    
    // Attempt to move up and right
    row -= 1;
    col += 1;
    //Check if need to Wrap arround
    if (row < 0) {
      row = n - 1;
    }
    if (col > n - 1) {
      col = 0;
    }
      
    // Check slot for number
    if (square[row][col] != 0) {
      // If occupied go back to original square and right
      col = oldCol;
      row = oldRow + 1;
      if (row > n - 1){
        row = 0;
      }
    }
  }
  // Print out the magic Square
  for (int j = 0; j < n; j++) {
    for (int k = 0; k < n; k++) {
      printf("%d ", square[j][k]);
    }
    printf("\n");
  }
  return 0;
}
