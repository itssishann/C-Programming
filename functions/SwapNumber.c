#include <stdio.h>
int main()
{
    int a;
    printf("Enter Your Number First:");
    scanf("%d", &a);
    int b;
    printf("Enter Your Number Second:");
    scanf("%d", &b);
     printf("Your A is =%d\n",a);
 printf("Your B is =%d\n",b);
  a=a+b; // a=5 b=2 == 5+2 =7 a=7
  b=a-b; //7-2=5 b=5
 a=a-b; // 7-5=a=2
 printf("Swap A is =%d\n",a);
 printf("Swap B is =%d\n",b);
    
   
 
}