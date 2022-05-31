//IT20151492
//Warnakulasuriyage K.H.A
//Group 7.1
//Question 7

#include<stdio.h>

int main(void)
{

 float salary,bonus,full_salary;
 int employeeCat;

  printf("Enter Employee Catagory:");
  scanf("%d",&employeeCat);

  printf("Enter Salary:");
  scanf("%f",&salary);

  if(employeeCat==1)
  {
  	  bonus = salary*0.05;

  	  full_salary = salary+bonus;
  }
  else
  {
      if(employeeCat==2)
        {
  	      bonus = salary*0.1;

  	      full_salary = salary+bonus;
        }
      else

        {
          if (employeeCat==3)
            {
  	           bonus = salary*0.15;

  	           full_salary = salary+bonus;
            }
          else
            {
	          printf("Wrong Catagory");

            }


        }

  }

        printf("Bonus=%f\n",bonus);
        printf("full Salary=%f\n",full_salary);

	    return 0;
}
