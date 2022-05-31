#include <stdio.h>
int main(void)
{
    int count=1,average=0,marks=0,total=0; //assing variables

    while(count<=5)
    {
        printf("Enter the marks:");  //prompt for input
        scanf("%d" , &marks); //read item_price from user


        total = total + marks;

        count++;
    }

        average = total / 5;

    if (average>45)
    {
        printf("passed"); //print the result
    }
    else
    {
        printf("Failed "); //print the result
    }

    return 0;
}

