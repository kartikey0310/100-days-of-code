#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Employee {
    char        name[50];
    int         emp_id;
    float       salary;
    struct Date joining_date;   /* nested structure */
};

int main(void) {
    struct Employee e;

    printf("Enter name: ");
    scanf(" %49[^\n]", e.name);

    printf("Enter employee ID: ");
    scanf("%d", &e.emp_id);

    printf("Enter salary: ");
    scanf("%f", &e.salary);

    printf("Enter joining date (dd mm yyyy): ");
    scanf("%d %d %d", &e.joining_date.day,
                      &e.joining_date.month,
                      &e.joining_date.year);

    printf("\n--- Employee Details ---\n");
    printf("Name         : %s\n", e.name);
    printf("Employee ID  : %d\n", e.emp_id);
    printf("Salary       : %.2f\n", e.salary);
    printf("Joining Date : %02d/%02d/%04d\n",
           e.joining_date.day, e.joining_date.month, e.joining_date.year);

    return 0;
}