#include<stdio.h>
int main()
{
    float days;
    float year;
    int choice;

    
    printf("1--convert a days into year\n:");
    printf("2--convert a year into days\n");
    printf("enter a choice:");
    scanf("%d",&choice);

    

    if (choice == 1){
        printf("enter a days :");
        scanf("%f",&days);

        year = days / 365;
        printf("year are %f\n",year);

    }
    if (choice == 2){
        printf("enter a year :");
        scanf("%f",&year);

        days = year * 365;
        printf("days are %f\n",days);
    }
}