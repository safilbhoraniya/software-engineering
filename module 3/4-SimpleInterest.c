#include <stdio.h>

int main() {
    float principal = 1000;
    float rate = 5; 
    float time = 2; 

    
    float a = (principal * rate * time) / 100;

    printf("simple interest = %f\n", a);

    return 0;
}
