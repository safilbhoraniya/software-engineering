#include <stdio.h>

int main() {
    int choice;
    int years;
    int days;

    printf("Choose conversion:\n");
    printf("1. Years to Days\n");
    printf("2. Days to Years\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter years: ");
        scanf("%lf", &years);

        
    } else if (choice == 2) {
        printf("Enter days: ");
        scanf("%lf", &days);
    }
    else{
            printf("not a valid choice");
        }

        

    return 0;

}