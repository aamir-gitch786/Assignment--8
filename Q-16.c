/******************************************************************************
Q-16 Write a program to draw the following patterns

*******************************************************************************/

#include <stdio.h>

int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=9;j++)
        {
            if( j==6-i||i==5||j==4+i)
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

       *   *

     *       *

   *           *

 * * * * * * * * *
 */
