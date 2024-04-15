
#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter the two no: ");
    scanf("%d%d", &a, &b);
    int choice;
    printf("\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("\nAddition = %d", a + b);
        break;
    case 2:
        printf("\nSubtraction = %d", a - b);
        break;
    case 3:
        printf("\nMultiplication = %d", a * b);
        break;
    case 4:
        printf("\nDivision = %d", a / b);
        break;
    default:
        printf("\nChoice is invalid!");
        break;
    }
    return 0;
}