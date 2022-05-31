#include<stdio.h>

//function declaration
double cube(double number);

int main (void)
{
    //declare the variables
    int number;
    double c;
    //input the value
    printf("Enter the number:");
    scanf("%d",&number);

    c=cube(number);
    //display the output
    printf("Cube of %d is %2.f",number,c);

}
  //function to find cube of any number
    double cube(double number)
    {
        return(number*number*number);
    }
