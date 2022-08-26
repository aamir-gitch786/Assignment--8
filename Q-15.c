/******************************************************************************
Q-15 Write a program to draw the following patterns

*******************************************************************************/

#include <stdio.h>

int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j==5 || j==6-i||i==5)
            printf(" *");
            else
            printf("  ");
        }
        printf("\n\n");
    }

    return 0;
}
/*
        *

       * *

     *   *

   *     *

 * * * * *
 */
