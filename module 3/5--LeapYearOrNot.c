#include <stdio.h>

int main() {
    int y;
    printf("Enter a year: ");
    scanf("%d", &y);

    
    if ((y % 4 == 00 && y % 100 != 00) || (y % 400 == 00)) {
        printf("%d leap year.\n", y);
    } else {
        printf("%d not leap year.\n", y);
    }

    return 0;
}
