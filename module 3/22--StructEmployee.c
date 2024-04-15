#include <stdio.h>
struct Employee {
    int empNo;
    char empName[50];
    char address[100];
    int age;
};
void printEmployeeDetails(struct Employee emp) {
    printf("employee number: %d\n", emp.empNo);
    printf("employee name: %s\n", emp.empName);
    printf("eddress: %s\n", emp.address);
    printf("age: %d\n", emp.age);
}

int main() {
    struct Employee emp1;
    printf("enter a Number: ");
    scanf("%d", &emp1.empNo);

    printf("enter employee Name: ");
    scanf("%s", &emp1.empName);

    printf("enter address: ");
    scanf("%s", &emp1.address);

    printf("enter Age: ");
    scanf("%d", &emp1.age);

    return 0;
}
