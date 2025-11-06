#include<stdio.h>
int main(){
    char name;
    int  roll,math, science,computer,hindi,english;
    float total,percent;


    printf("_____________MARKSHEET_____________\n");


    printf("Name:");
    scanf("%s",&name);
   
    printf("ROLL NO:");
    scanf("%d",&roll);
    printf("Math:    ");
    scanf("%d",&math);
    printf("science: ");
    scanf("%d",&science);
    printf("Computer:");
    scanf("%d",&computer);
    printf("Hindi:   ");
    scanf("%d",&hindi);
    printf("English: ");
    scanf("%d",&english);

    total=math+science+computer+hindi+english;
    percent=total/5;
    
    printf("Percentage:%f\n",percent);

    if (percent>90)
    {
       printf("Grade:A");
    }
    else if (percent<90&&percent>80)
    {
        printf("Grade:B");
    }
    
    else if (percent<80&&percent>70)
    {
      printf("Grade:c");
    }
    else if (percent<70&&percent>50)
    {
       printf("Grade:D");
    }
    else
    {
        printf("you are need to deserve to death");
    }
    return 0;
     
    
    

} 
