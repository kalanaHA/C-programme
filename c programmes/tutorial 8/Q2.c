#include<stdio.h>
int main (void)
{
//assing variables
  int i;
  char name[10];
  char type;
  char C,S ;
  int consulting =0;
  int scanning =0;
  int testing =0;

   FILE * X;
   X = fopen(" appointment.dat ", "w");//create file


        for(i = 1; i<=5; ++i)//start for loop
        {

            printf("Input patient name:");//prompt for input
            scanf("%s", name);//read name from user


            printf("Input  type of appointment( Consulting-C,Scanning-S or Testing-T):");//prompt for input
             scanf("\t");
            scanf("%c", &type);//read appointment type from user


            fprintf(X, "%s  %c\n", name , type);//storing data




        }//stop loop

        i = 5;

        fclose(X);//file close
        if(i==5)
        {

   X = fopen(" appointment.dat ", "r");//open file for reading

        while (!feof(X))//start while loop
            {

                fscanf(X, "%c", &type);//get value for type

               if( type == 'C')//check type
                {
                    ++consulting;
                }

               if( type == 'S'))//check type
                {
                    ++scanning;
                }
                if( type == 'T'))//check type
                {
                    ++testing;
                }


            }//stop loop


            printf(" Appointment Type     Number of Patients  \n");//print  number of patients of each types
            printf("    Consulting             %d \n " ,consulting );
            printf("     Scanning              %d \n" , scanning );
            printf("      Testing              %d \n " , testing );

            return 0;
        }

}
