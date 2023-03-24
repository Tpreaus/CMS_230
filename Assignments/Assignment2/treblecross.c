/**
*  Theodore Preus CMS-230
*
*  Treblecross
*/

#include <stdio.h>

int main(int argc, char * argv[]) {
  
  int arraySize, playerMove;
  int gameRun = 1;
  int player = 1;

  printf("Please enter a positive int");
  scanf("%d", &arraySize);

  if (arraySize < 0) {
    printf("Thats not positive, Try again");
    scanf("%d", &arraySize);
  }

  char board [arraySize];

  for (int i = 0; i < arraySize; i++) {
    board[i] = 'o';
  }

  while (gameRun == 1){
  
    for (int i = 0; i < arraySize; i++) {
      printf("%c|", board[i]);
    }  
  
    printf("\nPlayer %d chose your spot: ", player);
    scanf("%d", &playerMove);
  
    // Put "X" in the indicated spot
  
    board[playerMove] = 'X';

    // Check for win condition

    for (int k = 0; k < arraySize; k++) {
      if (board[k] == 'X' && board[k + 1] == 'X' && board[k + 2] ==           'X') {
        printf("Player %d Wins!!", player);
        gameRun = 0;
      }
    }
    if (player == 1) {
      player = 2;
    } else {
      player = 1;
      }
  }
  return 0;
}
