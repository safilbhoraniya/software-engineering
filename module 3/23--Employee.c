#include <stdio.h>
struct Employee {
    int empNo;
    char empName[50];
    char address[100];
    int age;
};

void printEmployeeDetails(struct Employee emp) {
    printf("enter Number: %d\n", emp.empNo);
    printf("enter Name: %s\n", emp.empName);
    printf("address: %s\n", emp.address);
    printf("age: %d\n\n", emp.age);
}

int main() {
    
    struct Employee employees[max_employee];
    printf("enter information for five employees:\n");
    for (int i = 0; i < max_employee; i++) {
        printf("employee %d:\n", i + 1);

        printf("enter a number: ");
        scanf("%d\n", &employees[i].empNo);

        printf("enter a name: ");
        scanf("%s\n", employees[i].empName);

        printf("enter address: ");
        scanf("%s\n", employees[i].address);

        printf("enter age: ");
        scanf("%d\n", &employees[i].age);

        
    }


    for (int i = 0; i < max_employee; i++) {
        printf("%d\n", i + 1);
        print(employees[i]);
    }

    return 0;
}
