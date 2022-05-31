#include<stdio.h>
int main (void)
{

  int i;

   FILE * cfPtr;
   cfPtr = fopen(" number.dat ", "w+");

   if (cfPtr == NULL)

   {
     printf("File cannot be create");
     return -1;
   }

           for(i = 1; i != 0; ++i)
                    {
                      int number;


                         printf("Enter the number,-99 to the end:");
                         scanf("%d", &number);


                         if( number != -99 )
                         {
                             fclose(cfPtr);
                              int check_number;
                              FILE * cfPtr;
                               cfPtr = fopen(" number.dat ", "r+");
                               while (!feof(cfPtr))
                                {


                                     fscanf(cfPtr, "%d", &check_number);

                                     if( number == check_number)
                                     {
                                          printf("error message\n");


                                     }



                                }

                                    if(number != check_number)
                                     {
                                         fprintf(cfPtr, "%d\n", number);
                                     }


                         }

                         else
                         {
                             fclose(cfPtr);
                             FILE * cfPtr;
                             cfPtr = fopen(" number.dat ", "r");
                             if (cfPtr == NULL)

                              {
                                printf("File cannot be create");
                                fclose(cfPtr);
                                return -1;
                              }
                            fscanf(cfPtr, "%d", &number);
                             while (!feof(cfPtr))
                                {
                                     printf ("%d\n",number);
                                     fscanf(cfPtr, "%d", &number);
                                }
                            return 0;
                         }
                    }

}
