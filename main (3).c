#include <math.h>
#include <stdio.h>

int main() {
  int v, x;
  printf("Enter a V:");
  scanf("%d", &v);
  printf("Enter a X:");
  scanf("%d", &x);
  float y;
  y = (sqrt(x) + 2 * sqrt(x * v)) / (sqrt(x) - 2 * sqrt(x * v));
  printf("%f", y);
  return 0;
}