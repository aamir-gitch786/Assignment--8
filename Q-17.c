/******************************************************************************
Q-17 Write a program to draw the following patterns

*******************************************************************************/

#include <stdio.h>

int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=9;j++)
        {
            if( j==i||i==1||j==10-i)
            printf(" *");
            else
            printf("  ");
        }
        printf("\n\n");
    }

    return 0;
}
/*
 * * * * * * * * *

   *           *

     *       *

       *   *

         *
 */
