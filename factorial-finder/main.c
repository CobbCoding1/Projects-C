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

}

int main(){
  printf("%d\n", factorial_loops(1));
  return 0;
}
