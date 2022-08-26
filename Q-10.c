/******************************************************************************
Q-10 Write a program to draw the following patterns

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i,j,k;
    for(i=1;i<=4;i++)
    { k=0;
        for(j=1;j<=7;j++)
        {
            if((j>=1 && j<=5-i) || (j>=3+i && j<=7))
            {
            if(j<=4)
              {   k++;
                printf("%d",k);
              }
            else
             {if(i==1)
                {k--;
                printf("%d",k);}
                else
                {k--;
                printf("%d",k+1);
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
1234321
123 321
12   21
1     1
*/
