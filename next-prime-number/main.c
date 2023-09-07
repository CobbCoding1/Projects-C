#include <stdio.h>

int is_prime(int num){
  for(int i = 2; i <= num/2; i++){
    if(num % i == 0){
      return 0;
    }
  }
  return 1;
}

int main(){
  int input;
  scanf("%d", &input);
  int num = 2;
  while(input != 0){
    for(int i = 0; !is_prime(i); i++){
      printf("DEBUG\n");
    }
    while(!is_prime(num)){
      num++;
    }
    if(is_prime(num)){
      printf("%d\n", num);
    }
    scanf("%d", &input);
    num++;
  }
}
