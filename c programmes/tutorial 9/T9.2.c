#include<stdio.h>
int main (void)
{
    int MOtion[5];
    int value=0;
    int no=1,i;

    for(i=1;i<=5;i++)
    {
        printf("ENTER THE VALUE %d:",no);
        scanf("%d", &MOtion[value]);
        no++;
        value++;
    }
    printf("\n%d  %d  %d  %d  %d\n",MOtion[0],MOtion[1],MOtion[2],MOtion[3],MOtion[4]);
    printf("AFTER ROTATE\n");
    printf("\n%d  %d  %d  %d  %d\n",MOtion[1],MOtion[2],MOtion[3],MOtion[4],MOtion[0]);

    return 0;
}
