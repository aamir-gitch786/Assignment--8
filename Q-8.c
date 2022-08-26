/******************************************************************************
Q-8 Write a program to draw the following patterns

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i,j,k;
    for(i=1;i<=4;i++)
    {k=0;//important !
        for(j=1;j<=7;j++)
        {
            if(j>=5-i && j<=3+i)
            {
                if(j<=4)
                { k++;
                    printf("%d",k);


                }
                else
                { k--;
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
   1
  121
 12321
1234321
*/
