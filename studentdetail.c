#include <stdio.h>

struct Student
{
    int rollno;
    char name[50];
};

int main()
{
    struct Student s[100];
    int n, i;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("\nEnter details of student %d\n", i + 1);

        printf("Enter Roll Number: ");
        scanf("%d", &s[i].rollno);

        printf("Enter Name: ");
        scanf("%49s", s[i].name);
    }

    printf("\nStudent Details:\n");

    for (i = 0; i < n; i++)
    {
        printf("\nRoll Number: %d", s[i].rollno);
        printf("\nName: %s\n", s[i].name);
    }

    return 0;
}