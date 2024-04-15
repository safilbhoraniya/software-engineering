#include<stdio.h>

struct student{
    int id;
    char name[20];
}std;
int main(){
    for(int i = 1;i<5;i++){
    printf("enter a id:");
    scanf("%d",&std.id);
    printf("enter a name:");
    scanf("%s",&std.name);
    }


    printf("%d,%s",std.id,std.name);
}
