//IT20151492
//Warnakulasuriyage k.H.A
//Group 7.1
//Question 2

#include<stdio.h>
int main(void)
{
    int remain ;
    int no;

    printf(" Enter a Number:");
    scanf("%d",&no);

    remain= no%2;

    if(remain==0)
    {
        printf("It is an Even Namber");
    }
    else
    {
        printf("It is an Odd Namber");
    }
    return 0;
}
