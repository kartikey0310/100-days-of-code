// Define a struct with an enum Gender and print the person's gender.

#include <stdio.h>

enum Gender { MALE , FEMALE , OTHER } ;

struct Person
{
    char name[50] ;
    int age ;
    enum Gender gender ;
} ;

int main() 
{
    struct Person p ;
    int choice ;

    printf("Enter name: ");
    scanf("%49s", p.name);

    printf("Enter age: ");
    scanf("%d", &p.age);

    printf("Enter gender (0 = MALE, 1 = FEMALE, 2 = OTHER): ");
    scanf("%d", &choice);

    p.gender = (enum Gender)choice ;

    printf("\nName   : %s\n", p.name);
    printf("Age    : %d\n", p.age);

    switch ( p.gender )
    {
        case MALE:
            printf("Gender : Male\n");
            break ;

        case FEMALE:
            printf("Gender : Female\n");
            break ;

        case OTHER:
            printf("Gender : Other\n");
            break ;

        default:
            printf("Gender : Invalid\n");
    }

    return 0 ;
}