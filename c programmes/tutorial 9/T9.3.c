#include<stdio.h>

int main(void)
{
    int num[10];
    int number=1;
    int i,j,k,n=1;

    for(i=0;i<10;i++)
    {
        printf("ENTER NUMBER %d :",n);
        scanf("%d", &num[number]);
        number++;
        n++;
    }

    number=1;

    printf("Element  Value  Histogram ");

    for(j=0;j<10;j++)
    {
        printf("\n");
        printf("  %d    %d" ,j,num[number]);

        for(k=0;k<num[number];k++)
        {
            printf("                 %c",'*');
        }
        printf("\n");
        number++;
    }
    return 0;
}
