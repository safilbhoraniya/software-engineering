#include<stdio.h>
int main(){
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    int a=1;
    for(int i = 1;i<=n;i++){
        a *= i;
    }
    printf("%d\n",a);
}