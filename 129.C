// Read all integers from numbers.txt, then print their sum and average.

#include <stdio.h>
int main() 
{
    FILE *fp ;
    int num , sum = 0 , count = 0 ;

    fp = fopen("numbers.txt", "r");

    if ( fp == NULL )
    {
        printf("Error: could not open numbers.txt\n");
        return 1 ;
    }

    while ( fscanf(fp, "%d", &num) == 1 )
    {
        sum = sum + num ;
        count++ ;
    }

    fclose(fp);

    if ( count == 0 )
    {
        printf("The file has no numbers.\n");
        return 0 ;
    }

    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", (float)sum / count);

    return 0 ;
}