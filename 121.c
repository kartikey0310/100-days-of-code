// Create info.txt in write mode and save the user's name and age using fprintf().

#include <stdio.h>
int main() 
{
    FILE *fp ;
    char name[50] ;
    int age ;

    printf("Enter your name: ");
    scanf(" %[^\n]", name);

    printf("Enter your age: ");
    scanf("%d", &age);

    fp = fopen("info.txt", "w");

    if ( fp == NULL )
    {
        printf("Error: could not create the file.\n");
        return 1 ;
    }

    fprintf(fp, "Name: %s\n", name);
    fprintf(fp, "Age: %d\n", age);

    fclose(fp);

    printf("Data was successfully saved to info.txt\n");

    return 0 ;
}