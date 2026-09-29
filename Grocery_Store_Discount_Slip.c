#include<stdio.h>
int main(){

float bill_amount;
int membership_status;
float total_payable_bill;

printf("Enter The Total Bill Amount: ");
scanf("%f",&bill_amount);

printf("Enter The Membership Status (0 -- No, 1 -- Yes): ");
scanf("%d",&membership_status);

if (membership_status==1)
{
    if(bill_amount<500){
        total_payable_bill = bill_amount;
    }
else if(bill_amount>=500 && bill_amount<=1999){
    total_payable_bill = bill_amount-(bill_amount*(0.1));
}
else if(bill_amount>=2000){
    total_payable_bill = bill_amount-(bill_amount*(0.15));
}
    // do all the wrok for member
    printf("\nThe Total Final Bill is: %.2f",bill_amount);
    printf("\nThe Total Payable Amount After Applied Discount for Members is: %.2f",total_payable_bill);
}


else if (membership_status==0)
{
    if(bill_amount<500){
        total_payable_bill = bill_amount;
    }
else if(bill_amount>=500 && bill_amount<=1999){
    total_payable_bill = bill_amount-(bill_amount*(0.05));
}
else if(bill_amount>=2000){
    total_payable_bill = bill_amount - (bill_amount*(0.08));
}
    // do all the wrok for member
    printf("\nThe Total Final Bill is: %.2f",bill_amount);
    printf("\nThe Total Payable Amount After Applied Discount for Non-Members is: %.2f",total_payable_bill);
    //do all the wrok for non members499.5

}


else 
printf("\nEnter Valud Membership Status!");


    return 0;
}