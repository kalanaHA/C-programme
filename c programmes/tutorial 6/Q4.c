//IT20151492
//Warnakulasuriyage K.H.A
//Group 7.1
//Question 4

#include <stdio.h>
int main (void)
{
        char grade, A,B,C,F;

        printf("Enter Grade:");
        scanf("%c",&grade);

        if(grade=='A'||grade=='a')
            {
                printf("Excellent\n");
            }
        else
           {
            if(grade=='B'||grade=='b')
                {
                    printf("Good\n");
                }
            else
                {
                  if(grade=='C'||grade=='c')
                      {
                           printf("Satisfactory\n");
                      }
                  else
                      {
                        if (grade=='F'||grade=='f')
                             {
                                  printf("Needs improvement\n");
                             }
                        else
                             {
                                  printf("Enter valid grade\n");
                             }
                      }
                }
           }
         return 0;
}



