#include<stdio.h>
int main()
{
    float interest = 100;;
    float amount = 10;
    
    float simpleinterest = (interest * 12)/100;
    amount = simpleinterest + 100;

    printf("simple interest = %f\n",simpleinterest);
    printf("amount is = %f\n",amount);

    return 0;

}