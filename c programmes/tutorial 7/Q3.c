#include <stdio.h>
int main (void)
{
    //assing variables
    int factorial=1;
    int count=1;
    int number;

    printf("Enter the number N :"); //prompt for input
    scanf("%d", &number); //read number from user


    while(count<=number)
    {
       factorial *= count;

       ++count;

    }
    printf("The factorial of %d is:%d" , number , factorial); //print the number of factorial
    return 0;
}
