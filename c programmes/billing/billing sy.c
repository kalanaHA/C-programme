#include <stdio.h>
int main (void)
{
    //assing the variable
    int count1 = 1 ;
    float net_A_total = 0 ;

    int rice_quantity   = 90   ,rice_price   =105;
    int salmon_quantity = 50   ,salmon_price =275;
    int sugar_quantity  = 60   ,sugar_price  =120;
    int soap_quantity   = 70   ,soap_price   =60;
    int cheese_quantity = 40   ,cheese_price =340;


    while(count1<=2)
    {
       //assing the variable
       int count2 = 1 ;
       int Item_code;
       float Item_quantity = 0 , total =0 , total1 = 0 , total2 = 0 , total3 = 0 , total4 = 0 , total5 = 0 , discount = 0 , amount = 0   ;
       char type, ch = 'Y';
       int rice_qty = 0 , salmon_qty = 0 , sugar_qty = 0 , soap_qty = 0 , cheese_qty = 0 ;

           //print the Table of items
       printf("       ------------------------------------\n");
       printf("                WILSON TRADCEMTER\n"    );
       printf("       ------------------------------------\n\n");
       printf("-------------------------------------------------------\n");
       printf(" Item_Code | Item_Name  |  Item_Quantity |  Item_Price \n" );
       printf("-------------------------------------------------------\n");
       printf("    01     |   Rice     |     %dKg       |      %d(1Kg)\n"  , rice_quantity   , rice_price );
       printf("    02     | Salmon tin |     %d         |      %d\n"       , salmon_quantity , salmon_price );
       printf("    03     |   Sugar    |     %dKg       |      %d(1Kg)\n"  , sugar_quantity  , sugar_price );
       printf("    04     |   Soap     |     %d         |      %d\n"       , soap_quantity   , soap_price );
       printf("    05     |   Cheese   |     %d         |      %d\n\n"     , cheese_quantity , cheese_price );

       while(count2<=5)
       {



       printf("Enter the Item Code:");//prompt for input
       scanf("%d" , &Item_code);//read item_code from user


       printf("Enter the Item Quantity:");//prompt for input
       scanf("%f" , &Item_quantity);//read item_quantity from user

       printf("\n");

       if( Item_code==01 )//check the item code
       {
           if( Item_quantity < rice_quantity )//check the item quantity
           {
               total1 = Item_quantity * rice_price ;//calculate item 1 total

               total = total + total1 ;//calculate full total

               rice_quantity = rice_quantity - Item_quantity ;//calculate left items


               rice_qty = Item_quantity ;//provide new values

               count2++;
           }
           else
           {
               printf("------------------------------------------------------\n");
               printf("You can't get this item please check the Item Quantity\n");//print the error message
               printf("------------------------------------------------------\n\n");
           }
       }
       else
       {
           if( Item_code==02 )//check the item code
           {
               if( Item_quantity < salmon_quantity )//check the item quantity
               {
                   total2 = Item_quantity * salmon_price ;//calculate item 2 total

                   total = total + total2 ;//calculate full total

                   salmon_quantity = salmon_quantity - Item_quantity ;//calculate left items


                   salmon_qty = Item_quantity ;//provide new values

                   count2++;
               }
               else
               {
                   printf("------------------------------------------------------\n");
                   printf("You can't get this item please check the Item Quantity\n");//print the error message
                   printf("------------------------------------------------------\n\n");
               }
           }
           else
           {
               if( Item_code==03 )//check the item code
               {
                   if( Item_quantity < sugar_quantity )//check the item quantity
                   {
                       total3 = Item_quantity * sugar_price ;//calculate item 3 total

                       total = total + total3 ;//calculate full total

                       sugar_quantity = sugar_quantity - Item_quantity ;//calculate left items


                       sugar_qty = Item_quantity ;//provide new values

                       count2++;
                   }
                   else
                   {
                      printf("------------------------------------------------------\n");
                      printf("You can't get this item please check the Item Quantity\n");//print the error message
                      printf("------------------------------------------------------\n\n");
                   }

               }
               else
               {
                   if( Item_code==04 )//check the item code
                   {
                       if( Item_quantity < soap_quantity )//check the item quantity
                       {
                           total4 = Item_quantity * soap_price ;//calculate item 4 total

                           total = total + total4 ;//calculate full total

                           soap_quantity = soap_quantity - Item_quantity ;//calculate left items

                           soap_qty = Item_quantity ;//provide new values

                           count2++;
                       }
                       else
                       {
                           printf("------------------------------------------------------\n");
                           printf("You can't get this item please check the Item Quantity\n");//print the error message
                           printf("------------------------------------------------------\n\n");
                       }
                   }
                   else
                   {
                       if( Item_code==05 )//check the item code
                       {

                           if( Item_quantity < cheese_quantity )//check the item quantity
                           {
                               total5 = Item_quantity * cheese_price ;//calculate item 5 total

                               total = total + total5 ;//calculate full total

                               cheese_quantity = cheese_quantity - Item_quantity ;//calculate left items

                               cheese_qty = Item_quantity ;//provide new values

                               count2++;
                           }
                           else
                           {
                               printf("------------------------------------------------------\n");
                               printf("You can't get this item please check the Item Quantity\n");//print the error message
                               printf("------------------------------------------------------\n\n");
                           }
                       }
                       else
                       {
                               printf("----------------------------------------------\n");
                               printf("          ITEM CODE IS INCORRECT!!!\n");  //print the error message
                               printf("----------------------------------------------\n\n");
                       }

                   }
               }
           }
       }

    }

    if( total >= 8000 )
    {
      discount = total * 15/100 ;//calculate discount

      printf("Your NET AMOUNT :%f\n" , (total - discount) );//print the net amount from customer's

      printf("Enter the AMOUNT YOU PAY:");//prompt for input
      scanf("%f" , &amount );//read amount from user

    }
    else
    {
        if( total >= 5000 )
        {
            discount = total * 10/100 ;//calculate discount

            printf("Your NET AMOUNT :%f\n" , (total - discount) );//print the net amount from customer's

            printf("Enter the AMOUNT YOU PAY:");//prompt for input
            scanf("%f" , &amount );//read amount from user
        }
        else
        {
            discount = total * 2/100 ;//calculate discount

            printf("Your NET AMOUNT :%f\n" , (total - discount) );//print the net amount from customer's

            printf("Enter the AMOUNT YOU PAY:");//prompt for input
            scanf("%f" , &amount );//read amount from user

            printf("\n\n");
        }
    }

                //print the Customer's Bill
     printf("------------------------------------------------\n");
     printf("                   INVOICE \n");
     printf("------------------------------------------------\n");
     printf("    ITEM        QTY       PRICE         AMOUNT  \n");
     printf("------------------------------------------------\n");
     printf("     Rice       %dKg      %d(1Kg)      %f\n"       , rice_qty   , rice_price   , total1 );
     printf("  Salmon tin    %d        %d           %f\n"       , salmon_qty , salmon_price , total2 );
     printf("     Sugar      %dKg      %d(1Kg)      %f\n"       , sugar_qty  , sugar_price  , total3 );
     printf("     Soap       %d        %d             %f\n"     , soap_qty   , soap_price   , total4 );
     printf("    Cheese      %d        %d           %f\n"       , cheese_qty , cheese_price , total5 );
     printf("------------------------------------------------\n");
     printf("  FULL AMOUNT                          %f\n"     , total );
     printf("  DISCOUNT                            -%f\n"     , discount );
     printf("                                     -----------\n");
     printf("  NET AMOUNT                            %f\n"     , (total - discount) );
     printf("------------------------------------------------\n");
     printf("  CASH                                  %f\n"     , amount );
     printf("CASH BALANCE                            %f\n"     , amount - (total - discount) );
     printf("------------------------------------------------\n");
     printf("                   THANK YOU \n"                   );
     printf("------------------------------------------------\n\n");


     net_A_total =  net_A_total + (total - discount) ; //calculate net amount total



     count1++;

    }

               //print the item left in shop
       printf("------------------------------------------------\n");
       printf("      WE HAVE STOPPED DELIVERING GOODS TODAY\n"    );
       printf("------------------------------------------------\n");

       printf("       --The number of items left--\n");
       printf("------------------------------------------\n");
       printf(" Item_Code | Item_Name  |  Item_Quantity |\n" );
       printf("------------------------------------------\n");
       printf("    01     |   Rice     |     %dKg       |\n"  , rice_quantity   );
       printf("    02     | Salmon tin |     %d         |\n"  , salmon_quantity );
       printf("    03     |   Sugar    |     %dKg       |\n"  , sugar_quantity  );
       printf("    04     |   Soap     |     %d         |\n"  , soap_quantity   );
       printf("    05     |   Cheese   |     %d         |\n\n", cheese_quantity );

       printf("THE AMOUNT RECEIVED TODAY:%f\n\n" , net_A_total); //print the received amount

    return 0;
}
