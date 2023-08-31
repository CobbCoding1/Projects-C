#include <stdlib.h>
#include <stdio.h>

float calculate_cost(float cost, float width, float height){
  return(cost * width * height);
}

float calculate_size(float width, float height){
  return(width * height);
}

int main(){
  float cost = 0;
  float width = 0;
  float height = 0;
  printf("Enter cost per square inch: ");
  scanf("%f", &cost);
  printf("Enter width in inches: ");
  scanf("%f", &width);
  printf("Enter height in inches: ");
  scanf("%f", &height);
  printf("Final cost for %.2f square inches of tile is: $%.2f\n", calculate_size(width, height), calculate_cost(cost, width, height));
}
