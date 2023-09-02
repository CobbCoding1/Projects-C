#include <stdio.h>
#include <stdlib.h>

int calculate_change(float amount){
  int quarters = 0;
  int dimes = 0;
  int nickels = 0;
  int pennies = 0;
  while(amount >= 0) {
    printf("%f\n", amount);
    if(amount - 0.25 >= 0){
      quarters += 1;
      amount -= 0.25;
    } else if(amount - 0.1 >= 0){
      dimes += 1;
      amount -= 0.1;
    } else if(amount - 0.05 >= 0) {
      nickels += 1;
      amount -= 0.05;
    } else if(amount - 0.01 >= 0) {
      pennies += 1;
      amount -= 0.01;
    } else {
      break;
    }
  }
  printf("quarters: %i, dimes: %i, nickels: %i, pennies: %i\n", quarters, dimes, nickels, pennies);
  return 0;
}

int main(int argc, char *argv[]){
  if(argc < 2){
    printf("ERROR: You must provide a value\n");
    exit(1);
  }
  float num = atof(argv[1]) + 0.001;
  calculate_change(num);
  return 0;
}
