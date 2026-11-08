// Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on the role.

#include <stdio.h>

enum Role { ADMIN , USER , GUEST } ;

int main() 
{
    enum Role role ;
    int choice ;

    printf("Enter the role (0 = ADMIN, 1 = USER, 2 = GUEST): ");
    scanf("%d", &choice);

    role = (enum Role)choice ;

    switch ( role )
    {
        case ADMIN:
            printf("Welcome, Admin! You have full access.\n");
            break ;

        case USER:
            printf("Welcome, User! You can view and edit your own data.\n");
            break ;

        case GUEST:
            printf("Welcome, Guest! You have read-only access.\n");
            break ;

        default:
            printf("Invalid role.\n");
    }

    return 0 ;
}