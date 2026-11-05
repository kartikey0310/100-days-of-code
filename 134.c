// Define an enum with SUCCESS, FAILURE and TIMEOUT, and print messages accordingly.

#include <stdio.h>

enum Status { SUCCESS , FAILURE , TIMEOUT } ;

int main() 
{
    enum Status result ;
    int choice ;

    printf("Enter the status (0 = SUCCESS, 1 = FAILURE, 2 = TIMEOUT): ");
    scanf("%d", &choice);

    result = (enum Status)choice ;

    switch ( result )
    {
        case SUCCESS:
            printf("Operation completed successfully.\n");
            break ;

        case FAILURE:
            printf("Operation failed.\n");
            break ;

        case TIMEOUT:
            printf("Operation timed out.\n");
            break ;

        default:
            printf("Invalid status.\n");
    }

    return 0 ;
}