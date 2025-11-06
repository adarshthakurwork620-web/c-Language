#include<stdio.h>
int main(){
    int Age,Passward,grade;
    char user_id;
    printf("Enter user_id:\nPassward:\nAge:\ngrade:\n");
    scanf("%S%d%d%d",&user_id,&Passward,&Age,&grade);
    if (user_id=='A'){if (Passward==7622)printf("login succesful\n");}
    if (user_id!='A'||Passward!=7622){ printf("Wrong crendical\n");}
    if (Age>=18){printf("eligible to login\n");}if (Age<18){printf("Not eligible to login\n");}
    if (grade>=90){printf("suitable condiate\n");}if (grade<90){printf("Not suitable condiate\n");}
    return 0;}
