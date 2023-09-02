#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int calculate_random(int *heads, int *tails){
  int random = rand() % (1+1-0)+0;
  int result = 0;

  if(random == 1) {
      *heads += 1;
    } else {
      *tails += 1;
    }
  
  return 0;
}

int main(int argc, char *argv[]){
  srand(time(NULL));

  int flips = atoi(argv[1]);
  int heads = 0;
  int tails = 0;

  for(int i = 0; i < flips; i++){
    calculate_random(&heads, &tails);
  }

  printf("Number of flips: %i, Heads: %i, Tails: %i\n", flips, heads, tails);
  return 0;
}
