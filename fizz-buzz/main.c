#include <stdio.h>

void fizzbuzz() {
  for(int i = 1; i <= 100; i++){
    if(i % 3 == 0){
      printf("Fizz");
    }
    if(i % 5 == 0){
      printf("Buzz");
    }
    if(i % 5 != 0 && i % 3 != 0) {
      printf("%i", i);
    }
    printf("\n");
  }
}

int main(){
  fizzbuzz();
  return 0;
}
