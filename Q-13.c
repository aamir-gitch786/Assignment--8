/******************************************************************************
Q-13 Write a program to draw the following patterns

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i,j;
    char k;
    for(i=1;i<=7;i++)
    { k=64;
        for(j=1;j<=13;j++)
        {
            if((j>=1 && j<=8-i) || (j>=6+i && j<=13))
            {
            if(j<=7)
              {   k++;
                printf("%c",k);
              }
            else
             {if(i==1)
                {k--;
                printf("%c",k);}
                else
                {k--;
                printf("%c",k+1);
                }
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
ABCDEFGFEDCBA
ABCDEF FEDCBA
ABCDE   EDCBA
ABCD     DCBA
ABC       CBA
AB         BA
A           A
*/
