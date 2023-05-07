#include <stdio.h>
#include <math.h>

int main() {
int a, b, c;
printf("Enter a A:");
scanf("%d", &a);
printf("Enter a B:");
scanf("%d", &b);
printf("Enter a C:");
scanf("%d", &c);
float y;
y = 4-((2*a+1+c)/b)-((3*b+c)/c);
printf("%f\n",y);
return 0;
}