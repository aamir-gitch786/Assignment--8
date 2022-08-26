/******************************************************************************
Q-12 Write a program to draw the following patterns

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i,j;
    char k;
    for(i=1;i<=4;i++)
    {k=64;
        for(j=1;j<=7;j++)
        {
            if(j>=i && j<=8-i)
            {
                if(j<=4)
                {
                    k++;
                    printf(" %c",k);
                }
                else
                {
                    k--;
                    printf(" %c",k);
                }
            }
            else
            printf("  ");
        }
        printf("\n\n");
    }

    return 0;
}
/*
 A B C D C B A

   A B C B A

     A B A

       A
*/
