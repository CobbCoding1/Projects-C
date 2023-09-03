#include <stdio.h>
#include <stdlib.h>

int rePow(int b, int e){
  int n = 1;

  for(int i = 0; i < e; i++){
    n *= b;
  }
  return n;
}

void convert_to_binary(int num){
  if(num == 0 || num == 1) { printf("%i\n", num); return; }
  int binary[32];
  int i;

  for(i = 0; num > 0; i++){
    binary[i] = num % 2;
    num /= 2;
  }

  for(int j = i - 1; j >= 0; j--){
    printf("%i", binary[j]);
  }
  printf("\n");
}

void convert_to_decimal(int binary[], int len){
  int powers[len];
  int i = 0;
  int j = len;
  int result = 0;
  for(;i <= len;){
    if(binary[i] == 1) {
      result += rePow(2, j);
    }
    i++; j--;
  }
  printf("%i\n", result);
}

int main(){
  int num = 1015;
  int num2[] = {1, 1, 1, 1, 1, 1, 0, 1, 1, 1};
  int len = (sizeof(num2) / sizeof(num2[0])) - 1;
  convert_to_binary(num);
  convert_to_decimal(num2, len);
  return 0;
}
