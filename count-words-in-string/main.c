#include <stdio.h>
#include <string.h>

int count_words_from_string(char str[]){
  int count = 1;
  for(int i = 0; i < strlen(str); i++){
    if(str[i] == ' ') {
      count++;
    }
  }
  return count;
}

int count_words_from_file(char file_name[]){
  int current_char;
  int count = 0;
  int is_word = 0;
  FILE *file;

  file = fopen(file_name, "r");
  if(file) {
    while((current_char = getc(file)) != EOF){ 
      if(current_char == ' ' || current_char == '\n'){
        is_word = 0;
      } else {
        if(is_word == 0) {
          count++;
          is_word = 1;
        }
      }
    }
    fclose(file);
  }
  return count;
}

int main(int argc, char *argv[]){
  if(argc != 2){
    printf("No file provided, using default words.txt. Word count: %i\n", count_words_from_file("words.txt"));
  } else {
    printf("Provided file: %s, word count: %i\n", argv[1], count_words_from_file(argv[1]));
  }
  return 0;
}
