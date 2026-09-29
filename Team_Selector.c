#include<Stdio.h>
int main(){

float batting_avg;
int matches_played;
int fitness_failure_status;

printf("Enter Batting Average: ");
scanf("%f",&batting_avg);

printf("Enter Matches Played: ");
scanf("%d",&matches_played);

printf("Enter Fitness Failure Status (1 means failed and 0 means passed) : ");
scanf("%d",&fitness_failure_status);
if (matches_played<5)
{
    printf("Rejected --- Insufficient Matches");
}
else if (fitness_failure_status==1)
{
    printf("Not Selected --- Fitness");
}


else{
if (batting_avg>=35 && matches_played>=10)
{
    printf("Selected");
}
else if ((batting_avg>=25 && batting_avg<=34.99) && matches_played>=20 )
{
    if (fitness_failure_status!=1)
    {
            printf("Selected (Experience Quota)");

    }
    else {
        printf("Rejected --- Fitness");
    }
    
}

}


    return 0;
}