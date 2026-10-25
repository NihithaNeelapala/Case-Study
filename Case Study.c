#include<stdio.h>
int main()
{
int choice;
float balance,amount;
printf("Enter current balance:");
scanf("%f",&balance);
printf("\n 1.Balance Inquiry");
printf("\n 2.Cash Withdrawal");
printf("\n 3.Cash Deposit");
printf("\n Enter your choice:");
scanf("%d",&choice);
switch (choice)
 { 
   case 1:
        printf("\nCurrent balance: %.2f",balance);
        break;
   case 2:
        printf("\nEnter withdrawal amount:");
        scanf("%f",&amount);
    if(amount <= balance && amount > 0)
    {
      balance -= amount;    
      printf("\nTransaction successful");
      printf("\nRemaining balance: %.2f",balance);
    }
    else
    {
      printf("\nInsufficient balance");
    }   
    break; 
   case 3:
        printf("Enter deposit amount:");
        scanf("%f",&amount);
    if (amount > 0)
    {   
      balance += amount ;   
      printf("\nDeposit succesuful");
      printf("\nUpdated balance: %.2f",balance);
    }  
    else
    {
      printf("\nInvalid deposit amount");
    }
    break;
   default:
        printf("Invalid option");  
 }             
  return 0;   
}