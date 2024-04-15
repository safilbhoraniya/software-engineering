#include<stdio.h>
struct employee{
    int no;
    char name;
    char adress;
    int age;

}obj;


int main()
{
    
    printf("enter employee no");
    scanf("%d",&obj.no);
    printf("enter employee name");
    scanf("%s",&obj.name);
    printf("enter adress");
    scanf("%s",&obj.adress);
    printf("enter employe age");
    scanf("%d",&obj.age);
    

    printf("\n employee no %d",obj.no);
    printf("\n employee name %s",obj.name);
    printf("\n adress is %s",obj.adress);
    printf("\nage is %d",obj.age);

    return 0;
    
}
