#include<stdio.h>

int main()
{
    float side;
    float area;
    printf("enter a side of lenth:");
    scanf("%f",&side);
    area = 4*side*side;

    printf("area of the cube: %f\n",area);

    return 0;

}