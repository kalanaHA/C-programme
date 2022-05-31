#include<stdio.h>
#define SIZE 10
int main (void)
{
    int st[SIZE];
    int student ;
    int i ;
    int total;
    int mean;

    for(i=1;i<=SIZE;i++)
    {
        printf("\nENTER MARKS:");
        scanf("%d" , &st[student]);

        if((0<=st[student]) && (st[student]<=20))
        {
          total+=st[student];
        }
        else
        {
            printf("\nREENTER MARKS\n");
            i--;
        }


    }

    mean = total / 10 ;

    printf("\nMEAN OF STUDENT MARKS:%d", mean);

    return 0 ;

}
