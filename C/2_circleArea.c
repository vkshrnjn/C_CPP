#include <stdio.h>
#define PI 3.14159

int main()
{
    double area = 0.0, radius = 0;
    printf("enter radius : ");
    scanf("%lf", &radius);
    area = PI * radius * radius;
    printf("for radius %f, area of the circle %lf \n", radius, area);
    return 0;
}