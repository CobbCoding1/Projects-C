#include <stdio.h>

float calculate_tax(float cost, float tax){
  tax = tax / 100;
  printf("tax value is: %f\n", tax);
  cost += (cost * tax);
  return cost;
}


int main(){
  float cost;
  float tax;
  printf("Enter cost: ");
  scanf("%f", &cost);
  printf("Enter tax: ");
  scanf("%f", &tax);
  printf("total cost with tax is: $%f\n", calculate_tax(cost, tax));
}
