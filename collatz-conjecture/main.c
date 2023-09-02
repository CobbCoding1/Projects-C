#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int collatz(int n){
  int count = 0;
  if(!(n > 0)) {
    printf("ERROR: Number must be greater than 0\n");
    exit(1);
  }
  if(n == 1) {
    return count;
  }
  while(n > 1) {
    if(n % 2 == 0) {
      n /= 2;
    } else {
      n *= 3;
      n += 1;
    }
    count++;
  }
  return count;
}

int main(int argc, char *argv[]){
  if(argc != 2) {
    srand(time(NULL));
    int num = rand() % (1000 + 1 - 1) + 1;
    int result = collatz(num);
    printf("Random chosen number: %i, result: %i\n", num, result);
  } else {
    int num = atoi(argv[1]);
    int result = collatz(num);
    printf("Chosen number: %i, result: %i\n", num, result);
  }
  return 0;
}
