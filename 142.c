#include <stdio.h>

#define N 5

struct Student {
    char  name[50];
    int   roll_no;
    float marks;
};

int main(void) {
    struct Student s[N];

    for (int i = 0; i < N; i++) {
        printf("\nStudent %d\n", i + 1);

        printf("Enter name: ");
        scanf(" %49[^\n]", s[i].name);      /* leading space skips leftover newline */

        printf("Enter roll number: ");
        scanf("%d", &s[i].roll_no);

        printf("Enter marks: ");
        scanf("%f", &s[i].marks);
    }

    printf("\n%-5s %-20s %-10s %s\n", "No.", "Name", "Roll No", "Marks");
    printf("---------------------------------------------------\n");
    for (int i = 0; i < N; i++)
        printf("%-5d %-20s %-10d %.2f\n", i + 1, s[i].name, s[i].roll_no, s[i].marks);

    return 0;
}