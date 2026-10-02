#include <stdio.h>

int main()
{
    int id;
    char name[50];
    float salary, tax;

    printf("Enter Employee ID: ");
    scanf("%d", &id);

    printf("Enter Employee Name: ");
    scanf("%49s", name);

    printf("Enter Employee Salary: ");
    scanf("%f", &salary);

    tax = salary * 0.10;

    printf("\nEmployee Details\n");
    printf("Employee ID: %d\n", id);
    printf("Employee Name: %s\n", name);
    printf("Employee Salary: %.2f\n", salary);
    printf("Income Tax (10%%): %.2f\n", tax);

    return 0;
}
