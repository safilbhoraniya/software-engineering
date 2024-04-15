#include<stdio.h>
int main(){
    int a;
    printf("enter 1st number:");
    scanf("%d",&a);
    char b;
    printf("enter operator:");
    scanf("%s",&b);
    int c;
    printf("enter second number:");
    scanf("%d",&c);

    switch(b){

        case'+':
        printf("%d\n",a+c);
        break;
        case'-':
        printf("%d\n",a-c);
        break;
        case'*':
        printf("%d\n",a*c);
        break;
        case'/':
        printf("%d\n",a/c);
        break;
        default:
        printf("invalid operator");

    }
    return 0;

}