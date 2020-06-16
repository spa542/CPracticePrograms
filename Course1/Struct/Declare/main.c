#include<stdio.h>
#include<stdlib.h>

struct Employee {
    char name[50];
    int hireDate;
    float salary;
};

int main() {

    struct Employee emp1 = { "Ryan Rosiak", 1999, 40000.65 };
    struct Employee emp2;
    char temp;

    printf("Enter the name of the employee: ");
    scanf("%[^\n]", emp2.name);
    scanf("%c", &temp);
    printf("Enter the hire date: ");
    scanf("%d", &emp2.hireDate);
    scanf("%c", &temp);
    printf("Enter the salary: "); 
    scanf("%f", &emp2.salary);

    printf("Emp1 Name: %s\n", emp1.name);
    printf("Hire Data: %d\n", emp1.hireDate);
    printf("Salary: %f\n", emp1.salary);
    printf("Emp2 Name: %s\n", emp2.name);
    printf("Hire Data: %d\n", emp2.hireDate);
    printf("Salary: %f\n", emp2.salary);


    return 0;
}
