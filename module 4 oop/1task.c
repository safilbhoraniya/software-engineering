#include<stdio.h>
struct student
{
    char name[20];
    int id;

}std;
int main()
{
    struct student std[5];
    for(int i = 1;i<=5;i++){
        printf("enter a id:");
        scanf("%d",&std[i].id);
        printf("enter a name:");
        scanf("%s",&std[i].name);
    }
    for(int i = 1;i<=5;i++){
        printf("%d%s",std[i].id,std[i].name);

    }

    return 0;
}