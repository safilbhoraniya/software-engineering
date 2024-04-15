#include<stdio.h>
int main(){
    int a;
    printf("enter 1st number:");
    scanf("%d",&a);
    char b;
    printf("enter operator:");
    scanf("%ch",&b);
    int d;
    printf("enter second number:");
    scanf("%d",&d);

    switch(b){

        case'+':
        printf("%d\n",a+d);
        case'-':
        printf("%d\n",a-d);
        case'*':
        printf("%d\n",a*d);
        case'/':
        printf("%d\n",a/d);
        default:
        printf("invalid operator");

    }
    return 0;

}