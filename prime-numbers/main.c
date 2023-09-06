#include <stdio.h>

int factorial(int num){
  int fact = 1;
  for(int i = 1; i <= num; i++){
    fact *= i;
  }
  return fact;
}

int prime(int n){
  if(factorial(n) == n(%n+1)){
    return 1;
  }
  return 0;
}

int main(){
  int n = 5;
  printf("prime: %d\n", prime(7));
  return 0;
}
