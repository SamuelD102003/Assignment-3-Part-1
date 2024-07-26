#include <stdio.h>
#include <math.h>
int main(void) {
  double n,cost;
  printf("How many chocolate bars would you like to buy?\n");
  scanf("%lf", &n);
  if (n>=501)
  {
    cost = 1.07*((1.99*n)*.81);
    printf("The total cost would be $%.2lf including sales tax\n",cost);
  }
  else if (n>=301)
  {
    cost = 1.07*((1.99*n)*.83);
    printf("The total cost would be $%.2lf including sales tax\n",cost);
  }
  else if (n>=150)
  {
    cost = 1.07*((1.99*n)*.85);
    printf("The total cost would be $%.2lf including sales tax\n",cost);
  }
  else
  {
    cost = 1.07*(1.99*n);
    printf("The total cost would be $%.2lf including sales tax\n",cost);
  }
  return 0;
}