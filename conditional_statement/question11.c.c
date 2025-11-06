#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter a: ");
    scanf("%d",&a);

    printf("enter b:  ");
    scanf("%d",&b);

    printf("enter c:  ");
    scanf("%d",&c);
if (a>=b)
{
    if (a>=c)

    printf("A is greater number:%d",a);
 else

   printf("C is greater number:%d",c);

} 
else{
if (b>=c)

    printf("B is greater number:%d",b);

else

    printf("C is greater number:%d",c);

}

return 0;
}