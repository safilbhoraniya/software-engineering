#include<stdio.h>
int main(){
    int n;
    printf("enter a number:");
    scanf("%d",&n);

    int sum = 0;
    while(n!=0){
        int ld = n%10;
        n /= 10;
        sum += ld;

    }
    printf("%d\n",sum);
}