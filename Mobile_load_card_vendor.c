#include<stdio.h>
int main(){

float load_amount;
float loaded_balance;
int net_code;
int weekend_status;

printf("Enter Load Amount: ");
scanf("%f",&load_amount);

printf("Enter Network Code (1 = Jazz, 2 = Telenor, and 3 = Ufone): ");
scanf("%d",&net_code);

printf("Enter Weekend Status: (1 = weekend and 0 = weekday): ");
scanf("%d",&weekend_status);

if (load_amount<100)
{
    loaded_balance = load_amount;
}
else if(load_amount>=100 &&  load_amount<=499 && weekend_status==1){
if (net_code!=3)
{

    loaded_balance = load_amount + (load_amount*0.1);

}
else{
        loaded_balance = load_amount + (load_amount*0.05);

}

}
else if(load_amount>=100 &&  load_amount<=499 && weekend_status==0){

        loaded_balance = load_amount + (load_amount*0.05);



}
else if (load_amount>=500 && (net_code==1 || weekend_status==1)){

        loaded_balance = load_amount + (load_amount*0.2);

}
else{
            loaded_balance = load_amount + (load_amount*0.12);

}

float Bonus = loaded_balance - load_amount;
float percentage = (Bonus/load_amount) * 100;

printf("\nBonus Amount: %.2f and Percnatge: %.2f",Bonus,percentage);
printf("\nFinal Loaded Balance: %.2f",loaded_balance);
    return 0;
}