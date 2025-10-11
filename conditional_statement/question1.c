//Find the largest number among the three numbers.


#include <stdio.h>
int main()
{
     int c , b , a ;
     printf("enter a ,b and c");
     scanf("%d%d%d",&a,&b,&c);
     if ((a>=b)&&(a>=c))
     {
        printf("A is largest number:%d",a);
     }
     else if (b>=c)
     {
       printf("B is largest number:%d",b);
     }
     else
     {
       printf("C is largest number:%d",c);
     }
    return 0; 
       
}