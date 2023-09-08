#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define ALPHABET "abcdefghijklmnopqrstuvwxyz"

char caesar_cipher(char chr, int shift){
  char result = '0';
  for(int i = 0; i < 26; i++){
    if(ALPHABET[i] == chr){
      int new_shift = i + shift;
      if(new_shift > 25){
        new_shift -= 26;
      }
      result = ALPHABET[new_shift];
    }
  }
  return result;
}

char *vigenere_encrypt(char *text, char *key){
  int length = strlen(key);
  if((int)strlen(text) != length){
    printf("ERROR: Key and Text must have the same length!\n");
    exit(1);
  }
  char *result = malloc(sizeof(char) * length);
  int shift[length];
  int shift_index = 0;
  for(int i = 0; i < length; i++){
    for(int j = 0; j < 26; j++){
      if(key[i] == ALPHABET[j]){
        shift[shift_index] = j;
        shift_index++;
      }
    }
  }
  for(int i = 0; i < length; i++){
    result[i] = caesar_cipher(text[i], shift[i]);
  }
  return result;
}

int main(int argc, char *argv[]){
  if(argc != 3){
    printf("Usage: ./main.c <text> <key>\n");
    exit(1);
  }
  char *text = argv[1];
  char *key = argv[2];
  printf("%s\n", vigenere_encrypt(text, key));
  printf("Hello, world!\n");
}
