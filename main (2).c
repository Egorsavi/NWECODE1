#include <stdio.h>
#include <math.h>

int main () {

float a, b;
printf("Enter a A:");
scanf("%f", &a);
printf("Enter a B:");
scanf("%f", &b);
float s, v, d;
s = a*b;
v = 2*(a+b);
d = (a+b)/2;
printf("%f\n%f\n%f", s ,v ,d);
return 0;
}