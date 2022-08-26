/******************************************************************************
Q-9 Write a program to draw the following patterns

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i,j,k;
    for(i=1;i<=4;i++)
    {k=0;
        for(j=1;j<=7;j++)
        {
            if(j>=i && j<=8-i)
            {
               if(j<=4)
               {k++;
                   printf("%d",k);
               }
               else
               {k--;
                   printf("%d",k);
               }
            }
            else
            printf(" ");
        }
        printf("\n");
    }

    return 0;
}
/*
1234321
 12321
  121
   1
*/
