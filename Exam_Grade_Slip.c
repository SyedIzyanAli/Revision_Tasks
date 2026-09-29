#include<stdio.h>
int main(){

int marks_obtained;

printf("Enter Marks Obtained Out Of 100: ");
scanf("%d",&marks_obtained);

if (marks_obtained<0 || marks_obtained>100)
{
printf("Invalid Marks!");
}

else{
if (marks_obtained>=90 && marks_obtained<=100)
{
    printf("\nGrade: A+");
    printf("\nResult: Pass");
}
else if(marks_obtained>=80 && marks_obtained<=89){

    printf("\nGrade: A");
    printf("\nResult: Pass");

}
else if (marks_obtained>=70 && marks_obtained<=79)
{
    
    printf("\nGrade: B");
    printf("\nResult: Pass");
}
else if (marks_obtained>=60 && marks_obtained<=69)
{
    
    printf("\nGrade: C");
    printf("\nResult: Pass");
}
else if (marks_obtained>=50 && marks_obtained<=59)
{

    printf("\nGrade: D");
    printf("\nResult: Pass");
}
else{
    printf("\nGrade: F");
    printf("\nResult: Fail");
}
}


return 0;
}