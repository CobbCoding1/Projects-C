#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int fibbonaci(int n){
  if(n <= 1){
    return(n);
  }
  return(fibbonaci(n-1) + fibbonaci(n-2));
}

void print_fibb(int index){
  for(int i = 0; i <= index; i++){
    printf("%i\n", fibbonaci(i));
  }
}

int main(int argc, char *argv[]){
  srand(time(NULL));
  if(argc < 2){
    int random_num = rand() % (47 - 0);
    int result = fibbonaci(random_num);
    print_fibb(random_num);
    printf("Selected number: %i, final number: %i\n", random_num, result);
  } else {
    int num = atoi(argv[1]);
    if(num >= 47) {
      printf("ERROR: Number Greater Than Integer Limit! Try one less than 47\n");
      exit(1);
    }
    int result = fibbonaci(num);
    print_fibb(num);
    printf("Selected number: %i, final number: %i\n", num, result);
  }
  return 0;
}
