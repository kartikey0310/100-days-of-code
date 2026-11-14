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
        scanf(" %49[^\n]", s[i].name);

        printf("Enter roll number: ");
        scanf("%d", &s[i].roll_no);

        printf("Enter marks: ");
        scanf("%f", &s[i].marks);
    }

    /* Find the highest marks */
    float max = s[0].marks;
    for (int i = 1; i < N; i++)
        if (s[i].marks > max)
            max = s[i].marks;

    /* Print every student having the highest marks (handles ties) */
    printf("\n--- Highest Marks ---\n");
    for (int i = 0; i < N; i++) {
        if (s[i].marks == max) {
            printf("Name    : %s\n", s[i].name);
            printf("Roll No : %d\n", s[i].roll_no);
            printf("Marks   : %.2f\n\n", s[i].marks);
        }
    }

    return 0;
}