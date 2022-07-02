#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point 
 *Return: Always 0 (Success)
*/
Int main(void)
{
        Int n;
 
        Srand(time(0));
        n = rand() - RAND_MAX / 2;
        
        if (n > 0)
                Printf("%d is positive \n", n);
        else if (n == 0)
                Printf("%d is zero \n", n);
        else 
                Printf("%d is positive \n", n);

        return (0);
}
