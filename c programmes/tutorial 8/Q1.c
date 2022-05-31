#include<stdio.h>
int main (void)
{

  int i;//assing variables

   FILE * cfPtr;
   cfPtr = fopen(" number.dat ", "w+");//create file

   if (cfPtr == NULL)

   {
     printf("File cannot be create");//print the error message
     return -1;
   }

           for(i = 1; i != 0; ++i)
                    {
                      int number;


                         printf("Enter the number,-99 to the end:"); //prompt for input
                         scanf("%d", &number); //read number


                         if( number != -99 )//checking
                         {
                             fclose(cfPtr);
                              int check_number;
                              FILE * cfPtr;
                               cfPtr = fopen(" number.dat " , "r+");
                               while (!feof(cfPtr))//while loop start
                                {
                                    fscanf(cfPtr, "%d", &check_number);

                                     if( number == check_number)
                                     {
                                          printf("THIS NUMBER IS ADDED\n");//print the error message
                                     }

                                }//end

                                    if(number != check_number)
                                     {
                                         fprintf(cfPtr, "%d\n", number);//storing data
                                     }
                         }

                         else
                         {
                             fclose(cfPtr);
                             FILE * cfPtr;
                             cfPtr = fopen(" number.dat " , "r");//open file for reading

                            fscanf(cfPtr, "%d", &number);

                             while (!feof(cfPtr))
                                {
                                     printf ("%d\n" , number);//display the number
                                     fscanf(cfPtr, "%d" , &number);
                                }
                            return 0;
                         }
                    }

}
