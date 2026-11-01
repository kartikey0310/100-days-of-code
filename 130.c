// Store multiple student records in a file using fprintf(), then read them back using fscanf().

#include <stdio.h>
int main() 
{
    FILE *fp ;
    int n , i , roll ;
    float marks ;
    char name[50] ;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    fp = fopen("students.txt", "w");

    if ( fp == NULL )
    {
        printf("Error: could not create students.txt\n");
        return 1 ;
    }

    for ( i = 1 ; i <= n ; i++ )
    {
        printf("Enter name, roll number and marks of student %d: ", i);
        scanf("%49s %d %f", name, &roll, &marks);

        fprintf(fp, "%s %d %.2f\n", name, roll, marks);
    }

    fclose(fp);

    printf("Records saved successfully.\n");

    fp = fopen("students.txt", "r");

    if ( fp == NULL )
    {
        printf("Error: could not open students.txt\n");
        return 1 ;
    }

    printf("\nName\tRoll\tMarks\n");

    while ( fscanf(fp, "%49s %d %f", name, &roll, &marks) == 3 )
    {
        printf("%s\t%d\t%.2f\n", name, roll, marks);
    }

    fclose(fp);

    return 0 ;
}