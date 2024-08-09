#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAXRANDOMVALUE 3
#define MAXPREV 500

int arr[4][4] = { 0 }, c[4], temp = 0, len = 0, score = 0, highscore = 0, count = 0, ch = 0;

int findlen(int n);

void print() {
  int i, j, k, len1;

  printf("\n\t\t\t\t\t==============2048=================\n");
  printf("\t\t\t\tYOUR SCORE=%d\n\t\t\t\t\t\t", score);
  if(score < highscore) {
    printf("HIGH SCORE=%d\t\t\t\t\t\n", highscore);
  } else {
    highscore = score;
    printf("HIGH SCORE=%d\t\t\t\t\t\t\t\t\n", highscore);
  }
  printf("\t\t\t\t\t-------------------------------\n");

  for(i = 0; i < 4; i++) {
    for(j = 0; j < 4; j++) {
      if(j == 0) {
        printf("\t\t\t\t\t|");
      }
      if(arr[i][j] != 0) {
        len1 = findlen(arr[i][j]);

        for(k = 0; k < 4 - len; k++) {
          printf(" ");
        }
        printf("%d", arr[i][j]);

        for(k = 0; k < 4 - len; k++) {
          printf(" ");
        }
        for(k = 0; k < len - 1; k++) {
          printf(" ");
        }
        printf("|");
      } else {
        for(k = 0; k < 8 - 2 * len - 1; k++) {
          printf(" ");
        }
        printf("|");
      }
      len = 0;
    }
    if(i != 3) {
      printf("\n");
      printf("\t\t\t\t\t--------------------------\n");
    }
  }

  printf("\n\t\t\t\t\t\t---------------------------\n");
  printf("\t\t\t\t\tPREV-> P\t\t\t\t\t\t\n");
  printf("\t\t\t\t\t\tRESTART-> R\t\t\t\t\t\t\n");
  printf("\t\t\t\t\tEXIT-> U\t\t\t\t\t\t\n");
  printf("\t\t\t\t\tENTER YOUR CHOICE-> W,S,A,D\n\t\t\t\t\t\t");
}
