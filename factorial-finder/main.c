#include <stdio.h>

int factorial_loops(int num){
  if(num == 0){
    return 1;
  }
  int result = 1;
  while(num > 1){
    result *= num;
    num--;
  }
  return result;
}

int factorial_recursion(int num){
  if(num == 0){
    return 1;
  }
  return(num * factorial_recursion(num-1));
}

int main(){
  printf("%d\n", factorial_recursion(5));
  return 0;
}
