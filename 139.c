// Print all enum names and their integer values using a loop.

#include <stdio.h>

enum Role { ADMIN , USER , GUEST } ;

int main() 
{
    char *names[] = { "ADMIN" , "USER" , "GUEST" } ;
    enum Role r ;

    for ( r = ADMIN ; r <= GUEST ; r++ )
    {
        printf("%s = %d\n", names[r], r);
    }

    return 0 ;
}