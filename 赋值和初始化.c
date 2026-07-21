#include <stdio.h>

int main()
{
  int price= 0;

  printf("Please enter the amount:");
  scanf("%d", &price);

  int change = 100 - price;

  printf("Here is your change of %d yuan \n", change);
