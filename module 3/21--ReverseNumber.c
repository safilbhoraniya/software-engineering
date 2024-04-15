#include <stdio.h>

int factorial(int n) {
    if (n == 0 || n== 1) {
        return 1;
    } else {
        return n*f(n-1);
    }
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    if (num < 0) {
        printf("not a factoril");
    } else {
        int f = factorial(num);
        printf("%d\n", num, f);
    }
    
    return 0;
}
