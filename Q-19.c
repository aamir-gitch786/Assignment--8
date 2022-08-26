/******************************************************************************
Q-19 Write a program to draw the following patterns

*******************************************************************************/

#include <stdio.h>

int main()
{
    int i,j;
    for(i=1;i<=13;i++)
    {
        for(j=1;j<=19;j++)
        {
          if(i<=3)
          {
             if((j>=4-i && j<=6+i) || (j>=14-i && j<=16+i))
               printf("*");
             else
               printf(" ");
          }
          else if(i==4)
          {
              if(j<=6 || j>=15)
              printf("*");
              else if(j==7)
              printf(" ");
              else if(j==8 )
              printf("M");
              else if(j==9)
              printf("Y");
              else if(j==10)
              printf("S");
              else if(j==11)
              printf("I");
              else if(j==12)
              printf("R");
              else if(j==13)
              printf("G");
              else if(j==14)
              printf(" ");


          }
          else if(i>=5)
          {
              if(j>=i-3 && j<=23-i)
              printf("*");
              else
              printf(" ");
          }
          else
          printf(" ");
        }
        printf("\n");
    }

    return 0;
}
/*
  *****     *****
 *******   *******
********* *********
****** MYSIRG *****
 *****************
  ***************
   *************
    ***********
     *********
      *******
       *****
        ***
         *
 */
