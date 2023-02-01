/******************************************************************************
Q-18 Write a program to draw the following patterns

*******************************************************************************/

#include <stdio.h>

int main()
{
    int i,j;
    for(i=1;i<=9;i++)
    {
        for(j=1;j<=9;j++)
        {
            if(i<=5)
            {
                if(j>=6-i && j<=4+i)
                printf(" *");
                else
                printf("  ");
            }
            else if(i>=6)
            {
                if(j>=i-4 && j<=14-i)
                printf(" *");
                else
                printf("  ");
            }
            else
            printf("  ");
        }
        printf("\n\n");
    }

    return 0;
}

         *

       * * *

     * * * * *

   * * * * * * *

 * * * * * * * * *

   * * * * * * *

     * * * * *

       * * *

         *
 
#include <stdio.h>

int main()
{
    int i,j;
    for(i=1;i<=9;i++)
    {
        for(j=1;j<=9;j++)
        {
    (i<=5)?(j>=6-i && j<=4+i)?printf(" *"): printf("  "):(j>=i-4 && j<=14-i)?printf(" *"):printf("  ");
        }
        printf("\n\n");
    }

    return 0;
 
}
