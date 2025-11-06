// WAP to open account in respective bank when there is customer name customer age customer mobile number and customer account number 
// Also perform deposit and credit operation in respective bank 
// Also display remaining amount is available in the account after deposit and credit process
#include<stdio.h>
int main(){

int amount,deposit,credit;

printf("NAME: Adarsh kumar\n");
printf("AGE: 18\n");
printf("ACCOUNT NUMBER: 620126111188\n");
printf("MOBILE NUMBER: 6201261188\n");
printf("enter your amount:");
scanf("%d",&amount);
printf("enter your deposit:");
scanf("%d",&deposit  );
printf("enter your credit:"); 
scanf("%d",&credit  );
 if (deposit)
 {                                                                                                    
printf("remaining amount is available the account after deposit:%d\n",amount + deposit);
 }  
 if (credit){
printf("remaining amount is available the account after credit:%d",amount - credit);
 }
return 0;
}          
