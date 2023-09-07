#include <stdio.h>

#define VOWELS "aeiouAEIOU"

int count_vowels(char str[]){
  int count = 0;
  for(size_t i = 0; str[i] != '\0'; i++){
    for(size_t j = 0; VOWELS[j] != '\0'; j++){
      if(str[i] == VOWELS[j]){
        count++;
      }
    } 
  }
  return count;
}

int main(){
  printf("%d\n", count_vowels("aeiouAEIOUabcdefghijklmnopqrstuvwxyz"));
  return 0;
}
