#include<stdio.h>
int main(){

int Number_ofdays;
int book_type;
int priority_membership;
int fine;
float total_fine;

printf("Enter Number Of Late Days: ");
scanf("%d",&Number_ofdays);

printf("Enter Book Type (1 is Regular, 2 is Reference and 3 is Rare): ");
scanf("%d",&book_type);

printf("Priority Membership (1 for yes and 0 for no): ");
scanf("%d",&priority_membership);

if (book_type==1)
{
    if(Number_ofdays<=7){
     fine = 5*Number_ofdays;
}
else{
     fine = ((Number_ofdays-7)*10)+(7*5);
}
}
else if (book_type==2){
     fine = Number_ofdays*15;
}
else if (book_type==3 ){

     fine = Number_ofdays*30;
     if (Number_ofdays>10)
     {
     
         printf("Banned From Borrowing!");
     }
     
}
if ((priority_membership==1) && (book_type != 3))
{
     total_fine = fine - (fine * 0.2);
}
else{
          total_fine = fine;

}
printf("The Total FIne Is: %.2f",total_fine);
    return 0;
}