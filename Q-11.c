/******************************************************************************
Q-11 Write a program to draw the following patterns

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i,j;
    char k;
    for(i=1;i<=5;i++)
    {k=64;
        for(j=1;j<=17;j++)
        {
            if(j>=6-i && j<=4+i)
            {
                if(j<=5)
                {
                    k++;
                    printf(" %c",k);//space left of k is  for pattern requrements
                }
                else
                {
                    k--;
                    printf(" %c",k);//space left of k is  for pattern requrements
                }
            }
            else
            printf("  ");//Duble space is  for pattern requrements
        }
        printf("\n\n");
    }

    return 0;

}
/*
         A

       A B A

     A B C B A

   A B C D C B A

 A B C D E D C B A
*/
