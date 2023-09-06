#include <stdio.h>
#include <stdlib.h>

float factorial(int num){
  float fact = 1;
  for(int i = 1; i <= num; i++){
    fact *= i;
  }
  return fact;
}

float calculate_e(int stop) {
  float result = 0;
  for(int i = 0; i <= stop; i++){
    result += 1/(factorial(i)); 
  }
  return result;
}

int main(int argc, char *argv[]){
  if(argc < 2){
    printf("e: %f\n", calculate_e(25));
  } else {
    int num = atoi(argv[1]);
    if(num > 9999) {
      printf("ERROR: please provide a smaller number!\n");
      exit(1);
    }
    printf("e: %f\n", calculate_e(num));
  }
  return 0;
}
