// Write a program to input a month number and print the number of days in it using if-else.
#include<stdio.h>
int main(){
    int month_number;
    
    printf("input a month number(1-12):");
    scanf("%d",&month_number);
    if (month_number==1||month_number==3||month_number==5||month_number==7||month_number==8||month_number==10||month_number==12)
    {
        printf("number of days in mouths is 31");
    }
    else if (month_number==4||month_number==6||month_number==9||month_number==11)
    {
        printf("number of days in mouths is 30");
    }
    else if(month_number==2)
    {
        printf("number of days in mouths is 28 0r 29 (leap year)");
    }
    else
    {
        printf("only 12 months in a years");
    }
     return 0;
}