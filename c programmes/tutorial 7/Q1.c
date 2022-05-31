
#include <stdio.h>

void main()
{
  //declare the variables
  int array[3][3],i,j;


       printf("Input the number:\n");
  for(i=0;i<3;i++)
  {
      for(j=0;j<3;j++)
      {
	      printf("element - [%d],[%d] : ",i,j);
	      scanf("%d",&array[i][j]);
      }
  }

  for(i=0;i<3;i++)
  {
      printf("\n");
      for(j=0;j<3;j++)
           printf("%d\t",array[i][j]);
  }
 printf("\n\n");
}
