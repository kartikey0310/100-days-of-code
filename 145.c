#include <stdio.h>

#define N 5

struct Student {
    char  name[50];
    int   roll_no;
    float marks;
};

/* Returns the Student structure having the highest marks */
struct Student getTopper(struct Student s[], int n) {
    struct Student top = s[0];
    for (int i = 1; i < n; i++)
        if (s[i].marks > top.marks)
            top = s[i];
    return top;
}

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

    struct Student topper = getTopper(s, N);

    printf("\n--- Top Student ---\n");
    printf("Name    : %s\n", topper.name);
    printf("Roll No : %d\n", topper.roll_no);
    printf("Marks   : %.2f\n", topper.marks);

    return 0;
}