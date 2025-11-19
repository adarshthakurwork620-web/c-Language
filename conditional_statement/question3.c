#include<stdio.h>
int main(){
    int i,j,row;
    printf("enter the row:");
    scanf("%d",&row);

    for ( i = row; i >= 1; i--)
    {
        for ( j = i; j >=1; j--)
        {
            printf("%d",i);
        }
        printf("\n");
    }


}