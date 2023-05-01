#include <stdio.h>

int main(void)
{
    float a, b, c, sum;
    printf("enter three floating point numbers");
    scanf("%f%f%f", &a, &b, &c);
    printf("entered numbers are %f, %f and %f", a, b, c);
    sum = a+b+c;
    printf("sum of %f, %f, %f : %f \n", a, b, c, sum);
    return 0;
}