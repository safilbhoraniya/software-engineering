#include <stdio.h>
struct Employee {
    int no;
    char name;
    char adress;
    int age;
}obj;

int main()
{
    printf("enter the employee no");
    scanf("%d",&obj.no);
    printf("enter employee nam ");
    scanf("%s",&obj.name);
    printf("enter adress ");
    scanf("%s",&obj.adress);
    printf("enter age");
    scanf("%d",&obj.age);

    printf("\n employee no is %d",obj.no);
    printf("\n employe name %d ",obj.name);
    printf("\nadress %d",obj.adress);
    printf("\n age %d",obj.age);

    return 0;
}
