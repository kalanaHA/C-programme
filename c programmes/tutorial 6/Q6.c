//IT20151492
//Warnakulasuriyage K.H.A
//Group 7.1
//Question 6

#include<stdio.h>
char main (void)
{
char grade;
printf("Enter Your grade:");
scanf("%c",&grade);

  if (grade=='A')
  {
      printf("Excellent");
  }
  else
  {
      if (grade=='B')
      {
          printf("Good");
      }
      else
      {
          if (grade=='C' || grade=='c')
          {
              printf("Satisfactory");
          }
          else
          {
              printf("Need Improvement");
          }
      }
  }
   return 0;
}
