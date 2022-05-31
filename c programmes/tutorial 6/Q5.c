//IT20151492
//Warnakulasuriyage K.H.A
//Group 7.1
//Question 5

#include<stdio.h>
char main (void)
{
	  char grade, A,B,C,F;

        printf("Enter Grade:\n");
        scanf("%c",&grade);

       /*  char grade, A,B,C,F;

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
                }*/
	switch(grade)
	{
		case'A':printf("Excellent\n");
			break;
		case'B':printf("Good\n");
            break;
		case'C':printf("Satisfactory\n");
            break;
		case'F':printf("Needs improvement\n");
            break;
		defalult:printf("Enter valid grade\n");
	}
	return 0;
}


