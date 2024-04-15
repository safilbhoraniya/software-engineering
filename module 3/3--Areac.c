#include<stdio.h>
#include<math.h>

int main()
{
    float radius;
    float area;
    float circumference;

    printf("enter redius :");
    scanf("%f",&radius);
    area = 3.14 * radius * radius;
    circumference = 2*3.14*radius;

    printf("area of circle %f\n",area);
    printf("circumference of the %f\n",circumference);

    return 0;
}