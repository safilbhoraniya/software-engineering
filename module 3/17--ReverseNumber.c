#include<stdio.h>
int main(){
    int n;
    printf("enter a number:");
    scanf("%d",&n);

    int r = 0;
    while(n!=0){
        int ld = n % 10;
        r *= 10;
        r += ld;
        n /= 10;

    }
    printf("%d\n",r);
}