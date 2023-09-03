#include <stdio.h>
#include <string.h>
#include <stdlib.h>

const char* reverse(char str[], char result[]){
  int result_i = 0;
  for(int i = strlen(str) - 1; i >= 0; i--){
    result[result_i] = str[i];
    result_i++;
  }
  return result;
}

int main(int argc, char *argv[]){
  if(argc != 2) {
    printf("ERROR: You must provide a string to reverse!\n");
    exit(1);
  }
  //char input[] = &argv[1];
  char result[strlen(argv[1])];
  printf("%s\n", reverse(argv[1], result));
  return 0;
}
