#include <stdio.h>
#include<stdbool.h>
int main(){

int hour;
float fare;
float distance;

printf("Enter Travelled Distance: ");
scanf("%f",&distance);    
printf("Enter Hour of The Day: ");
scanf("%d",&hour);

if((distance<=0) || ((hour>=24 || hour<0))){    // Validating Inputs
    bool in_distance = distance<=0;
    bool in_time = (hour>=24 || hour<0);

    if (in_distance)
    {
        printf("Invalid Distance!");
    }
    else if (in_time)
    {
        printf("Invalid Time!");
    }
}
else{

if (1>=distance){
    fare = 50;
    if (((hour>=0)&&(hour<6))||(hour<24 && hour>22))
    {
    fare = fare + 40;   // Adding Night Surcharge
    printf("The Total Fare is with added night surcharge: %.2f",fare);
    }
    else
    printf("The Total Fare is: %.2f",fare);
    
}
else{
    fare = ((distance-1)*22) + 50;
    if (((hour>=0)&&(hour<6))||(hour<24 && hour>22))
    {
    fare = fare + 40;   // Adding Night Surcharge
    printf("The Total Fare is: %.2f",fare);
    }
    else
    printf("The Total Fare is: %.2f",fare);
}
}
    return 0;
}