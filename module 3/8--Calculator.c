#include<stdio.h>
int main(){
    int a;
    printf("enter 1st number:");
    scanf("%d",&a);
    int b;
    printf("enter second number:");
    scanf("%d",&b);
    char operator;
    printf("enter a operator:");
    scanf("%s",&operator);

    switch(b){

        case'+':
        printf("%d\n",a+b);
        break;
        case'-':
        printf("%d\n",a-b);
        break;
        case'*':
        printf("%d\n",a*b);
        break;
        case'/':
        printf("%d\n",a/b);
        break;
        default:
        printf("invalid operator");

    }
    

}