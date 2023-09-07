#include <stdio.h>
#include <stdlib.h>

int sum_of_3_or_5(int num){
  int sum = 0;
  for(int i = 0; i < num; i++){
    if(i % 3 == 0 || i % 5 == 0){
      sum += i;
    }
  }
  return sum;
}

int main(int argc, char *argv[]){
  if(argc < 2){
    printf("sum of first 1000 multiples of 3 or 5: %d\n", sum_of_3_or_5(1000));
    return 0;
  }
  int input = atoi(argv[1]);
  printf("sum of first %d multiples of 3 or 5: %d\n", input, sum_of_3_or_5(input));
  return 0;
}
