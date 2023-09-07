#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

#define ALPHABET "abcdefghijklmnopqrstuvwxyz"

char *cipher(char str[], int shift){
  size_t len = strlen(str) - 1;
  char *result = malloc((len) * sizeof(char));
  int result_index = 0;
  for(size_t i = 0; str[i] != '\0'; i++){
    char lower_char = tolower(str[i]);
    for(size_t j = 0; ALPHABET[j] != '\0'; j++){
      if(lower_char == ALPHABET[j]){
        int new_index = j + shift;
        if(new_index > 25){
          new_index -= 26;
        }
        result[result_index] = ALPHABET[new_index];
        result_index++;
      }
    }
  }
  return result;
}

char *cipher_decrypt(char str[], int shift){
  return(cipher(str, -shift));
}

int main(int argc, char *argv[]){
  if(argc < 3){
    printf("CAESAR CIPHER OF %s IS %s\n", "test", cipher("test", 2));
    return 0;
  }
  int shift = atoi(argv[2]);
  if(shift > 25){
    printf("ERROR: Shift cannot be greater than 25\n");
    exit(1);
  }
  printf("CAESAR CIPHER OF %s IS %s\n", argv[1], cipher(argv[1], atoi(argv[2])));
  char *cipher_generated = cipher(argv[1], atoi(argv[2]));
  printf("CAESAR CIPHER DECODE OF %s IS %s\n", cipher_generated, cipher_decrypt(cipher_generated, atoi(argv[2])));
  return 0;
}
