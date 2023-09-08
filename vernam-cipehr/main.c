#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int *cipher(char *text, char *key){
  int key_length = strlen(key);
  int text_length = strlen(text);
  if(key_length != text_length){
    printf("ERROR: text and key must have the same length!\n");
    exit(1);
  }
  int *result = malloc(sizeof(int) * text_length);
  for(int i = 0; i < text_length; i++){
    result[i] = key[i] ^ text[i];
  }
  return result;
}

char *cipher_decrypt(int *text, char *key){
  int key_length = strlen(key);
  char *result = malloc(sizeof(char) * key_length);

  for(int i = 0; i < key_length; i++){
    result[i] = key[i] ^ text[i];
  }

  return result;
}

int main(){
  int *result = cipher("hello", "pluto");
  for(int i = 0; i < 5; i++){
    printf("%d ", result[i]);
  }
  printf("\n");
  printf("%s\n", cipher_decrypt(result, "pluto"));
}
