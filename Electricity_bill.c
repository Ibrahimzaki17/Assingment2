#include <stdio.h>
 int main (){
   char customerID[1000];
   char customerName[50];
   int unitConsumed;
   float chargesperUnit, totalamounttopay;
   
   printf("Enter ID: ");
   scanf("%s",&customerID);
   printf("Enter name: ");
   scanf("%s",&customerName);
   printf("Unit Consumed: ");
   scanf("%d",&unitConsumed);
   
   if (unitConsumed <200) {
     chargesperUnit= 1.20;
     }
     else if ( unitConsumed < 400){
     chargesperUnit = 1.50;
     }
     else if ( unitConsumed < 600){
     chargesperUnit = 1.80;
     }
     else {
     chargesperUnit=2.00 ;
     }
     //total bill
     totalamounttopay = unitConsumed * chargesperUnit;
     //Apply discount if applicable 
     if (totalamounttopay > 400 ) {
     totalamounttopay *= 0.85; // 15% discount 
     }
     
     totalamounttopay >= 100;
     
     //Display  the output
     printf("\n•••Electricity Bill Details•••\n");
     printf("Customer ID: %s\n",customerID);
     printf("Customer Name: %s\n",customerName);
     printf("Units Consumed: %d\n",unitConsumed);
     printf("Total Amount to pay: %.2f\n",totalamounttopay);    
          
 return 0;
 }